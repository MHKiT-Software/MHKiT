.. _overview:

Overview
========

MHKiT is an open-source code that aims to provide the international MRE community with tools for:

* Data processing and visualization
* Data quality control
* Data management
* Simulation pre-processing
* Simulation post-processing

The software was developed for field and laboratory data, and for data needed by and produced by numerical simulations such as WEC-Sim. 
In order to reach a wide audience, the software was developed in both Python and MATLAB.
MHKiT is intended to supplement analysis using existing software languages (e.g MATLAB, Python) and public repositories (e.g. WAFO, Pecos) by providing functions that are needed by the MRE community and that are not otherwise available. 

`MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ and `MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_ are organized into the following modules:

* :ref:`qc`: Perform quality control analysis
* :ref:`wave`: Calculate quantities of interest for wave energy converters (WEC)
* :ref:`river`: Calculate quantities of interest for river energy converters (REC)
* :ref:`tidal`: Calculate quantities of interest for tidal energy converters (TEC)
* :ref:`utils`: Includes helper functions

These modules provide functionality needed by the MRE community, such as power performance, resources, and mechanical loads.  
Each module contains a set of functions that have been rigorously tested and well documented. 
To ensure consistent results between `MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ and `MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_  and reduce version control issues, all functions are written in Python and housed in the `MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ repository.  `MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_ then wraps these functions so they can be called from MATLAB. 
As such, `MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ and `MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_ provide identical functions in each language. 

Calculations in MHKiT adhere to the `International Electrotechnical Committee's (IEC) Technical Committee (TC) 114's <https://www.iec.ch/dyn/www/f?p=103:7:1500307576397::::FSP_ORG_ID,FSP_LANG_ID:1316,25>`_ technical specifications and recommendations, as well as follow best practices within the MRE and other fields. 
`MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ is rigorously tested using a continuous integration framework that is applied every time files are uploaded to the repository. 
These tests check functionality and accuracy. 
`MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_ is tested by the core development team to ensure that the wrapped `MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ functions are performing as expected.

.. (removed for now) All codes are developed following a framework, format, and conventions that are defined in the Code Guildelines. 
   MHKiT Python/MATLAB use the HDF5 and JSON file formats to store data to ensure compatibility and usability by the broader MRE community and beyond. 
   These formats also help ensure that adequate metadata is collected.

MHKiT-Python
------------------
`MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ is intended to be used by researchers and practitioners that prefer Python.
MHKiT-Python uses Pandas data objects to store data with labelled columns and rows.
This allows the user to keep track timestamp indexes and the type of data that is in each column.
Pandas includes many options to analyze data, including methods to slice, query, upscale, and plot data.
Additionally, Pandas includes many options to load data from a wide range of formats into Pandas data objects.
MHKiT-Python users that are new to Pandas are encouraged to review the 
`Pandas getting started guide <https://pandas.pydata.org/pandas-docs/stable/getting_started/index.html>`_.

MHKiT-MATLAB
--------------
`MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_  is intended to be used by researchers and practitioners that prefer MATLAB. 
To ensure consistency between MHKiT-MATLAB and MHKiT-Python,
MHKiT-MATLAB runs the MHKiT-Python functions by wrapping them in MATLAB. Conversions to Python data types happen within the wrappers, 
allowing MATLAB users to only deal with MATLAB data types. 

MHKiT-MATLAB uses structures to store data. A structure array is a data type that groups related data using data containers called fields.
For more information about MATLAB structures, refer to the `MATLAB structures documentation  <https://www.mathworks.com/help/matlab/structures.html>`_.  
