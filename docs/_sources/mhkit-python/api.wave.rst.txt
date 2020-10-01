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
and manipulate National Data Buoy Center (NDBC) data.

.. autosummary:: 
   :nosignatures:

   ~mhkit.wave.io.ndbc.available_data
   ~mhkit.wave.io.ndbc.request_data
   ~mhkit.wave.io.ndbc.to_datetime_index
   ~mhkit.wave.io.ndbc.dates_to_datetime
   ~mhkit.wave.io.ndbc.read_file 
   ~mhkit.wave.io.ndbc.parameter_units 
   
   
.. automodule:: mhkit.wave.io.ndbc
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
   ~mhkit.wave.resource.bretschneider_spectrum
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
   ~mhkit.wave.resource.wave_celerity
   ~mhkit.wave.resource.wave_number
   ~mhkit.wave.resource.environmental_contour
 
.. TODO Add Binned matrix:  bins data, import from river.device
 
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
   
.. automodule:: mhkit.wave.graphics
    :members:
    :undoc-members:
    :show-inheritance: