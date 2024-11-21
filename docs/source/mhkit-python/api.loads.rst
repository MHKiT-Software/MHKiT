.. _loads_api:

Loads Module
^^^^^^^^^^^^^^^^^^^^
The loads module contains a set of functions to calculate quantities of interest for mechanical loads assessments.

General
""""""""""""

.. automodule:: mhkit.loads.general
    :members:
    :no-undoc-members:
    :show-inheritance:
    
       .. autosummary:: 
          :nosignatures:

          ~bin_statistics
          ~blade_moments
          ~damage_equivalent_load

Graphics
""""""""""""

.. automodule:: mhkit.loads.graphics
    :members:
    :no-undoc-members:
    :show-inheritance:

       .. autosummary::
          :nosignatures:

          ~plot_statistics
          ~plot_bin_statistics

Extreme
""""""""""""
   
.. automodule:: mhkit.loads.extreme
    :members:
    :no-undoc-members:
    :show-inheritance:

       .. autosummary::
          :nosignatures:

          ~global_peaks
          ~number_of_short_term_peaks
          ~peaks_distribution_weibull
          ~peaks_distribution_weibull_tail_fit
          ~peaks_distribution_peaks_over_threshold
          ~ste_peaks
          ~block_maxima
          ~ste_block_maxima_gev
          ~ste_block_maxima_gumbel
          ~short_term_extreme
          ~full_seastate_long_term_extreme
          ~mler_coefficients
          ~mler_simulation
          ~mler_wave_amp_normalize
          ~mler_export_time_series
