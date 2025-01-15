.. _examples:

Examples
========

Overview
---------

This page details all the available examples of MHKiT functions and features.
Python examples are available as Jupyter notebooks and MATLAB examples as live scripts.
Not all MATLAB examples are available yet but are coming soon.

There are many examples that cover a range of applications and areas of interest.
Search for the following tags to identify relevant examples:

.. list-table::
   :header-rows: 1

   * - Tag
     - Description
   * - wave
     - Examples analyzing a WEC, reading WEC model data, assessing wave resource, etc
   * - current
     - Examples analyzing a CEC, reading WEC model data, assessing current resource, etc
   * - loads
     - Examples assessing extreme loading conditions, extreme responses, WDRT, etc
   * - mooring
     - Examples reading MoorDyn data, visualizing mooring lines motion, etc
   * - power
     - Examples analyzing electrical power production, etc
   * - resource
     - Examples involving marine energy resource characterization
   * - iec
     - Examples utilizing IEC marine energy standards
   * - qc
     - Examples preparing data, doing quality control, etc

.. list-table::
   :header-rows: 1

   * - Title
     - MHKiT-Python
     - MHKiT-MATLAB
     - Description
     - Tags
   * - Quality Control
     - `Notebook <qc_example.ipynb>`__
     - `Live Script <mhkit-matlab/qc_example.html>`__
     - Data quality control workflow example
     - qc
   * - River Example
     - `Notebook <river_example.ipynb>`__
     - `Live Script <mhkit-matlab/river_example.html>`__
     - Visualize river current energy from USGS data
     - current, resource, iec
   * - Tidal Example
     - `Notebook <tidal_example.ipynb>`__
     - Coming soon
     - Visualize velocity duration curve from NOAA tidal data
     - current, resource, iec
   * - Tidal Power Performance Example
     - `Notebook <tidal_performance_example.ipynb>`__
     - `Live Script <mhkit-matlab/tidal_example.html>`__
     - Tidal power performance testing workflow
     - current, iec
   * - ADCP Example
     - `Notebook <adcp_example.ipynb>`__
     - Coming soon
     - Acoustic Doppler Current Profiler (ADCP) analysis workflow
     - current, resource
   * - ADV Example
     - `Notebook <adv_example.ipynb>`__
     - Coming soon
     - Acoustic Doppler Velocimetry (ADV) analysis workflow
     - current, resource
   * - Tanana River Resource Characterization
     - `Notebook <ADCP_Delft3D_TRTS_example.ipynb>`__
     - Coming soon
     - Site-specific river resource characterization
     - current, resource
   * - Delft3D
     - `Notebook <Delft3D_example.ipynb>`__
     - `Live Script <mhkit-matlab/delft3d_example.html>`__
     - Analyze and visualize output from Delft3D
     - current, resource
   * - WEC Power Performance
     - `Notebook <wave_example.ipynb>`__
     - `Live Script <mhkit-matlab/wave_example.html>`__
     - Visualize WEC Power vs. Wave Resource
     - wave, resource, iec
   * - Directional Waves Analysis
     - `Notebook <directional_waves.ipynb>`__
     - Coming soon
     - Visualize directional wave energy spectra from NDBC data
     - wave, resource
   * - Environmental Contours
     - `Notebook <environmental_contours_example.ipynb>`__
     - `Live Script <mhkit-matlab/environmental_contours_example.html>`__
     - Visualize estimates of extreme sea states
     - wave, resource
   * - PacWave Resource Characterization
     - `Notebook <PacWave_resource_characterization_example.ipynb>`__
     - Coming soon
     - Site-specific resource characterization using NDBC data
     - wave, resource, iec
   * - CDIP
     - `Notebook <cdip_example.ipynb>`__
     - `Live Script <mhkit-matlab/cdip_example.html>`__
     - Download and visualize CDIP resource data
     - wave, resource
   * - WEC-Sim
     - `Notebook <wecsim_example.ipynb>`__
     - `Live Script <mhkit-matlab/wecsim_example.html>`__
     - Visualize output from WEC-Sim
     - wave
   * - SWAN
     - `Notebook <SWAN_example.ipynb>`__
     - `Live Script <mhkit-matlab/SWAN_example.html>`__
     - Visualize output from Simulating Waves Nearshore (SWAN)
     - wave
   * - WPTO Hindcast
     - `Notebook <WPTO_hindcast_example.ipynb>`__
     - `Live Script <mhkit-matlab/WPTO_hindcast_example.html>`__
     - Download and visualize WPTO Hindcast data
     - wave, resource
   * - Metocean Analysis
     - `Notebook <metocean_example.ipynb>`__
     - Coming soon
     - Download and visualize NDBC metocean data
     - wave, resource
   * - Upcrossing Analysis
     - `Notebook <upcrossing_example.ipynb>`__
     - Coming soon
     - Analyze the surface elevation of a wave
     - wave
   * - Loads Analysis
     - `Notebook <loads_example.ipynb>`__
     - `Live Script <mhkit-matlab/loads_example.html>`__
     - Compute structural loads quantities of interest
     - loads
   * - Extreme Response MLER
     - `Notebook <extreme_response_MLER_example.ipynb>`__
     - `Live Script <mhkit-matlab/extreme_response_MLER_example.html>`__
     - Extreme conditions model - Most Likely Extreme Response (MLER)
     - loads, wave
   * - Extreme Response Contour
     - `Notebook <extreme_response_contour_example.ipynb>`__
     - `Live Script <mhkit-matlab/extreme_response_contour_example.html>`__
     - Extreme conditions model - contour approach
     - loads, wave
   * - Extreme Response Full Sea State
     - `Notebook <extreme_response_full_sea_state_example.ipynb>`__
     - `Live Script <mhkit-matlab/extreme_response_full_sea_state_example.html>`__
     - Extreme conditions model - full sea state approach
     - loads, wave
   * - Short-Term Extremes
     - `Notebook <short_term_extremes_example.ipynb>`__
     - `Live Script <mhkit-matlab/short_term_extremes_example.html>`__
     - Visualize probability distribution of short-term time series data
     - loads, wave
   * - Electrical Power Analysis
     - `Notebook <power_example.ipynb>`__
     - `Live Script <mhkit-matlab/power_example.html>`__
     - Compute 3-phase power quantities of interest
     - power, iec
   * - Mooring
     - `Notebook <mooring_example.ipynb>`__
     - Coming soon
     - Visualize and analyze output from MoorDyn
     - mooring, wave
   * - Acoustics
     - `Notebook <acoustics_example.ipynb>`__
     - Coming soon
     - Ingest, analyze and visualize passive acoustic output
     - acoustics, iec
   * - Strain Gauge Processing
     - `Notebook <strain_measurement_example.ipynb>`__
     - Coming soon
     - Ingest, analyze and visualize strain gauge measurements
     - strain

All Python Notebooks
---------------------
.. doesn't work for LiveScripts because nbgallery is inherently for notebooks. 
.. Automatically makes a table of notebook names/icons and adds them to the toctree
.. nbgallery::
   :name: example_gallery_python
   :glob:
   
   *_example
   directional_waves
