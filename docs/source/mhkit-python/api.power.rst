.. _power_api:

Power Module
^^^^^^^^^^^^^^^^^^^^
The power module contains a set of functions to calculate quantities of interest for power production and power quality.

Characteristics
""""""""""""""""""
The characteristics submodule calculates power quantities of interest from voltage and current timseries.

.. autosummary:: 
   :nosignatures:

   ~mhkit.power.characteristics.instantaneous_frequency
   ~mhkit.power.characteristics.dc_power
   ~mhkit.power.characteristics.ac_power_three_phase
   
.. automodule:: mhkit.power.characteristics
    :members:
    :undoc-members:
    :show-inheritance:

Quality
"""""""""
The quality submodule functions assess power quality, including harmonics, interharmonics, and distortion. Calculations are based on `IEC TS 62600-30:2018 ED1 <https://webstore.iec.ch/publication/28781>`_ and `IEC TS 61000-4-7:2008 ED2 <https://webstore.iec.ch/publication/4228>`_.

.. autosummary:: 
   :nosignatures:

   ~mhkit.power.quality.harmonics
   ~mhkit.power.quality.harmonic_subgroups
   ~mhkit.power.quality.total_harmonic_current_distortion
   ~mhkit.power.quality.interharmonics
   
.. automodule:: mhkit.power.quality
    :members:
    :undoc-members:
    :show-inheritance: