.. _loads:

Loads Module
====================
The loads module contains a set of functions to calculate quantities of interest for assessing mechanical loads including statistics damage equivalent loads, and 
functions for visualizing data.

  Calculations are based on `IEC TS 62600-3:2020 ED1 <https://webstore.iec.ch/publication/60359>`_ .

See :ref:`MHKiT-Python <python>` or :ref:`MHKiT-MATLAB <matlab>` for more details on the power module.

IEC/TS 62600-30
---------------------------
Timeseries of voltage and current are the primary inputs for the power module.
IEC/TS 62600-30 requires that power quality is determined using at least 10 minute windows of data, collected with at least 2 kHz sampling frequency.  
Power quality should be assessed under all ocean, tidal, and current conditions to fully assess the power produced by the device. 