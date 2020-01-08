.. _wave:

Wave Module
====================
The wave module contains a set of functions to calculate quantities of interest for wave energy converters (WEC). 

The wave module contains the following submodules:

* ``io``: Loads wave elevation and spectra data from standard formats.
* ``resource``: Computes resource assessment, including wave energy spectra and resource metrics such as significant wave height and peak period. 
  Calculations are based on `IEC TS 62600-101:2015 ED1 <https://webstore.iec.ch/publication/22593>`_. 
* ``performance``: Computes performance metrics such as capture length matrix and mean annual energy production. 
  Calculations are based on `IEC TS 62600-100:2012 ED1 <https://webstore.iec.ch/publication/7241>`_.
* ``graphics``: Generates graphics, including elevation timeseries, spectra, and scatter diagrams.

See :ref:`MHKiT-Python <python>` or :ref:`MHKiT-Matlab <matlab>` for more details on the wave module.
