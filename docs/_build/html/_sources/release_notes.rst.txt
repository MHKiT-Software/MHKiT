.. _release_notes:

Release Notes
=============

MHKiT-Python v0.9.0
-------------------
MHKiT v0.9.0 includes significant new features, enhancements, bug fixes, and updates to improve the functionality, performance, and compatibility of MHKiT:
New features:

 * Acoustics Module
    - Introduced a new Acoustics module to MHKiT, providing comprehensive tools for processing and analyzing passive acoustic data from hydrophone recordings.
    - Designed to facilitate compliance with the IEC-TS 62600-40 standard
    - Supports hydrophone models such as SoundTrap and icListen, with functionality to read, calibrate, and process hydrophone data into acoustic metrics.
    - Includes functionalities for:
      - Reading hydrophone data.
      - Performing spectral analyses.
         - spectral density (SPSD) 
         - spectral density levels (SPSDL) 
         - Fractional octave bands (e.g., third-octave, decidecade)
         - Sound Pressure Level (SPL)
      - Applying calibrations.
      - Calculating sound pressure levels.
      - Visualizing results.
      - Audio export
         -  To support users, an example notebook demonstrates the application of this module with workflows.
 * Strain Processing Example
    - The Strain Processing example introduces a workflow for analyzing strain gauge data, particularly from tidal turbine blade testing. While the functions are not included as a formal MHKiT module due to the variability of test setups, this example notebook provides a detailed and practical framework for processing such data.
    - Illustrates the calibration and processing of strain gauge data, showcasing a real-world application in tidal turbine testing.
    - Designed to accommodate the variability in strain gauge testing setups, enabling users to adapt the workflow to their specific needs.
    - Includes figures and explanations to contextualize the analysis and support data interpretation.
    - Reference:
       - Gunawan, B., Haulenbeek, K., Abdellatef, M., Streit, R., Lynn, E., Willis, M., Pendley, D., Gallegos-Patterson, D., Neary, V., Wosnik, M. (2024). Calibration Of Fiber Optic Rosette Sensors For Measuring Bending Moment On Tidal Turbine Blades. International Conference on Ocean Energy, Melbourne, Australia, September 17–19, 2024.

Enhancements: 

 * Wave Resource Module Performance
    - Optimizes the wave.resource module to improve performance and resolve issue #331 by transitioning from xarray.Dataset to xarray.DataArray for core functions. Handling edge cases robustly in pure numpy proved challenging, so the adoption of DataArray strikes a balance between performance and usability.
       - Transitioning to DataArray provides a significant speed-up—up to 1000x faster for very large datasets compared to the previous Dataset implementation.
       - While pure numpy would offer an additional 5-10x speed-up, DataArray ensures better usability and flexibility for both developers and users.
       - Restores the speed of MHKiT’s wave resource functions to their previous state, making the module more efficient for users working with large datasets.
       - Simplified input handling for `elevation_spectrum` and `surface_elevation` functions.
 * Surface Elevation Method Selection
    - Enhanced `surface_elevation` function to handle spectra without a zero frequency index.
    - Introduced an auto method for surface elevation calculations that selects the most suitable computation method based on the input spectrum:
       - Automatically switches to `sum_of_sines` method when Inverse Fast Fourier Transform (IFFT) is not computable.
    - Added warnings to inform users of method changes.
    - Added an optional `frequency_dimension` parameter across all necessary wave.resource functions for better flexibility.
 * DOLfYN Cleaning Functions Update
    - Renamed and enhanced water depth calculation and surface interference removal functions for improved robustness.
    - Added an optional frequency_dimension parameter to relevant wave.resource functions, including significant_wave_height and others, to improve compatibility with xarray formats and enhance input flexibility.
    - Fixed issues identified in Issue #308
 * Reynolds Stress ADCP Estimation Notebook Improvements
    - Removed the `total_tke` function due to limitations of ADCP measurements in accurately estimating smaller turbulent scales and components of TKE.
    - Clarified the assumptions required for ADCP measurements:
       - Assumption of Homogeneity: Minimal vertical motion between beam measurements.
      - Spatial Resolution: Turbulent scales smaller than the beam distance cannot be resolved.
    - Expanded explanations of TKE shear production, emphasizing the limitations of ADCP-derived Reynolds stress and TKE estimations compared to point measurements from ADV and shear probes.
    - Corrected heading rotation logic to prevent rotation beyond 360 degrees.
    - Expanded the ADV notebook to cover all relevant functions, emphasizing the accuracy and reliability of ADV measurements for TKE components and Reynolds stress.
 * Type Handling Improvements
    - Fixed a bug in wave performance Mean Annual Energy Production (MAEP) matrix calculation (Issue #339).
    - Improved type handling between `Datasets` and `DataArrays`, enhancing function robustness.
 * NOAA Request Function Update
    - Fixed imprecise error handling in `mhkit.tidal.io.noaa.request_noaa_data` to ensure meaningful and actionable error messages.
    - Enhanced functionality to support additional NOAA data request parameters (e.g., `datum`) for variables such as water level, water temperature, and salinity.
    - Fixed Issue #223.

Bug fixes:

 * Numpy 2.0 Compatibility
 * Flow Duration Curve Plot Bug Fix
    - Fixed a bug in the flow duration curve plotting function related to matplotlib >= 3.8.
    - Corrected the `sortby` assignment to use the correct value.
 * Matplotlib Version Compatibility
    - Removed the matplotlib version check previously required for versions < 3.8.0.
    - Ensured compatibility with matplotlib >= 3.8.
 * Python 3.12 Support
    - Added support for Python 3.12.
 * Documentation Build Warnings Fix
    - Fixed minor spacing and formatting issues in the documentation that were causing warnings during the build process.

Testing and Continuous Integration Updates:

 * GitHub Actions Enhancements
    - **Notebook Testing**: Added a GitHub Action to test example notebooks as part of the Continuous Deployment (CD) pipeline.
    - Implemented a timeout feature to fail notebooks that exceed a specified execution time.
    - **PyLint Enforcement**: Made the `utils` module PyLint compatible and enforced this compatibility via GitHub Actions.
    - **Testing Environment Consistency**: Updated the GitHub Actions testing environment to use the conda `environment.yml` file for consistency.
    - **Pylint Settings Update**: Updated Pylint settings and disabled specific warnings as necessary.
 * Wind Toolkit Tests Optimization
    - Optimized the Wind Toolkit tests, reducing test runtime from over 3.5 hours to approximately 2 hours by modifying the test data and aligning it with cached data used in the notebooks.
    - Replaced test data with smaller, representative datasets, improving efficiency without sacrificing robustness.
    - Ensured consistent use of cached data between hindcast tests and notebooks to minimize redundant API requests and reduce reliance on live NREL server calls.
 * MacOS Tests Fix
    - Adjusted test tolerances to fix failing tests on MacOS systems.
 * Updated Examples and Notebooks
    - Updated Jupyter notebooks for the new Acoustics module.
    - Fixed typos and updated examples in notebooks, including the Pacwave and CDIP examples.
    - Enhanced strain processing example with additional figures and context.

Other Changes:

 * Updated the README to include `conda-forge` in the conda install command for easier installation.
 * Updated `folium` map calls in the Pacwave example to align with the latest `folium` API changes.
 * Use main as the MHKiT default branch
    - Many modern projects use `main` as the default branch, aligning with the GitHub recommendation and broader conventions.
    - There is some non-linear history in the previous rebase causing issues between `develop` & `master`
    - `main` was created from the current develop branch creating a 1-to-1 liner history between develop and the new main branch


MHKiT-Python v0.8.2
-------------------
MHKiT-Python v0.8.2 adds the following capabilities, bug fixes, and maintenance to MHKiT-Python:

 * Fixes MHKIT v0.8.1 runtime issues requiring matplotlib >3.8.0.
 * Adds ipython notebook tests
 * Drops support for python < 3.10
 * Improves the wind toolkit tests by decreasing the testing time from > 4 hours to roughly 2 hours
 * Improved ADCP TKE example notebook discussion & removal of ADCP TKE function
 * Updated the surface_elevation calculation method to default to sum_of_sines when zero frequency is absent
 * Improved NOAA requests function issue


MHKiT-MATLAB v0.5.0
-------------------
MHKiT-MATLAB v0.5.0 adds the following capabilities, bug fixes, and maintenance to MHKiT-MATLAB:

New Features:

* Addition of the WEC Design Response Toolbox within the `wave` module #127
  - Estimate extreme sea states based on short term data
* Addition of the Delft3D input and analysis within the `tidal` module #124
  - Analyze modeled river/tidal flow data using same tools as ADCP and resource data

Improvements:

* More detailed and complete [installation instructions](https://mhkit-software.github.io/MHKiT/matlab_installation.html)
* Update MATLAB/Python compatibility matrix

Fixes:

* Allow user to specific surface elevation generation method
* Properly map the gamma parameter in the `jonswap` function


MHKiT-Python v0.8.1
-------------------
MHKiT-Python v0.8.1 adds the following bug fixes maintenance to MHKiT-Python:
 * Bug fixes in the example notebooks
 * Fixes the dependencies prior to supporting Numpy 2.0.0.


MHKiT-Python v0.8.0
-------------------
MHKiT-Python v0.8.0 adds the following modules and capabilities to MHKiT-Python:

 * Support for python 3.10 and 3.11
 * Support for xarray input and output across all MHKiT functions
 * Wave module enhancements:
    - Automatic Threshold Calculation for Peaks-Over-Threshold
    - Wave Heights Analysis
    - Enhanced Zero Crossing Analysis
 * DOLfYN enhancements:
    - Altimeter Support
    - Data Handling Improvements
    - Instrument Noise Subtraction
    - Improved File Handling
 * River and Tidal - D3D:
    - Added limits to variable_interpolation and added 3 array input capability to create_points
 * Developer Experience:
    - Black formatting
    - Linting and type hints
    - CI/CD improvements
 * General upkeep and compatibility maintenance
 * General Bug Fixes


MHKiT-Python v0.7.0
-------------------
MHKiT-Python v0.7.0 adds the following modules and capabilities to MHKiT-Python:

 * Mooring Module: We are pleased to introduce the new mooring module. This addition primarily supports outputs from MoorDyn. Within this module, users can:
    - Import data
    - Calculate lay length
    - Visualize mooring line movements in 2D and 3D with graphical animations.
    - Accompanying this module is an example notebook to guide users on its functionalities.
 * Dolfyn Module Revamp: The Dolfyn module has been overhauled. Enhancements include:
    - Turbulence calculation capability
    - Performance measures for tidal power as outlined in IEC/TS 6200-200.
 * New Contributions: A big shoutout to our community member, @mbruggs, for adding the ability to compute surface elevation using IFFT.
 * NDBC Buoy Metadata: Users can now fetch NDBC buoy metadata directly through MHKiT.
 * Delft3D Module Update: Stay up to date with support for the latest Delft3D NetCDF format.
 * Provide a function to convert from Te to Tp using ITTC approximation
 * General upkeep and compatibility maintenance
 * General Bug Fixes


MHKiT-Python v0.6.0
-------------------
MHKiT-Python v0.6.0 adds the following modules and capabilities to MHKiT-Python:

 * Test Suite Restructure: improved the ability to run and edit tests by breaking them out from single files into folders containing tests for specific parts of each submodule
 * Added a metocean module which can pull data from the wind_toolkit with 4 regions and 1-hr or 5-min data
 * Two DOLfYN updates address bug fixes, clean up, and some feature expansion:
    - ADV skipped timesteps, max gap, and attributes
    - error in integral length scale calculation
    - error in despiking function
    - move Reynolds stress and cross-spectral density calculations to ADV folder
    - prevent inaccurate TKE calculation from ADCP velocity input
 * Delft3D z-calculation, timestep, and new example notebook comparing ADV, and D3D river transect data
 * WEC-Sim v5.0 support
 * Return period added for contours
 * Provide a function to convert from Te to Tp using ITTC approximation
 * General upkeep and compatibility maintenance
 * General Bug Fixes


MHKiT-Python v0.5.0 & MHKiT-Matlab v0.4.0
-----------------------------------------
MHKiT-Python v0.5.0 adds the following modules and capabilities to MHKiT-Python:

 * Organization: grouped io specific functions in wave, tidal, and river into io folder
 * Updated Jonswap spectrum to match IEC guidance
 * `dolfyn <https://mhkit-software.github.io/MHKiT/mhkit-python/api.dolfyn.html#dolfyn>`_ Added DOLfYN module to analyze and process ADV and ADCP data
 * `wave.contours <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#contours>`_ Incorporated the remaining WDRT functionality
 * `river.io.d3d <https://mhkit-software.github.io/MHKiT/mhkit-python/api.river.html#io>`_ Added Delft3D case post-processing in the river/ tidal models
 * Fixed a bug in the wave elevation function 
 * Include the last day in CDIP requests and file timezone issues with CDIP
 * Upgrades to processing numpy and pandas version to maintain compatability

MHKiT-Matlab v0.4.0 adds the following modules and capabilities to MHKiT-MATLAB:

 * Updated Jonswap spectrum to match IEC guidance
 * `cdip <https://mhkit-software.github.io/MHKiT/mhkit-matlab/api.wave.html#io>`_ Module: functions for downloading and converting CDiP data into MHKIT formats.
 * `WPTO hindcast <https://mhkit-software.github.io/MHKiT/mhkit-matlab/api.wave.html#io>`_ Module: functions for downloading and converting WPTO Hindcast data into MHKIT formats
 * Fixed a bug in the wave elevation function 


MHKiT v0.4.0
-------------
MHKiT v0.4.0 adds the following modules and capabilities to MHKiT:

 * `wave.io.cdip <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#io>`_ Module: functions for downloading and converting CDiP data into MHKIT formats (MHKiT-Python Only).
 * `wave.io.hindcast <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#io>`_ Module: functions for downloading and converting WPTO Hindcast data into MHKIT formats (MHKiT-Python Only).
 * `wave.io.swan <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#io>`_ Module: functions for importing and converting SWAN data into MHKIT formats.
 * `wave.resource <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#resource>`_ Module: Deep water approximations for wave resource characterization (MHKiT-Python Only).
 * `utils <https://mhkit-software.github.io/MHKiT/utils.html#Utils>`_ Module: Vector averaging capabilities in statistics calculations. 
 * `wave.performance <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#performance>`_ Module: Wave power performance workflow functions.


MHKiT v0.3.1
-------------
 * Ensures compatibility with dependency PECOS v0.1.9 


MHKiT v0.3.0
-------------
MHKiT v0.3.0 adds the following modules to MHKiT:

 * `wave.io.ndbc <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#io>`_ Module: functions for downloading and converting NDBC data into MHKIT formats.
 * `wave.io.wecsim <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#io>`_ Module: functions for converting WEC-Sim data into MHKiT formats.
 * `river.performance <https://mhkit-software.github.io/MHKiT/mhkit-python/api.river.html#performance>`_ and `tidal.performance <https://mhkit-software.github.io/MHKiT/mhkit-python/api.tidal.html#performance>`_ Module: new functionality to assess device performance from blade/rotor type devices.
 * `Loads Module <https://mhkit-software.github.io/MHKiT/mhkit-python/api.loads.html#loads-module>`_: new function for computing blade moments; new submodule structure `loads.general <https://mhkit-software.github.io/MHKiT/mhkit-python/api.loads.html#general>`_ and `loads.graphics <https://mhkit-software.github.io/MHKiT/mhkit-python/api.loads.html#graphics>`_.

Refer to the following GitHub repositories to access the MHKiT v0.3.0 tagged release:

MHKiT-Python v0.3.0 
^^^^^^^^^^^^^^^^^^^^^
* `MHKiT-Python v0.3.0 Release <https://github.com/MHKiT-Software/MHKiT-Python/releases/tag/v0.3.0>`_
* .. image:: https://zenodo.org/badge/DOI/10.5281/zenodo.4063895.svg
     :target: https://doi.org/10.5281/zenodo.4063895

MHKiT-MATLAB v0.3.0 
^^^^^^^^^^^^^^^^^^^^^
* `MHKiT-MATLAB v0.3.0 Release <https://github.com/MHKiT-Software/MHKiT-MATLAB/releases/tag/v0.3.0>`_
* .. image:: https://zenodo.org/badge/DOI/10.5281/zenodo.4063920.svg
     :target: https://doi.org/10.5281/zenodo.4063920

MHKiT v0.2.0
-------------
MHKiT v0.2.0 adds the following modules to MHKiT:

* :ref:`power`: Calculate quantities of interest for power production and power quality
* :ref:`loads`: Calculate quantities of interest for mechanical loads assessments

This release also includes minor updates to the wave module to improve the versatility of the module. Refer to the following GitHub repositories to access the MHKiT v0.2.0 tagged release:

MHKiT-Python v0.2.0 
^^^^^^^^^^^^^^^^^^^^^
* `MHKiT-Python v0.2.0 Release <https://github.com/MHKiT-Software/MHKiT-Python/releases/tag/v0.2.0>`_  
* .. image:: https://zenodo.org/badge/DOI/10.5281/zenodo.3924684.svg
     :target: https://doi.org/10.5281/zenodo.3924684

MHKiT-MATLAB v0.2.0 
^^^^^^^^^^^^^^^^^^^^^
* `MHKiT-MATLAB v0.2.0 Release <https://github.com/MHKiT-Software/MHKiT-MATLAB/releases/tag/v0.2.0>`_ 
* .. image:: https://zenodo.org/badge/DOI/10.5281/zenodo.3928406.svg
     :target: https://doi.org/10.5281/zenodo.3928406


MHKiT v0.1.0
-------------
The first official release of MHKiT, developed in Python and MATLAB, includes the following modules:

* :ref:`qc`: Perform quality control analysis
* :ref:`wave`: Calculate quantities of interest for wave energy converters (WEC)
* :ref:`river`: Calculate quantities of interest for river energy converters (REC)
* :ref:`tidal`: Calculate quantities of interest for tidal energy converters (TEC)
* :ref:`utils`: Includes helper functions

The v0.1.0 release includes methods for resource assessment, device performance, graphics, io and quality control. Refer to the following GitHub repositories to access the MHKiT v0.1.0 tagged release:

MHKiT-Python v0.1.0 
^^^^^^^^^^^^^^^^^^^^^
* `MHKiT-Python v0.1.0 Release <https://github.com/MHKiT-Software/MHKiT-Python/releases/tag/v0.1.0>`_

MHKiT-MATLAB v0.1.0 
^^^^^^^^^^^^^^^^^^^^^
* `MHKiT-MATLAB v0.1.0 Release <https://github.com/MHKiT-Software/MHKiT-MATLAB/releases/tag/v0.1.0>`_
