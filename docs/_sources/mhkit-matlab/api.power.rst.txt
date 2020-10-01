.. _power_api_matlab:

Power Module
^^^^^^^^^^^^^^^^^^^^
The power module contains a set of functions to calculate quantities of interest for power production and power quality.

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.wave.io.read_NDBC_file`` simply use ``read_NDBC_file``. 

Characteristics
""""""""""""""""""
The characteristics submodule calculates power quantities of interest from voltage and current timseries.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``instantaneous_frequency``                   	Calculates instantaneous frequency of measured voltage
===========================================  ========================= 

.. mat:automodule:: mhkit.power.characteristics
    :members:
    :undoc-members:
    :show-inheritance:   

Quality
"""""""""
The quality submodule functions assess power quality, including harmonics, interharmonics, and distortion. Calculations are based on `IEC TS 62600-30:2018 ED1 <https://webstore.iec.ch/publication/28781>`_ and `IEC TS 61000-4-7:2008 ED2 <https://webstore.iec.ch/publication/4228>`_.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``harmonics``                            	Calculates the harmonics from time series of voltage or current based on IEC 61000-4-7.
``harmonic_subgroups``                    	Calculates the harmonic subgroups based on IEC 61000-4-7
``total_harmonic_current_distortion``     	Calculates the total harmonic current distortion (THC) based on IEC/TS 62600-30
``interharmonics``                       	Calculates the interharmonics from the harmonics of current
===========================================  ========================= 
   
   
.. mat:automodule:: mhkit.power.quality
    :members:
    :undoc-members:
    :show-inheritance:
