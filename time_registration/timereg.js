  var timeRegForm = {
  clear : function() {
          jQuery("#hours").val(''); 
          jQuery("#description").val(''); 
          jQuery("#comment").val(''); 
          jQuery("#filter").val('');
          jQuery("#cases").html(timeRegForm.config.casesHtml);
          },

  save : function() {
           var formData = jQuery("#time-registration-form").serialize();
           var caseID = jQuery("#case_id option:selected").val();
           var caseName = jQuery("#cases option:selected").html();
           var accountID = timeRegForm.config.casesToAccounts[caseID];
           formData = formData+"&account_id="+accountID+"&caseName="+caseName;
           jQuery.ajax({
             url: 'timereg/save',
             dataType: 'json',
             data: formData,
             success: function(data){
               if ( !data.error )
               {
                 timeRegForm.clear();
                 timeRegForm.log('succes',data.msg);
                  jQuery("#filter").focus();
               }
               else
               {
                 timeRegForm.log('error',data.msg);
               }
             }
           
           });
           return false;  
         },

  log : function( type, msg) {
        jQuery("#log").prepend('<div class="'+type+'">'+msg+'</div');
        },

  validatorInit : function() {
                jQuery("#time-registration-form").validate({
                    rules : {
                          case_id: "required",
                          hours: "required",
                          description: "required",
                          day: "required",
                          year: {
                                required: true,
                                minlength: 4
                              }
                              },
                      messages : {
                                 hours : 'Feltet er påkrævet'
                               },
                      submitHandler: function() {
                                     timeRegForm.save();
                                   }
                    });
                  },

  filterInit : function() {
      
           jQuery("#filter").keyup(function() {
             var input = jQuery("#filter").val();
             var name = '';

             // smart case detection :)
             var hasUpperCase = false;
             if ( input != input.toLowerCase() )
             {
               hasUpperCase = true;
               jQuery("#smartcase").show();
             }
             else
             {
               jQuery("#smartcase").hide();
             }

             // TODO: should not be called on every keypress
             timeRegForm.addOptions('#cases',timeRegForm.config.cases);
             jQuery("#cases").html(timeRegForm.config.casesHtml);
             jQuery("#cases option").each(function() {
                if ( !hasUpperCase )
                {
                  name = jQuery(this).text().toLowerCase();
                }
                else
                {
                  name = jQuery(this).text();
                }
                if ( name.indexOf( input ) == -1 )
                {
                  // have to use remove() instead of hide(), because arrow down keypress in the case list will still select the hidden elements
                  jQuery(this).remove();
                }
             });
               
           });
           },

  refreshCases : function() {
                   jQuery.ajax({
                     url: 'timereg/jsInit',
                     dataType: 'json',
                     success: function(data){
                       if ( !data.error )
                       {
                         timeRegForm.config.cases = data.cases;
                         timeRegForm.config.casesToAccounts = data.casesToAccounts;
                         timeRegForm.config.casesHtml = timeRegForm.addOptions('#cases',data.cases);
                         jQuery("#cases").focus();
                       }
                       else
                       {
                         timeRegForm.log('error',data.msg);
                       }
                     }
                   });
                 },

  init : function() {
           timeRegForm.config = {
             cases : {},
             casesToAccounts : {},
             casesHtml : ''
           };  
          jQuery.ajax({
             url: 'timereg/jsInit',
             dataType: 'json',
             success: function(data){ 
              
               if ( !data.error )
               {
                 timeRegForm.config.cases = data.cases;
                 timeRegForm.config.casesToAccounts = data.casesToAccounts;
                 timeRegForm.config.casesHtml = timeRegForm.addOptions('#cases',data.cases);
                 timeRegForm.validatorInit();
                 timeRegForm.filterInit();
                 jQuery("#filter").focus();
               }
               else
               {
                 timeRegForm.log('error',data.msg);
               }
             },                              
           });

      jQuery("#refresh_cases").click(function(e) {
             e.preventDefault();
             timeRegForm.refreshCases();
             jQuery("#filter").focus();
           });
  },

  addOptions : function(dest,options) {
               var html = '';
               for(var i in options)
               {
                 html = html +'<option value="'+ options[i].id+'">'+options[i].name+'</option>';
               }
               jQuery(dest).html(html);
               return html;
               }

};


