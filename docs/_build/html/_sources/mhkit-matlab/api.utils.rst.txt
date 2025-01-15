.. _utils_api_matlab:

Utils Module
^^^^^^^^^^^^^^^^^^^^
The utils module contains the essential utility functions for data 
conversion, statistical analysis, caching, and event detection for the 
MHKiT library.

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.wave.io.read_NDBC_file`` simply use ``read_NDBC_file``. 

===========================================  =========================
Functions                                    Description
===========================================  =========================
``get_statistics``                            	Calculate mean, max, min and stdev statistics of continuous data for a given statistical window.
``excel_to_datetime``				            Convert Excel datenum format to Python datetime.
``magnitude_phase``                             Calculates magnitude and phase in two or three dimensions of the supplied vector.
``bplot``                                       This function will create a nice boxplot from a set of data.
``cached_webread``                              Perform webread with caching to avoid redundant downloads.
``check_name``                                  Check if a given string is a valid field name for MATLAB struct.
``convert_numeric_dataframe_to_struct``         Converts a numeric pandas DataFrame to a MATLAB struct.
``convert_numeric_struct_to_dataframe``         Converts a MATLAB struct to a numeric pandas DataFrame.
``nc_file_precheck``                            Check NetCDF filename before working on it
``nc_get_var_info``                             Append NetCDF variable data and info to an existing structure (res).
``read_nc_file``                                Read NetCDF data into a MATLAB struct().
``read_nc_file_group``                          Read NetCDF data into a MATLAB struct().
``read_nc_file_var``                            Read NetCDF data structure.
``reloadPy``                                    Reloads Python for use after Python code change.
``toggleToolbox``                               Utility to enable/disable MATLAB toolboxes.
``uninstall_all_toolboxes``                     Uninstall all currently installed toolboxes
===========================================  ========================= 

.. mat:automodule:: mhkit.utils
    :members:
    :no-undoc-members:
    :show-inheritance:
