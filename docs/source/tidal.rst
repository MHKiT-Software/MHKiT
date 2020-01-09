.. _tidal:

Tidal Module
====================
The tidal module contains a set of functions to calculate relevant quantities of interest for tidal energy converters (TEC). 

The tidal module contains the following submodules:

* ``io``: Loads tidal velocity and direction data from NOAA currents.
* ``resource``: Computes resource assessment metrics, including exceedance probability, principal directions of flow and directions of ebb and flood flows.
  Calculations are based on `IEC TS 62600-201:2015 ED1 <https://webstore.iec.ch/publication/22099>`_ and `IEC TS 62600-301:2019 ED1 <https://webstore.iec.ch/publication/28780>`_.
* ``device``: Computes device metrics such as equivalent diameter and capture area.
  Calculations are based on `IEC TS 62600-200:2013 ED1 <https://webstore.iec.ch/publication/7242>`_ and `IEC TS 62600-300:2019 ED1 <https://webstore.iec.ch/publication/29478>`_.
* ``graphics``: Generates graphics, including rose plots and joint probability distributions.

See :ref:`MHKiT-Python <python>` or :ref:`MHKiT-Matlab <matlab>` for more details on the river module.

