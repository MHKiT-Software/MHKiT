.. _dolfyn_api_matlab:

DOLfYN
^^^^^^^^^^^^^^^^^^^^

The DOLfYN module contains a set of functions to analyze
binary Nortek or TRDI files. **Instrument datafiles** are
processed and returned as MATLAB structures.

.. Note::
   DOLfYN support within MHKiT-MATLAB is a work in progress. Please submit any issues or improvements to the `MHKiT-MATLAB GitHub Repository <https://github.com/MHKiT-Software/MHKiT-MATLAB/issues>`_

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.dolfyn.io.read_nortek`` simply use ``read_nortek``.

IO
""

The io submodule contains the following functions to read
binary Nortek (e.g., .VEC, .wpr, .ad2cp, etc.) or TRDI
(.000, .PD0, .ENX, etc.) data files.

.. mat:automodule:: mhkit.dolfyn.io
    :members:
    :undoc-members:
    :show-inheritance:

ADP (Acoustic Doppler Profiler)
"""""""""""""""""""""""""""""""

The ADP module contains routines for reading and working with
ADP/ADCP data. It contains:

.. mat:automodule:: mhkit.dolfyn.adp
    :members:
    :undoc-members:
    :show-inheritance:

Rotate
""""""

The rotate submodule contains tools to rotate a dataset
to different coordinate systems. When a file is read into
dolfyn, the data will be stored in the same coordinate
system it was saved in. The different coordinate systems
are "beam" <-> "inst" <-> "earth" <-> "principal". "Beam"
and "inst" are manufacturer/instrument specific and refer
to the along-beam (either 3 or 4 beams) and instrument (XYZ)
reference frame. Instrument reference frames differ across
sensors, but the rotate code takes this into account when
rotating into the "earth" frame, defined as East-North-Up
(ENU). The earth frame can then be rotated to the principal
axes, defined as streamwise-cross_stream-vertical.

.. mat:automodule:: mhkit.dolfyn.rotate
    :members:
    :undoc-members:
    :show-inheritance:

Tools
"""""

The clean submodule contains basic quality control tools
specific to ADCP and ADVs.

.. mat:automodule:: mhkit.dolfyn.tools
    :members:
    :undoc-members:
    :show-inheritance:
