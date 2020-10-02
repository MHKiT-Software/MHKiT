.. _loads_api:

Loads Module
^^^^^^^^^^^^^^^^^^^^
The loads module contains a set of functions to calculate quantities of interest for mechanical loads assessments.

General
""""""""""""
The loads general submodule contains general loads calculations that can be applied to most MEC devices. 

.. autosummary:: 
   :nosignatures:

   ~mhkit.loads.general.bin_statistics
   ~mhkit.loads.general.blade_moments
   ~mhkit.loads.general.damage_equivalent_load

   
.. automodule:: mhkit.loads.general
    :members:
    :no-undoc-members:
    :show-inheritance:


Graphics
""""""""""""
The graphics submodule contains functions to plot loads metrics.

.. autosummary::
   :nosignatures:

   ~mhkit.loads.graphics.plot_statistics
   ~mhkit.loads.graphics.plot_bin_statistics
   
.. automodule:: mhkit.loads.graphics
    :members:
    :no-undoc-members:
    :show-inheritance: