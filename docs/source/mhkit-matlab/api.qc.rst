.. _qc_api_matlab:

QC Module
^^^^^^^^^^^^^^^^^^^^
The QC module includes quality control functions from Pecos, see https://pecos.readthedocs.io for more details.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``check_corrupt``                               Check for corrupt data 
``check_delta``                                 Check for stagant data and/or abrupt changes in the data using the difference between max and min values within a rolling window
``check_increment``                             Check data increments using the difference between values
``check_missing``                               Check for missing data
``check_outlier``                               Check for outliers using normalized data within a rolling window
``check_range``                                 Check for data outside the expected range
``check_timestamp``                             Check time series for missing, non-monotonic, and duplicate timestamps
``qc_data_to_dataframe``			Convert qc data structure to pandas dataframe
===========================================  ========================= 

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.qc.check_timestamp`` simply use ``check_timestamp``. 
    
.. mat:automodule:: mhkit.qc
    :members:
    :no-undoc-members:
    :show-inheritance:
