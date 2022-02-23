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
   ~mhkit.loads.extreme.npeaks_st
   ~mhkit.loads.extreme.peaks_distribution_Weibull
   ~mhkit.loads.extreme.peaks_distribution_WeibullTailFit
   ~mhkit.loads.extreme.peaks_distribution_peaksOverThreshold
   ~mhkit.loads.extreme.ste_peaks
   ~mhkit.loads.extreme.blockMaxima
   ~mhkit.loads.extreme.ste_block_maxima_GEV
   ~mhkit.loads.extreme.ste_block_maxima_Gumbel
   ~mhkit.loads.extreme.short_term_extreme
   ~mhkit.loads.extreme.full_seastate_long_term_extreme
   ~mhkit.loads.extreme.MLERcoeffsGen
   
.. automodule:: mhkit.loads.extreme
    :members:
    :no-undoc-members:
    :show-inheritance: