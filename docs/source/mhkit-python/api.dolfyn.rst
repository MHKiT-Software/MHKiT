.. _dolfyn_api:

DOLfYN Module
^^^^^^^^^^^^^
The DOLfYN module contains a set of functions to analyze 
binary Nortek or TRDI files. 
      
**Instrument datafiles** are processed and returned as an 
xarray dataset.  

.. This doesn't generate anything
.. automodule:: mhkit.dolfyn
    :members:
    :no-undoc-members:
    :show-inheritance:


ADP Module
""""""""""
This module contains routines for reading and working with 
ADP/ADCP data. It contains:

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.io.api.read
	~mhkit.dolfyn.io.api.load
	~mhkit.dolfyn.rotate.api.rotate2
	~mhkit.dolfyn.adp.clean
	~mhkit.dolfyn.velocity.VelBinner


ADV Module
""""""""""
This module contains routines for reading and working with 
ADV data. It contains:

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.io.api.read
	~mhkit.dolfyn.io.api.load
	~mhkit.dolfyn.rotate.api.rotate2
	~mhkit.dolfyn.adv.clean
	~mhkit.dolfyn.rotate.api.set_inst2head_rotmat
	~mhkit.dolfyn.adv.motion.correct_motion
	~mhkit.dolfyn.velocity.VelBinner
	~mhkit.dolfyn.adv.turbulence.ADVBinner
	~mhkit.dolfyn.adv.turbulence.turbulence_statistics


IO
""
The io submodule contains the following functions to read
binary Nortek (e.g., .VEC, .wpr, .ad2cp, etc.) or TRDI
(.000, .PD0, .ENX, etc.) data file.  

.. autosummary::
   :nosignatures:
   
   ~mhkit.dolfyn.io.api.read
   ~mhkit.dolfyn.io.api.read_example
   ~mhkit.dolfyn.io.api.save
   ~mhkit.dolfyn.io.api.load
   ~mhkit.dolfyn.io.api.save_mat
   ~mhkit.dolfyn.io.api.load_mat
   
.. automodule:: mhkit.dolfyn.io.api
    :members:
    :undoc-members:
    :show-inheritance:


Rotate
""""""
The rotate submodule contains tools to rotate a dataset 
to a new coordinate system. 

.. autosummary::
   :nosignatures:

   ~mhkit.dolfyn.rotate.api.rotate2
   ~mhkit.dolfyn.rotate.api.calc_principal_heading
   ~mhkit.dolfyn.rotate.api.set_declination
   ~mhkit.dolfyn.rotate.api.set_inst2head_rotmat
 
.. automodule:: mhkit.dolfyn.rotate.api
    :members:
    :undoc-members:
    :show-inheritance:


Cleaning Data
"""""""""""""
The clean submodule contains basic quality control tools
specific to ADCP and ADVs.

ADP-specific functions:

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.adp.clean.set_range_offset
	~mhkit.dolfyn.adp.clean.find_surface
	~mhkit.dolfyn.adp.clean.find_surface_from_P
	~mhkit.dolfyn.adp.clean.nan_beyond_surface
	~mhkit.dolfyn.adp.clean.val_exceeds_thresh
	~mhkit.dolfyn.adp.clean.correlation_filter
	~mhkit.dolfyn.adp.clean.medfilt_orient
	~mhkit.dolfyn.adp.clean.fillgaps_time
	~mhkit.dolfyn.adp.clean.fillgaps_depth
  
ADV-specific functions:

.. autosummary::
	:nosignatures:
  
	~mhkit.dolfyn.adv.clean.clean_fill
	~mhkit.dolfyn.adv.clean.spike_thresh
	~mhkit.dolfyn.adv.clean.range_limit
	~mhkit.dolfyn.adv.clean.GN2002
	
.. automodule:: mhkit.dolfyn.adv.clean
    :members:
    :undoc-members:
    :show-inheritance:

.. automodule:: mhkit.dolfyn.adp.clean
    :members:
    :undoc-members:
    :show-inheritance:


Motion Correction
"""""""""""""""""
The motion correction submodule contains tools to correct
Nortek Vector ADV-IMU data using the onboard IMU, if 
equipped. Requires proper setup prior to collecting data.

.. autosummary::
	:nosignatures:
  
	~mhkit.dolfyn.adv.motion.correct_motion
  
.. automodule:: mhkit.dolfyn.adv.motion.correct_motion
    :members:
    :undoc-members:
    :show-inheritance:


Velocity Analysis
"""""""""""""""""
Analysis in DOLfYN is primarily handled through the 
`VelBinner` class. Below is a list of functions that can 
be called from `VelBinner`.

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.velocity.VelBinner
	~mhkit.dolfyn.binned.TimeBinner.reshape
	~mhkit.dolfyn.binned.TimeBinner.detrend 
	~mhkit.dolfyn.binned.TimeBinner.demean
	~mhkit.dolfyn.binned.TimeBinner.mean 
	~mhkit.dolfyn.binned.TimeBinner.variance
	~mhkit.dolfyn.binned.TimeBinner.standard_deviation
	~mhkit.dolfyn.binned.VelBinner.bin_average
	~mhkit.dolfyn.binned.VelBinner.bin_variance
	~mhkit.dolfyn.binned.VelBinner.autocovariance
	~mhkit.dolfyn.velocity.VelBinner.turbulent_kinetic_energy
	~mhkit.dolfyn.velocity.VelBinner.power_spectral_density

.. automodule:: mhkit.dolfyn.binned
    :members:
    :undoc-members:
    :show-inheritance:

.. automodule:: mhkit.dolfyn.velocity
    :members:
    :undoc-members:
    :show-inheritance:


Turbulence Analysis
"""""""""""""""""""
Functions for analyzing ADV data via the `ADVBinner` class, 
beyond those described in `VelBinner`.

.. autosummary::
	:nosignatures:

	~mhkit.dolfyn.adv.turbulence.ADVBinner
	~mhkit.dolfyn.adv.turbulence.turbulence_statistics
	~mhkit.dolfyn.adv.turbulence.reynolds_stress
	~mhkit.dolfyn.adv.turbulence.cross_spectral_density
	~mhkit.dolfyn.adv.turbulence.ADVBinner.dissipation_rate_LT83
	~mhkit.dolfyn.adv.turbulence.ADVBinner.dissipation_rate_SF
	~mhkit.dolfyn.adv.turbulence.ADVBinner.dissipation_rate_TE01
	~mhkit.dolfyn.adv.turbulence.ADVBinner.integral_length_scales

.. automodule:: mhkit.dolfyn.adv.turbulence
    :members:
    :undoc-members:
    :show-inheritance:


Tools
"""""
Spectral analysis and miscellaneous DOLfYN functions are 
stored here. These functions are used throughout DOLfYN's 
core code and may also be helpful to users in general.

FFT-based Functions:

.. autosummary::
	:nosignatures:

	~mhkit.dolfyn.tools.psd.fft_frequency
	~mhkit.dolfyn.tools.psd.psd_1D
	~mhkit.dolfyn.tools.psd.cpsd_1D
	~mhkit.dolfyn.tools.psd.cpsd_quasisync_1D

Other Functions:

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.tools.misc.detrend_array
	~mhkit.dolfyn.tools.misc.group
	~mhkit.dolfyn.tools.misc.slice1d_along_axis
	~mhkit.dolfyn.tools.misc.convert_degrees

.. automodule:: mhkit.dolfyn.tools.psd
    :members:
    :undoc-members:
    :show-inheritance:

.. automodule:: mhkit.dolfyn.tools.misc
    :members:
    :undoc-members:
    :show-inheritance:


Time
""""
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
   
.. automodule:: mhkit.dolfyn.time
    :members:
    :undoc-members:
    :show-inheritance:
    