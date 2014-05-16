(function ($) {
    Drupal.behaviors.address_book = {
        attach: function (context, settings) {
            $('.delete-button').click(function(e){

                if(!confirm('Are you absolutely sure?')){e.preventDefault();}
            });

            $.fn.ajax_link = function(){
            $('#read-more-l').click(function(e){
                    alert('Hi');
                    //if(!confirm('Are you absolutely sure?')){e.preventDefault();}
                });

            }

        }

    };

})(jQuery);