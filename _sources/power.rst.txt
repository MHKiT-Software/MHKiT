.. _power:

Power Module
====================
The power module contains a set of functions to calculate quantities of interest for calculating generated power and assessing power quality.

API Documentation
--------------------
- `Python Power API Documentation <mhkit-python/api.power.html>`_
- `MATLAB Power API Documentation <mhkit-matlab/api.power.html>`_

Examples
--------------

- `Python Power Example Notebook <power_example.ipynb>`_
- `MATLAB Power Example LiveScript <mhkit-matlab/power_example.html>`_

Submodules
--------------
The power module contains the following submodules:

* ``characteristics``: Calculates power quantities of interest from voltage and current timseries.
* ``quality``: Functions to assess power quality, including harmonics, interharmonics, and distortion.
  Calculations are based on `IEC TS 62600-30:2018 ED1 <https://webstore.iec.ch/publication/28781>`_ and 
  `IEC TS 61000-4-7:2008 ED2 <https://webstore.iec.ch/publication/4228>`_.

IEC/TS 62600-30
---------------------------
Timeseries of voltage and current are the primary inputs for the power module.
IEC/TS 62600-30 requires that power quality is determined using at least 10 minute windows of data, collected with at least 2 kHz sampling frequency.  
Power quality should be assessed under all ocean, tidal, or current conditions to fully assess the power produced by the device. 
