.. raw:: html

    <hr style="height:4px;border:none;color:#4682b4;background-color:#4682b4;" />

.. _wave:

Wave Module
------------

The :class:`~mhkit.wave` module contains a set of functions to
calculate quantities of interest for wave energy converters (WEC). 
The wave module contains the following submodules:

* :class:`~mhkit.wave.io`: Loads data from standard formats
* :class:`~mhkit.wave.resource`: Computes resource metrics such as spectra and significant wave height
* :class:`~mhkit.wave.performance`: Computes performance metrics such as capture length matrix and mean annual energy production
* :class:`~mhkit.wave.graphics`: Generates graphics

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

IO
^^^^^^^^^^^^
The :class:`~mhkit.wave.io` submodule contains the following function to load National Data Buoy Center (NDBC) 
data file into a pandas DataFrame, including real time and historical data.

.. autosummary::

   ~mhkit.wave.io.read_NDBC_file
   
Pandas includes many options to load data in other formats directly into a DataFrame.

Resource
^^^^^^^^^^^^^^

The :class:`~mhkit.wave.resource` submodule contains functions compute wave energy spectra and metrics.

.. Note:: 
   Are these tables helpful if they are in the API doc? Kelley things a general overview and then link to API doc would be more helpful

The following functions can be used to compute wave energy spectra:

.. autosummary::

   ~mhkit.wave.resource.elevation_spectrum
   ~mhkit.wave.resource.pierson_moskowitz_spectrum
   ~mhkit.wave.resource.bretschneider_spectrum
   ~mhkit.wave.resource.jonswap_spectrum
   
The following functions can be used to compute wave metrics from spectra:

.. autosummary::

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

Performance
^^^^^^^^^^^^^^^^^^^

The :class:`~mhkit.wave.performance` submodule contains functions to compute capture length, statistics, 
performance matrices, and mean annual energy production.

.. autosummary::

   ~mhkit.wave.performance.capture_length
   ~mhkit.wave.performance.statistics
   ~mhkit.wave.performance.capture_length_matrix
   ~mhkit.wave.performance.wave_energy_flux_matrix
   ~mhkit.wave.performance.power_matrix
   ~mhkit.wave.performance.mean_annual_energy_production_timeseries
   ~mhkit.wave.performance.mean_annual_energy_production_matrix
 
.. TODO Add Response amplitude operator
.. TODO Add Watch circle

Graphics
^^^^^^^^^^^^

The :class:`~mhkit.wave.graphics` submodule contains functions to plot wave data and related metrics.  

.. autosummary::

   ~mhkit.wave.graphics.plot_elevation_timeseries
   ~mhkit.wave.graphics.plot_spectrum
   ~mhkit.wave.graphics.plot_matrix
