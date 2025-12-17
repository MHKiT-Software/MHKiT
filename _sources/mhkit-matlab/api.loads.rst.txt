.. _loads_api_matlab:

Loads Module
^^^^^^^^^^^^^^^^^^^^
The loads module contains a set of functions to calculate quantities of interest for mechanical loads assessments.

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.wave.io.read_NDBC_file`` simply use ``read_NDBC_file``. 

General
""""""""""""
The graphics submodule contains functions to compute loads related metrics.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``bin_statistics``                            Bins calculated statistics against data signal (or channel) according to IEC TS 62600-3:2020 ED1.
``damage_equivalent_load``                    Calculates the damage equivalent load of a single data signal (or channel) based on IEC TS 62600-3:2020 ED1.
``blade_moments``                             Transfer function for deriving blade flap and edge moments using blade matrix.
===========================================  ========================= 

.. mat:automodule:: mhkit.loads.general
    :members:
    :no-undoc-members:
    :show-inheritance:

Extreme
""""""""""""
The extreme submodule contains tools and functions for extreme value analysis
and wave data statistics. It includes methods for calculating peaks over threshold, estimating
short-term extreme distributions,and performing wave amplitude 
normalization for most likely extreme response analysis.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``block_maxima``                              Find the block maxima of a time-series.
``full_seastate_long_term_extreme``           Return the long-term extreme distribution of a response of interest using the full sea state approach.
``global_peaks``                              Find the global peaks of a zero-centered response time-series.
``mler_coefficients``                         Calculate MLER (most likely extreme response) coefficients from a sea state spectrum and a response RAO.
``mler_export_time_series``                   Generate the wave amplitude time series at X0 from the calculated MLER coefficients
``mler_simulation``                           Define the simulation parameters that are used in various MLER functionalities.
``mler_wave_amp_normalize``                   Renormalizes the incoming amplitude of the MLER wave to the desired peak height (peak to MSL).
``number_of_short_term_peaks``                Estimate the number of peaks in a specified period.
``peaks_distribution_peaks_over_threshold``   Estimate the peaks distribution by fitting a generalized Pareto distribution.
``peaks_distribution_weibull``                Estimate the peaks distribution by fitting a Weibull distribution to the peaks of the response.
``peaks_distribution_weibull_tail_fit``       Estimate the peaks distribution by using the Weibull tail fit method.
``short_term_extreme``                        Estimate the peaks distribution by fitting a Weibull distribution to the peaks of the response.
``ste_block_maxima_gev``                      Approximate the short-term extreme distribution using the block maxima method and the Generalized Extreme Value distribution.
``ste_block_maxima_gumbel``                   Approximate the short-term extreme distribution using the block maxima method and the Gumbel (right) distribution.
``ste_peaks``                                 Estimate the peaks distribution by fitting a Weibull distribution to the peaks of the response.
===========================================  ========================= 

.. mat:automodule:: mhkit.loads.extreme
    :members:
    :no-undoc-members:
    :show-inheritance:

Graphics
""""""""""""
The graphics submodule contains functions to plot loads data and related metrics.
The functions are designed to work in parallel with the :class:`~mhkit.loads.general` submodule.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``plot_statistics``                           Plot showing standard raw statistics of variable
``plot_bin_statistics``                       Plot showing standard binned statistics of single variable
===========================================  ========================= 

.. mat:automodule:: mhkit.loads.graphics
    :members:
    :no-undoc-members:
    :show-inheritance:
