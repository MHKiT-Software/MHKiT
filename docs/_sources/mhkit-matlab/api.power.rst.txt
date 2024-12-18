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
``dc_power``                                   Calculates the real power from DC voltage and current. 
``ac_power_three_phase``                       Calculates the real power from three phase ac voltage and current.
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
``harmonics``                            	  Calculates the harmonics from time series of voltage or current based on IEC 61000-4-7.
``harmonic_subgroups``                    	  Calculates the harmonic subgroups based on IEC 61000-4-7
``total_harmonic_current_distortion``     	  Calculates the total harmonic current distortion (THC) based on IEC/TS 62600-30
``interharmonics``                       	  Calculates the interharmonics from the harmonics of current
``calc_electrical_angle``                     Calculates the electrical angle alpha_m(t) of the fundamental of the measured voltage (u_m(t)) according to IECTS 62600-30(ed1.0) Eq (3).
``calc_flicker_coefficient``                  Calculates the flicker coefficient c(Phi_k) for each set of the 10 min measured voltage and current time-series, using the calculated flicker emission values using IECTS-62600-30 Eq (6).
``calc_fundamental_freq``                     Calculates the fundamental frequency of the measured voltage u_m(t) using Zero-Crossing-Detection (ZCD) or Short-Time Fourier Transform (STFT).
``calc_ideal_voltage``                        Calculates the ideal phase-to-neutral voltage source (V) u0(t) according to IECTS 62600-30(ed1.0) Eq (2).
``calc_Rfic_Lfic``                       	  Calculates resistance (Rfic, Ohm) and inductance (Lfic, H) of the fictitious grid according to IECTS-62600-30 Eq (4-5).
``calc_shortterm_flicker_severity``           Calculates short-term flicker severity P_st according to the IEC 61000-4-15(ed2.0) section 5.7.2 Short-term flicker evaluation.
``calc_simulated_voltage``                    Calculates the simulated voltage at a fictitious grid according to IEC standard 62600-30(ed1.0) Eq (1).
``flicker_ufic_workflow``                     Conduct flicker assessment according to IECTS62600-30 and IECTS61400-21-1.
===========================================  ========================= 
   
.. mat:automodule:: mhkit.power.quality
    :members:
    :undoc-members:
    :show-inheritance:
