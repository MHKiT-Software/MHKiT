.. _loads_api_matlab:

Loads Module
^^^^^^^^^^^^^^^^^^^^
The loads module contains a set of functions to calculate quantities of interest for mechanical loads assessments.

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.wave.io.read_NDBC_file`` simply use ``read_NDBC_file``. 

===========================================  =========================
Functions                                    Description
===========================================  =========================
``bin_statistics``                            Bins calculated statistics against data signal (or channel) according to IEC TS 62600-3:2020 ED1.
``damage_equivalent_load``                    Calculates the damage equivalent load of a single data signal (or channel) based on IEC TS 62600-3:2020 ED1.
``plot_statistics``                           Plot showing standard raw statistics of variable
``plot_bin_statistics``                       Plot showing standard binned statistics of single variable
===========================================  ========================= 


.. mat:automodule:: mhkit.loads
    :members:
    :no-undoc-members:
    :show-inheritance:
