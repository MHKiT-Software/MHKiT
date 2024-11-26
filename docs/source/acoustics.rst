.. _acoustics:

Passive Acoustics Module
========================
The acoustics module contains a set of functions to ingest hydrophone *.wav* files.
Only available in MHKiT-Python in v0.9 or later.

API Documentation
--------------------
- `Python Acoustics API Documentation <mhkit-python/api.acoustics.html>`_
- MATLAB support is planned in an upcoming release

Examples
--------------

- `Passive Acoustics Example <acoustics_example.ipynb>`_

Submodules
--------------
The acoustics module contains the following submodules:

* ``io``: Contains functions to read and output *.wav* files
* ``analysis``: Contains functions to process, clean and analyze passive acoustics data. 
  Calculations are based on `IEC TS 62600-40:2019 ED1 <https://webstore.iec.ch/publication/31031>`_.
* ``graphics``: Contains functions to plot spectral data
