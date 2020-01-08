.. _overview:

Overview
========

.. Note:: 
   Add MHKiT overview, capabilities, IEC standards from Rick
   
MHKiT Python/Matlab is a first-generation open-source software toolkit that aims to provide the international MRE community with open-source toolboxes for ingesting, quality controlling, processing, visualizing, and managing data. MHKiT Python/Matlab is developed for field and laboratory data, and for data need by and produced by numerical simulations such as WECSim. MHKiT Python/Matlab is intended to supplement existing software languages (e.g MATLAB, Python) and public repositories (e.g. WAFO, Pecos) by providing functions that are needed by the MRE community and that are not otherwise available. MHKiT Python/Matlab is sponsored by the US Energy Department's Water Power Technologies Office and is jointly developed by NREL, Sandia, and PNNL. 

MHKiT Python/Matlab is organized into functional toolboxes such as power performance, resources, mechanical loads, etc..  Each toolbox contains a set of functions that have been rigorously tested and well documented. As the name suggests, MHKiT is developed in both Python and Matlab. To ensure consistent results between languages and reduce version control issues, all functions for core calculations are written in Python and Matlab wrappers ensure that those functions can be called from Matlab. As such, MHKiT contains functionally identical functions in each language. MHKiT calculations adhere to the International Electrotechnical Committee's (IEC) Technical Committee 114's technical specifications and recommendations, as well as, follow best practices within the MRE and other fields. All codes are developed following a framework, format, and conventions that are defined in the Code Guildelines. All codes are also rigorously tested using a continuous integration framework that is applied every time files are uploaded to the MHKiT Code Hub. These tests check functionality and accuracy. MHKiT Python/Matlab use the HDF5 and JSON file formats to store data to ensure compatibility and usability by the broader MRE community and beyond. These formats also help ensure that adequate metadata is collected.


Uses
---------   
MHKiT Python/Matlab is an MRE tool designed to support a wide range of activities, including:

* Data Processing and  Visulaization
* Data Quality Control
* Data Management
* Simulation PreProcessing
* Simulation PostProcessing

Capabilities
------------------
In 2020, an alpha version of the following six toolboxes were developed:

- Wave Power Performance: Functions that support wave power performance calculation. Calculations are based on IEC TS 62600-100:2012
- Tidal and River Power Performance: Functions that support tidal and current power performance calculation. Calculations are based on IEC TS 62600-200:2013 and IEC TS 62600-300 ED1
- Wave Resource Assessment: Functions that focus on the resource assessment for a wave energy site based on IEC TS 62600-101:2015
- Tidal Resource Assessment: Functions that focus on the resource assessment for a tidal energy site based on IEC TS 62600-201:2015 and IEC TS 62600-301 ED1
- Data Quality Control and Assurance: Functions that support data quality control and assurance. These function are based on those developed in ARM and Pecos.
- File Utilities: Functions that provide general utilities that include loading data, converting data, and writing data from files produced by MRE specific instruments and from files commonly used by the MRE community


MHKiT Developers
---------------------------
MHKiT is a collaboration between the National Renwable Energy Lab (NREL), Sandia National Laboratory (Sandia), and Pacific Northwest National Laboratory 
(PNNL) funded by the U.S. Department of Energy's Water Power Technologies Office. Due to the open source nature of the code, WEC-Sim has also had many 
external contributions, for more information refer to Acknowledgements.

- Frederick Driscoll (NREL-PI)
- Budi Gunawan (Sandia -PI)
- Chitra Sivaraman (PNNL-PI)
- Katherine Klise (Sandia)
- Rebecca Pauly (NREL)
- Timothy Shippert (PNNL)
- Kelley Ruehl (Sandia)
- Sterling Olson (Sandia)

.. Note:: 
   Merge with index Authors and refer to 'Contributors page' on GitHub (https://github.com/MHKiT-Code-Hub/mhkit-python/graphs/contributors)

   
MHKiT is available in Python and Matlab. Both packages contain the following modules:

* :ref:`qc`: Perform quality control analysis
* :ref:`wave`: Calculate quantities of interest for wave energy converters (WEC)
* :ref:`river`: Calculate quantities of interest for river energy converters (REC)
* :ref:`tidal`: Calculate quantities of interest for tidal energy converters (TEC)
* :ref:`utils`: Includes helper functions

MHKiT-Python
---------------
The MHKiT-Python repository is located at https://github.com/mhkit-code-hub/mhkit-python and 
is intended to be used by researchers and practitioners that prefer Python.

MHKiT-Python uses Pandas data objects to store data with labelled columns and rows.
This allows the user to keep track timestamp indexes and the type of data that is in each column.
Pandas includes many options to analyze data, including methods to slice, query, upscale, and plot data.
Additionally, Pandas includes many options to load data from a wide range of formats into Pandas data objects.
MHKiT-Python users that are new to Pandas are encouraged to review the 
`Pandas getting started guide <https://pandas.pydata.org/pandas-docs/stable/getting_started/index.html>`_.

MHKiT-Matlab
--------------
MHKiT-Matlab is located at https://github.com/MHKiT-Code-Hub/mhkit-matlab and 
is intended to be used by researchers and practitioners that prefer Matlab. To ensure consistancy between MHKiT-Matlab and MHKiT-Python,
 MHKiT-Matlab runs the MHKiT-Python functions by wrapping them in Matlab. Conversions to Python data types happen within the wrappers, 
 allowing Matlab users to only deal with Matlab data types. 

MHKiT-Matlab uses structures to store data. A structure array is a data type that groups related data using data containers called fields.
For more information about Matlab structures, see  https://www.mathworks.com/help/matlab/structures.html. 
