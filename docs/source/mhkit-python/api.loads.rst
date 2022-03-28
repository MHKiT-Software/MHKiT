.. _loads_api:

Loads Module
^^^^^^^^^^^^^^^^^^^^
The loads module contains a set of functions to calculate quantities of interest for mechanical loads assessments.

General
""""""""""""
The loads general submodule contains general loads calculations that can be applied to most MRE devices. 

.. autosummary:: 
   :nosignatures:

   ~mhkit.loads.general.bin_statistics
   ~mhkit.loads.general.blade_moments
   ~mhkit.loads.general.damage_equivalent_load

   
.. automodule:: mhkit.loads.general
    :members:
    :no-undoc-members:
    :show-inheritance:


Graphics
""""""""""""
The graphics submodule contains functions to plot loads metrics.

.. autosummary::
   :nosignatures:

   ~mhkit.loads.graphics.plot_statistics
   ~mhkit.loads.graphics.plot_bin_statistics
   
.. automodule:: mhkit.loads.graphics
    :members:
    :no-undoc-members:
    :show-inheritance:


Extreme
""""""""""""
The extreme submodule contains functions to calculate peak distribution.

.. autosummary::
   :nosignatures:

   ~mhkit.loads.extreme.global_peaks
   ~mhkit.loads.extreme.number_of_short_term_peaks
   ~mhkit.loads.extreme.peaks_distribution_weibull
   ~mhkit.loads.extreme.peaks_distribution_weibull_tail_fit
   ~mhkit.loads.extreme.peaks_distribution_peaks_over_threshold
   ~mhkit.loads.extreme.ste_peaks
   ~mhkit.loads.extreme.block_maxima
   ~mhkit.loads.extreme.ste_block_maxima_gev
   ~mhkit.loads.extreme.ste_block_maxima_gumbel
   ~mhkit.loads.extreme.short_term_extreme
   ~mhkit.loads.extreme.full_seastate_long_term_extreme
   ~mhkit.loads.extreme.mler_coefficients
   ~mhkit.loads.extreme.mler_simulation
   ~mhkit.loads.extreme.mler_wave_amp_normalize
   ~mhkit.loads.extreme.mler_export_time_series
   
.. automodule:: mhkit.loads.extreme
    :members:
    :no-undoc-members:
    :show-inheritance: