.. _overview:

.. figure:: figures/MHKiT_logo.png
   :target: https://github.com/MHKiT-Software
   :scale: 50 %
   :alt: MHKiT logo


Overview
========

MHKiT is open-source software, developed in Python and MATLAB, that provides the international marine renewable energy (MRE) community with tools for:

* Data processing
* Data visualization
* Data quality control
* Resource assessment
* Device performance
* Device loads


The software is developed for MRE data, including measurements from field and laboratory environments, and datasets produced by numerical simulations (e.g. WEC-Sim).
MHKiT is intended to supplement analysis using functions readily available within software languages (e.g MATLAB, Python) and public repositories (e.g. WAFO, Pecos) by providing functions that are needed by the MRE community and that is not otherwise available. Calculations in MHKiT adhere to the `International Electrotechnical Committee's Technical Committee's, IEC TC 114 <https://www.iec.ch/dyn/www/f?p=103:7:1500307576397::::FSP_ORG_ID,FSP_LANG_ID:1316,25>`_ technical specifications (TS) and recommendations, as well as follow best practices within the MRE and other fields.

MHKiT Modules
--------------
`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ and `MHKiT-MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_ are organized into the following modules:

* :ref:`qc`: Perform quality control analysis
* :ref:`wave`: Calculate quantities of interest for wave energy converters (WEC)
* :ref:`river`: Calculate quantities of interest for river energy converters (REC)
* :ref:`tidal`: Calculate quantities of interest for tidal energy converters (TEC)
* :ref:`power`: Calculate quantities of interest for power production and power quality
* :ref:`loads`: Calculate quantities of interest for mechanical loads assessments
* :ref:`dolfyn`: Ingest, manipulate, and analyze ADV and ADCP data
* :ref:`mooring`: Calculate quantities of interest for mooring systems
* :ref:`utils`: Includes helper functions

These modules provide functionality for calculating metrics needed by the MRE community as well as those required for conformity with IEC TS and recommendations. MHKiT was intentionally divided into modules that map directly to each IEC TS, such as power performance, resource assessment and characterization, and mechanical load measurements, for ease of use. Each module contains a set of functions that have been rigorously tested and well documented.

To ensure consistent results between `MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ and `MHKiT-MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_  and reduce version control issues, all functions are written in Python and housed in the MHKiT-Python repository.  MHKiT-MATLAB then wraps these functions so they can be called from MATLAB.
As such, **MHKiT-Python and MHKiT-MATLAB  provide identical functions in each language**.


`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ |python_image|
-----------------------------------------------------------------------------------
`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ is available for users who prefer Python.
MHKiT-Python allows Xarray and Pandas data objects to store data with labeled columns and rows.
This allows the user to keep track of timestamp indexes and the type of data that is in each column.
Xarray and Pandas both include many options to analyze data, including methods to slice, query, upscale, and plot data.
Additionally, Pandas includes many options to load data from a wide range of formats into Pandas data objects.
MHKiT-Python users that are new to Xarray or Pandas are encouraged to review the
`Xarray Getting Started guide <https://docs.xarray.dev/en/stable/getting-started-guide/index.html>`_ or
`Pandas Getting Started guide <https://pandas.pydata.org/pandas-docs/stable/getting_started/index.html>`_.

The MHKiT-Python repository is located at: https://github.com/MHKiT-Software/MHKiT-Python.

.. |python_image| image:: figures/python-logo-master-v3-TM.png
   :target: https://github.com/MHKiT-Software/MHKiT-Python
   :scale: 30 %
   :alt: Python logo


`MHKiT-MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_ |matlab_image|
--------------------------------------------------------------------------------------------
`MHKiT-MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_  is available for users that prefer MATLAB.
To ensure consistency between MHKiT-MATLAB and MHKiT-Python,
MHKiT-MATLAB runs the MHKiT-Python functions by wrapping them in MATLAB. Conversions to Python data types happen within the wrappers,
allowing MATLAB users to deal with MATLAB data types only.

MHKiT-MATLAB uses structures to store data. A structure array is a data type that groups related data using data containers called fields.
For more information about MATLAB structures, refer to the `MATLAB structures documentation  <https://www.mathworks.com/help/matlab/structures.html>`_.

The MHKiT-MATLAB repository is located at: https://github.com/MHKiT-Software/MHKiT-MATLAB.

.. |matlab_image| image:: figures/mathworks-logo-full-color-rgb.png
   :target: https://github.com/MHKiT-Software/MHKiT-MATLAB
   :scale: 8 %
   :alt: MATLAB logo


.. _tests:
Software Tests
--------------------------

MHKiT is rigorously tested using a continuous integration framework that ensure the functionality and accuracy of the software.
Tests are run each time changes are made to the repository.
New tests are developed each time new functionality is added to MHKiT.
Tests are run on GitHub Actions and reported on the respective README pages.

GitHub Actions: `Python <https://github.com/MHKiT-Software/MHKiT-Python/actions>`_, `MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB/actions>`_
README pages: `Python <https://github.com/MHKiT-Software/MHKiT-Python>`_, `MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_

Developers should run software tests locally before submitting a pull request, using the following commands.
A summary pdf will be created after running the tests 
summarizing the test results. 

MHKiT-Python tests using the Python package pytest::

   pip install -r requirements-dev.txt
   pytest

MHKiT-MATLAB tests using the MATLAB API::

   mhkit/tests/runTests.m

