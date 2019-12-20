.. _python:

MHKiT-Python
================

The MHKiT-Python repository is located at https://github.com/mhkit-code-hub/mhkit-python and 
is intended to be used by researchers and practitioners that prefer Python.

The package contains the following modules:

* :ref:`qc`: Perform quality control analysis
* :ref:`utils`: Includes helper functions
* :ref:`wave`: Calculate quantities of interest for wave energy converters (WEC)
* :ref:`river`: Calculate quantities of interest for river energy converters (REC)
* :ref:`tidal`: Calculate quantities of interest for tidal energy converters (TEC)

The package uses Pandas data objects to store data with labelled columns and rows.
This allows the user to keep track timestamp indexes and the type of data that is in each column.
Pandas includes many options to analyze data, including methods to slice, query, upscale, and plot data.
Additionally, Pandas includes many options to load data from a wide range of formats into Pandas data objects.
MHKiT-Python users that are new to Pandas are encouraged to review the 
`Pandas getting started guide <https://pandas.pydata.org/pandas-docs/stable/getting_started/index.html>`_.

.. include:: mhkit-python/installation.inc

.. include:: mhkit-python/qc.inc

.. include:: mhkit-python/utils.inc

.. include:: mhkit-python/wave.inc

.. include:: mhkit-python/river.inc

.. include:: mhkit-python/tidal.inc

.. include:: apidoc/api.inc

#.. include:: mhkit-python/examples.inc   