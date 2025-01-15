.. _wave_api:

Wave Module
===========
The wave module contains a set of functions to
calculate quantities of interest for wave energy converters (WEC).

The wave module uses wave elevation time series data and spectra data.

.. automodule:: mhkit.wave
    :members:
    :no-undoc-members:
    :show-inheritance:

IO
---
The io submodule contains the following functions to request, load,
and manipulate `CDiP <http://cdip.ucsd.edu>`_ data, `National Data Buoy Center (NDBC) <https://www.ndbc.noaa.gov/>`_ data, 
`WPTO Hindcast <https://registry.opendata.aws/wpto-pds-us-wave/>`_ data, and `WIND Toolkit data <https://registry.opendata.aws/nrel-pds-wtk/>`_ data. 
The io module also has functions to load and manipulate 
`WEC-Sim <http://wec-sim.github.io/WEC-Sim/>`_ and `SWAN <https://sandialabs.github.io/SNL-SWAN/>`_ model data.

.. automodule:: mhkit.wave.io
    :members:
    :no-undoc-members:
    :show-inheritance:

CDiP
^^^^

.. automodule:: mhkit.wave.io.cdip
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary:: 
      :nosignatures:

      ~request_netCDF
      ~request_parse_workflow
      ~get_netcdf_variables

NDBC
^^^^

.. automodule:: mhkit.wave.io.ndbc
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary:: 
      :nosignatures:

      ~read_file 
      ~available_data
      ~request_data
      ~to_datetime_index
      ~dates_to_datetime
      ~parameter_units 
      ~request_directional_data
      ~create_spread_function
      ~create_directional_spectrum
      ~get_buoy_metadata

SWAN
^^^^

.. automodule:: mhkit.wave.io.swan
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary:: 
      :nosignatures:

      ~read_table
      ~read_block
      ~dictionary_of_block_to_table
      ~block_to_table

WEC-Sim
^^^^^^^
.. automodule:: mhkit.wave.io.wecsim
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary:: 
      :nosignatures:

      ~read_output

WIND Toolkit Hindcast
^^^^^^^^^^^^^^^^^^^^^
.. automodule:: mhkit.wave.io.hindcast.wind_toolkit
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary:: 
      :nosignatures:

      ~region_selection
      ~get_region_data
      ~plot_region
      ~elevation_to_string
      ~request_wtk_point_data

WPTO Hindcast
^^^^^^^^^^^^^

.. automodule:: mhkit.wave.io.hindcast.hindcast
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary:: 
      :nosignatures:

      ~region_selection
      ~request_wpto_point_data
      ~request_wpto_directional_spectrum
    
Resource
--------
The resource submodule contains functions compute wave energy spectra 
and metrics.

.. automodule:: mhkit.wave.resource
   :members:
   :undoc-members:
   :show-inheritance:

   The following functions can be used to compute wave energy spectra:

   .. autosummary::
      :nosignatures:

      ~elevation_spectrum
      ~pierson_moskowitz_spectrum
      ~jonswap_spectrum

   The following functions can be used to compute wave metrics from spectra:

   .. autosummary::
      :nosignatures:

      ~surface_elevation
      ~frequency_moment
      ~significant_wave_height
      ~average_zero_crossing_period
      ~average_crest_period
      ~average_wave_period
      ~peak_period
      ~energy_period
      ~spectral_bandwidth
      ~spectral_width
      ~energy_flux
      ~energy_period_to_peak_period
      ~wave_celerity
      ~wave_length
      ~wave_number
      ~depth_regime

Performance
-----------
The performance submodule contains functions to compute capture length, 
statistics, performance matrices, and mean annual energy production.

.. automodule:: mhkit.wave.performance
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~capture_length
      ~statistics
      ~capture_length_matrix
      ~wave_energy_flux_matrix
      ~power_matrix
      ~mean_annual_energy_production_timeseries
      ~mean_annual_energy_production_matrix
      ~power_performance_workflow

.. TODO Add Response amplitude operator
.. TODO Add Watch circle

Graphics
--------
The graphics submodule contains functions to plot wave data and related metrics.  

.. automodule:: mhkit.wave.graphics
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~plot_spectrum
      ~plot_elevation_timeseries
      ~plot_matrix
      ~plot_chakrabarti
      ~plot_environmental_contour
      ~plot_avg_annual_energy_matrix
      ~monthly_cumulative_distribution
      ~plot_compendium
      ~plot_boxplot
      ~plot_directional_spectrum

Contours
--------
Contains functions for calculating environmental contours of extreme seastates  

.. automodule:: mhkit.wave.contours
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~environmental_contours
      ~PCA_contour
      ~samples_full_seastate
      ~samples_contour
