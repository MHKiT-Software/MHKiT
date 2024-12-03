.. _dolfyn:

DOLfYN Module
====================
The dolfyn (Doppler Oceanography Library for pYthoN) module contains a set of functions to injest binary Nortek or RDI files. Only available in MHKiT-Python in v0.5.0 or later.

API Documentation
--------------------
- `Python DOLfYN API Documentation <mhkit-python/api.dolfyn.html>`_
- MATLAB support is planned in an upcoming release

Examples
--------------

- `ADCP Example <adcp_example.ipynb>`_
- `ADV Example <adv_example.ipynb>`_
- `Python Tanana River Resource Characterization <ADCP_Delft3D_TRTS_example.ipynb>`_

Submodules
--------------
The dolfyn module contains the following submodules:

* ``adp``: Contains functions to process, clean and analyze ADCP data
* ``adv``: Contains functions to process, clean and analyze ADV data
* ``io``: Contains functions to read binary Nortek (e.g., .VEC, .wpr, .ad2cp, etc.) or RDI (.000, .PD0, .ENX, etc.) data file.
* ``rotate``: Contains tools to rotate a dataset to a new coordinate system. 
* ``time``: Contains functions to modify the format of the stored time between a variety of time formats.
* ``tools``: Contains miscellaneous functions used in mhkit that may prove useful to users
