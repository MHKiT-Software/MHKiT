.. _utils_api_matlab:

Utils Module
^^^^^^^^^^^^^^^^^^^^
The utils module includes helper functions. The module currently contains a single function to help users convert numeric indexes to datetime indexes. Additional helper functions could be added at a later date.

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.wave.io.read_NDBC_file`` simply use ``read_NDBC_file``. 

===========================================  =========================
Functions                                    Description
===========================================  =========================
``get_statistics``                            	Calculate mean, max, min and stdev statistics of continuous data for a given statistical window.
``excel_to_datetime				Convert Excel datenum format to Python datetime
===========================================  ========================= 


.. mat:automodule:: mhkit.utils
    :members:
    :no-undoc-members:
    :show-inheritance:
