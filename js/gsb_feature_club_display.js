(function ($) {
  Drupal.behaviors.gsb_feature_club_display = {
    attach: function (context, settings) {
      $('input[name="exposed[club_filter_by]"]').change(function () {
        if ($(this).val() == 'nid') {
          $('#edit-exposed-term-node-tid-depth').val('');
        }
        else {
          $('#edit-exposed-nid').val('');
        }
      });
    }
  }
})(jQuery);