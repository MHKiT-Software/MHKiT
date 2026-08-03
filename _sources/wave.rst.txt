.. _wave:

Wave Module
====================

The ``wave`` module contains a set of functions to calculate quantities of interest for wave energy converters (WEC).

API Documentation
--------------------
- `Python Wave Module API Documentation <mhkit-python/api.wave.html>`_
- `MATLAB Wave Module API Documentation <mhkit-matlab/api.wave.html>`_

Examples
--------------

- `Wave Examples List <examples_overview.html#wave-energy>`_

Submodules
--------------
The wave module contains the following submodules:

* ``io``: Loads wave elevation and spectra data from standard formats including WEC-Sim, SWAN, WPTO hindcast, CDiP, and NDBC data.
* ``resource``: Computes resource assessment metrics, including wave energy spectra, significant wave height and peak period.
  Calculations are based on `IEC TS 62600-101:2015 ED1 <https://webstore.iec.ch/publication/22593>`_.
* ``performance``: Computes performance metrics such as capture length matrix, and mean annual energy production.
  Calculations are based on `IEC TS 62600-100:2012 ED1 <https://webstore.iec.ch/publication/7241>`_.
* ``graphics``: Generates graphics, including elevation time-series, spectra, and scatter diagrams.
* ``contours``: Calculates envoronmental contours of extreme seastates. 
