.. _tidal:

Tidal Module
====================
The tidal module contains a set of functions to calculate relevant quantities of interest for tidal energy converters (TEC).

API Documentation
--------------------
- `Python Tidal API Documentation <mhkit-python/api.tidal.html>`_
- `MATLAB Tidal API Documentation <mhkit-matlab/api.tidal.html>`_

Examples
--------------

- `Python Tidal Example Notebook <tidal_example.ipynb>`_
- `Python Tidal Power Performance Example <tidal_performance_example.ipynb>`_
- `MATLAB Tidal Example LiveScript <mhkit-matlab/tidal_example.html>`_


Submodules
--------------
The tidal module contains the following submodules:

* ``io``: Loads tidal velocity and direction data from National Oceanic and Atmospheric Administration (NOAA) currents.
* ``resource``: Computes resource assessment metrics, including exceedance probability, principal directions of flow, and directions of ebb and flood flows.
  Calculations are based on `IEC TS 62600-201:2015 ED1 <https://webstore.iec.ch/publication/22099>`_.
* ``performance``: Computes device metrics such as equivalent diameter, tip speed ratio, and capture area.
  Calculations are based on `IEC TS 62600-200:2013 ED1 <https://webstore.iec.ch/publication/7242>`_.
* ``graphics``: Generates graphics, including rose plots and joint probability distributions.
