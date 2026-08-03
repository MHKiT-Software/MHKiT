.. _qc:

QC Module
====================
It is recommended that input data be processed using the quality control (QC) module to check for data quality and potential issues prior to using the MHKiT Wave, River, and Tidal modules.
Quality control analysis often includes steps to ensure that data are
not missing, corrupt, or outside of the expected range.
Additional analysis can include checking for
stagnant readings, unusual abrupt changes, or outliers.
If data does not meet specified requirements, the data points that did not pass inspection should be
removed or replaced by various means (interpolation, data from a duplicate sensor, values from a model) before using the data for analysis.

API Documentation
--------------------
- `Python QC API Documentation <mhkit-python/api.qc.html>`_
- `MATLAB QC API Documentation <mhkit-matlab/api.qc.html>`_

Examples
--------------

- `Python Quality Control Example <qc_example.ipynb>`_
- `MATLAB Quality Control Example <mhkit-matlab/qc_example.html>`_

Submodules
--------------
The QC module does not contain submodules. It imports several convenient functions from pecos.monitoring.
The QC module contains a set of functions for basic quality control analysis.
These functions are imported from `Pecos <https://pecos.readthedocs.io>`_, an open-source Python package
designed for quality control analysis of time-series data.  Pecos was originally developed to monitor solar photovoltaic systems but is designed to be used for a wide range of applications.

The following quality control functionality is available in MHKiT:

* Check time series for missing, non-monotonic and duplicate time stamps
* Check for missing data
* Check for corrupt data
* Check for data that are outside the expected range
* Check for stagnant data and/or abrupt changes in the data using the difference between max and min values (delta) within a rolling window
* Check for outliers using normalized data within a rolling window

Additional functionality, including graphics and reports, can be included in quality control analysis by using Pecos directly.

Each function returns the following information:

* Cleaned data (data that failed a test are replaced by NaN)
* Boolean mask (indicates if data failed a test)
* Summary of the quality control test results

The clean data can be used directly in MHKiT analysis, or the missing values can be replaced using various methods.
Data replacement strategies are generally defined on a case-by-case basis. If large sections of the data failed quality control tests, the data might not be suitable for use.
Replacement strategies can be applied to the entire data set, or vary by data column or by time.
Possible strategies include:

* Replacing missing data using linear interpolation or other polynomial approximations
* Replacing missing data using a rolling mean of the data
* Replacing missing data with data from a previous period (previous day, hour, etc.)
* Replacing missing data with data from a redundant sensor
* Replacing missing data with values from a model

These strategies can be accomplished using the Pandas methods ``interpolate``, ``replace``, and ``fillna``.
See Pandas documentation for more details.

Note, that the quality control functions require that the data have a datatime index.
Other functionality in MHKiT can use data that has datatime or numeric indexes.
The :ref:`utils` can be used to convert numeric indexes to datetime indexes.
