.. _python:

MHKiT
===============================

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
is intended to be used by researchers and practitioners that prefer Matlab.

MHKiT-Matlab uses structures to store data. A structure array is a data type that groups related data using data containers called fields.
For more information about Matlab structures, see  https://www.mathworks.com/help/matlab/structures.html. 
