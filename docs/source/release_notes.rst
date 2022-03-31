.. _release_notes:

Release Notes
=============

MHKiT v0.5.0
-------------
MHKiT v0.5.0 adds the following modules and capabilities to MHKiT-Python:

 * Organization: grouped io specific functions in wave, tidal, and river into io folder
 * Updated Jonswap spectrum to match IEC guidance
 * `dolfyn <https://mhkit-software.github.io/MHKiT/mhkit-python/api.dolfyn.html#dolfyn>`_ Added DOLfYN module to analyze and process ADV and ADCP data
 * `wave.contours <https://mhkit-software.github.io/MHKiT/mhkit-python/api.wave.html#contours>`_ Incorporated the remaining WDRT functionality
 * `river.io.d3d <https://mhkit-software.github.io/MHKiT/mhkit-python/api.river.html#io>`_ Added Delft3D case post-processing in the river/ tidal models
 * Fixed a bug in the wave elevation function 
 * Include the last day in CDIP requests and file timezone issues with CDIP
 * Upgrades to processing numpy and pandas version to maintain compatability

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


Future Releases
----------------

The next releases, planned in 2021, will include: 

* Additional QC functionality and data transformation functions
* Additional power quality functions for flicker analysis
* Data ingestion functions from instrumentation and public datasets
* Mooring module 
