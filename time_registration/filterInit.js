   var filter ={
       init : function() {  
           filter.config = {
              casesHtml : jQuery("#cases").html(),
           };
        filter.filterInit();
        jQuery("#filter").val('');
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
            
             
             jQuery("#cases").html(filter.config.casesHtml);
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

   
   }

