.. _dolfyn_api:

Dolfyn Module
^^^^^^^^^^^^^^^^^^^^^^^^^^
The dolfyn module contains a set of functions to injest binary Nortek or RDI files. 
      
**Instrument datafiles** are processed and returned as an xarray dataset.  
    
.. This doesn't generate anything
.. automodule:: mhkit.dolfyn
    :members:
    :no-undoc-members:
    :show-inheritance:
    
IO
""""""
The io submodule contains the following functions to read
binary Nortek (e.g., .VEC, .wpr, .ad2cp, etc.) or RDI
(.000, .PD0, .ENX, etc.) data file.  

.. autosummary::
   :nosignatures:
   
   ~mhkit.dolfyn.read
   ~mhkit.dolfyn.read_example
   ~mhkit.dolfyn.save
   ~mhkit.dolfyn.load
   ~mhkit.dolfyn.save_mat
   ~mhkit.dolfyn.load_mat
   
.. automodule:: mhkit.dolfyn.io
    :members:
    :undoc-members:
    :show-inheritance:
    
Rotate
""""""""""""
The rotate submodule contains tools to rotate a dataset 
to a new coordinate system. 

.. autosummary::
   :nosignatures:

   ~mhkit.dolfyn.rotate2
   ~mhkit.dolfyn.calc_principal_heading
   ~mhkit.dolfyn.set_declination
 
.. automodule:: mhkit.dolfyn.rotate
    :members:
    :undoc-members:
    :show-inheritance:

Time
""""""""""""
The time submodule contains functions to modify the format
of the stored time between a variety of time formats.

.. autosummary::
   :nosignatures:
   
   ~mhkit.dolfyn.time.epoch2dt64
   ~mhkit.dolfyn.time.dt642epoch
   ~mhkit.dolfyn.time.date2dt64
   ~mhkit.dolfyn.time.dt642date
   ~mhkit.dolfyn.time.epoch2date
   ~mhkit.dolfyn.time.date2str
   ~mhkit.dolfyn.time.date2epoch
   ~mhkit.dolfyn.time.date2matlab
   ~mhkit.dolfyn.time.matlab2date
   
.. automodule:: mhkit.river.time
    :members:
    :undoc-members:
    :show-inheritance: