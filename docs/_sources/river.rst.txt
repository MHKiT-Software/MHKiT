.. _river:

River Module
------------

The river module contains a set of functions to calculate quantities of interest for river energy converters (REC). 

The river module contains the following submodules:

* ``io``: Loads discharge data from standard formats.
* ``resource``: Computes resource assessment, including exceedance probability, velocity, and power.  
  Calculations are based on `IEC TS 62600-201:2015 ED1 <https://webstore.iec.ch/publication/22099>`_ and `IEC TS 62600-301:2019 ED1 <https://webstore.iec.ch/publication/28780>`_.
* ``device``: Computes device metrics such as equivalent diameter and capture area.
  Calculations are based on `IEC TS 62600-200:2013 ED1 <https://webstore.iec.ch/publication/7242>`_ and `IEC TS 62600-300:2019 ED1 <https://webstore.iec.ch/publication/29478>`_.
* ``graphics``: Generates graphics, including flow duration curves and velocity duration curves.

See :ref:`MHKiT-Python <python>` or :ref:`MHKiT-Matlab <matlab>` for more details on the river module.

