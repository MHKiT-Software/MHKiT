.. _river:

River Module
====================
The river module contains a set of functions to calculate quantities of interest for river energy converters (REC).

API Documentation
--------------------
- `Python River API Documentation <mhkit-python/api.river.html>`_
- `MATLAB River API Documentation <mhkit-matlab/api.river.html>`_

Examples
--------------

- `Python River Example <river_example.ipynb>`_
- `Python Tanana River Resource Characterization <ADCP_Delft3D_TRTS_example.ipynb>`_
- `MATLAB River Example <mhkit-matlab/river_example.html>`_

Submodules
--------------
The river module contains the following submodules:

* ``io``: Loads discharge data from standard formats.
* ``resource``: Computes resource assessment metrics, including exceedance probability, inflow velocity, and power (theoretical resource).
  Calculations are based on `IEC TS 62600-301:2019 ED1 <https://webstore.iec.ch/publication/28780>`_.
* ``performance``: Computes device metrics such as equivalent diameter, tip speed ratio, and capture area.
  Calculations are based on `IEC TS 62600-300:2019 ED1 <https://webstore.iec.ch/publication/29478>`_.
* ``graphics``: Generates graphics, including flow duration curves and velocity duration curves.

IEC/TS 62600-100
---------------------------
Flow discharge at a site is the primary input for the river module.
IEC/TS 62600-100 recommends that river resource is calculated using historical discharge measurements, from at least 10 years daily discharge data, or flow discharge predicted using a regional hydrological model validated using at least one year discharge measurement.
The latter approach is often suitable when only limited measurement data at the project site is available.
Long-term discharge data from a river gauging station located within the vicinity of the project site can often be used for resource assessment.
In the US, for example, historical flow discharge data from many gauging stations are publicly available, such as those collected by the US Geological Survey (USGS).
The river module contains functionality for reading historical discharge data published by USGS.
This functionality can be useful for users interested in using USGS data for river resource assessment.
