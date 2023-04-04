.. _wave_api:

Wave Module
^^^^^^^^^^^^^^^^^^^^
The wave module contains a set of functions to
calculate quantities of interest for wave energy converters (WEC).

The wave module uses wave elevation time series data and spectra data.

* **Wave elevation time series data**   is stored as a pandas DataFrame 
  indexed by time. Time can be specified in datetime or in seconds.  
  The column names describe the type of data in each column (for 
  example, data from multiple sensors).

* **Spectra data**    is stored as a pandas DataFrame and may be indexed 
  by frequency in Hz or datetime. The resource and graphic modules  
  expects spectra indexed by frequency. Timeseries spectra may be 
  passed to these functions using after ausing the  pandas method 
  ``transpose``.

.. This doesn't generate anything
.. automodule:: mhkit.wave
    :members:
    :no-undoc-members:
    :show-inheritance:
    
IO
""""""
The io submodule contains the following functions to request, load,
and manipulate `National Data Buoy Center (NDBC) <https://www.ndbc.noaa.gov/>`_ data, `WPTO Hindcast <https://registry.opendata.aws/wpto-pds-us-wave/>`_data, and 
`CDiP <http://cdip.ucsd.edu>`_ data. The io module also has functions to load and manipulate 
`WEC-Sim <http://wec-sim.github.io/WEC-Sim/>`_ and `SWAN <https://snl-waterpower.github.io/SNL-SWAN/>`_ model data.


.. autosummary:: 
   :nosignatures:

   ~mhkit.wave.io.ndbc.read_file 
   ~mhkit.wave.io.ndbc.available_data
   ~mhkit.wave.io.ndbc.request_data
   ~mhkit.wave.io.ndbc.to_datetime_index
   ~mhkit.wave.io.ndbc.dates_to_datetime
   ~mhkit.wave.io.ndbc.parameter_units 
   ~mhkit.wave.io.wecsim.read_output
   ~mhkit.wave.io.swan.read_table
   ~mhkit.wave.io.swan.read_block
   ~mhkit.wave.io.swan.dictionary_of_block_to_table
   ~mhkit.wave.io.swan.block_to_table
   ~mhkit.wave.io.hindcast.request_wpto_point_data
   ~mhkit.wave.io.hindcast.request_wpto_directional_spectrum
   ~mhkit.wave.io.cdip.request_netCDF
   ~mhkit.wave.io.cdip.request_parse_workflow
   ~mhkit.wave.io.cdip.get_netcdf_variables



   
CDiP Data
++++++++++++
   
.. automodule:: mhkit.wave.io.cdip
    :members:
    :undoc-members:
    :show-inheritance:
    

NDBC Data
+++++++++

.. automodule:: mhkit.wave.io.ndbc
    :members:
    :undoc-members:
    :show-inheritance:

SWAN Data
+++++++++

.. automodule:: mhkit.wave.io.swan
    :members:
    :undoc-members:
    :show-inheritance:

WEC-Sim Data
++++++++++++
   
.. automodule:: mhkit.wave.io.wecsim
    :members:
    :undoc-members:
    :show-inheritance:

WPTO Hindcast Data
++++++++++++++++++
   
.. automodule:: mhkit.wave.io.hindcast.hindcast
    :members:
    :undoc-members:
    :show-inheritance:
    
WIND Toolkit Data
+++++++++++++++++
   
.. automodule:: mhkit.wave.io.hindcast.wind_toolkit
    :members:
    :undoc-members:
    :show-inheritance:
    
Resource
""""""""""""
The resource submodule contains functions compute wave energy spectra 
and metrics.

The following functions can be used to compute wave energy spectra:

.. autosummary::
   :nosignatures:

   ~mhkit.wave.resource.elevation_spectrum
   ~mhkit.wave.resource.pierson_moskowitz_spectrum
   ~mhkit.wave.resource.jonswap_spectrum
   
The following functions can be used to compute wave metrics from spectra:

.. autosummary::
   :nosignatures:

   ~mhkit.wave.resource.surface_elevation
   ~mhkit.wave.resource.frequency_moment
   ~mhkit.wave.resource.significant_wave_height
   ~mhkit.wave.resource.average_zero_crossing_period
   ~mhkit.wave.resource.average_crest_period
   ~mhkit.wave.resource.average_wave_period
   ~mhkit.wave.resource.peak_period
   ~mhkit.wave.resource.energy_period
   ~mhkit.wave.resource.spectral_bandwidth
   ~mhkit.wave.resource.spectral_width
   ~mhkit.wave.resource.energy_flux
   ~mhkit.wave.resource.energy_period_to_peak_period
   ~mhkit.wave.resource.wave_celerity
   ~mhkit.wave.resource.wave_number
   ~mhkit.wave.resource.depth_regime
   ~mhkit.wave.resource.wave_length
 
 
.. automodule:: mhkit.wave.resource
    :members:
    :undoc-members:
    :show-inheritance:

Performance
""""""""""""
The performance submodule contains functions to compute capture length, 
statistics, performance matrices, and mean annual energy production.

.. autosummary::
   :nosignatures:

   ~mhkit.wave.performance.capture_length
   ~mhkit.wave.performance.statistics
   ~mhkit.wave.performance.capture_length_matrix
   ~mhkit.wave.performance.wave_energy_flux_matrix
   ~mhkit.wave.performance.power_matrix
   ~mhkit.wave.performance.mean_annual_energy_production_timeseries
   ~mhkit.wave.performance.mean_annual_energy_production_matrix
   
.. automodule:: mhkit.wave.performance
    :members:
    :undoc-members:
    :show-inheritance:

.. TODO Add Response amplitude operator
.. TODO Add Watch circle

Graphics
""""""""""""
The graphics submodule contains functions to plot wave data and related metrics.  

.. autosummary::
   :nosignatures:

   ~mhkit.wave.graphics.plot_spectrum
   ~mhkit.wave.graphics.plot_elevation_timeseries
   ~mhkit.wave.graphics.plot_matrix
   ~mhkit.wave.graphics.plot_chakrabarti
   ~mhkit.wave.graphics.plot_environmental_contour
   ~mhkit.wave.graphics.plot_compendium
   ~mhkit.wave.graphics.plot_boxplot
   ~mhkit.wave.graphics.plot_avg_annual_energy_matrix
   ~mhkit.wave.graphics.monthly_cumulative_distribution

.. automodule:: mhkit.wave.graphics
    :members:
    :undoc-members:
    :show-inheritance:

Contours
""""""""""""
Contains functions for calculating environmental contours of extreme seastates  

.. autosummary::
   :nosignatures:

   ~mhkit.wave.contours.environmental_contours
   ~mhkit.wave.contours.PCA_contour
   ~mhkit.wave.contours.samples_full_seastate
   ~mhkit.wave.contours.samples_contour

.. automodule:: mhkit.wave.contours
    :members:
    :undoc-members:
    :show-inheritance: