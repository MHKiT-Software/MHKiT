.. _wave:

Wave Module
------------

The wave module contains a set of functions to
calculate quantities of interest for wave energy converters (WEC). 
The wave module contains the following submodules:

* :ref:`wave_io`: Loads data from standard formats
* :ref:`wave_resource`: Computes resource metrics such as spectra and significant wave height
* :ref:`wave_performance`: Computes performance metrics such as capture length matrix and mean annual energy production
* :ref:`wave_graphics`: Generates graphics

Data formats
^^^^^^^^^^^^^^^^

The wave module uses wave elevation time series data and spectra data.

* **Wave elevation time series data** is stored as a pandas DataFrame indexed by time.  
  Time can be specified in datetime or in seconds.  The column names 
  describe the type of data in each column (for example, data from multiple sensors).

* **Spectra data** is stored as a pandas DataFrame index by frequency in Hz. The column names 
  describe the type of data in each column (for example, Bretschneider and JONSWAP spectra).  
  
Note that spectra data is sometimes stored in time series format (data indexed by time, with one 
column for each frequency).  To convert time series format to the spectra data format, 
use the pandas method ``transpose``.

.. _wave_io:

IO
^^^^^^^^^^^^
The io submodule contains the following function to load National Data Buoy Center (NDBC) 
data file into a pandas DataFrame, including real time and historical data.

.. autosummary::
   :nosignatures:

   ~mhkit.wave.io.read_NDBC_file
   
.. _wave_resource:

Resource
^^^^^^^^^^^^^^

The resource submodule contains functions compute wave energy spectra and metrics.

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
                              
.. TODO Add Binned matrix:  bins data, import from river.device

.. _wave_performance:

Performance
^^^^^^^^^^^^^^^^^^^

The performance submodule contains functions to compute capture length, statistics, 
performance matrices, and mean annual energy production.

.. autosummary::
   :nosignatures:

   ~mhkit.wave.performance.capture_length
   ~mhkit.wave.performance.statistics
   ~mhkit.wave.performance.capture_length_matrix
   ~mhkit.wave.performance.wave_energy_flux_matrix
   ~mhkit.wave.performance.power_matrix
   ~mhkit.wave.performance.mean_annual_energy_production_timeseries
   ~mhkit.wave.performance.mean_annual_energy_production_matrix
   ~mhkit.wave.performance.dc_power
   ~mhkit.wave.performance.ac_power_three_phase
 
.. TODO Add Response amplitude operator
.. TODO Add Watch circle

.. _wave_graphics:

Graphics
^^^^^^^^^^^^

The graphics submodule contains functions to plot wave data and related metrics.  

.. autosummary::
   :nosignatures:

   ~mhkit.wave.graphics.plot_elevation_timeseries
   ~mhkit.wave.graphics.plot_spectrum
   ~mhkit.wave.graphics.plot_matrix
