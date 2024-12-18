.. _dolfyn_api:

DOLfYN Module
^^^^^^^^^^^^^
The DOLfYN module contains a set of functions to analyze 
binary Nortek or TRDI files. **Instrument datafiles** are 
processed and returned as an xarray dataset.  

There a couple ways to start using the dolfyn module. The
first way is to import the entire module using 
`import mhkit.dolfyn as dolfyn`.
Many functions are directly available from the main dolfyn 
import:

.. automodule:: mhkit.dolfyn
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~io.api.read
      ~io.api.read_example
      ~io.api.save
      ~io.api.load
      ~io.api.save_mat
      ~io.api.load_mat
      ~rotate.api.rotate2
      ~rotate.api.calc_principal_heading
      ~rotate.api.set_declination
      ~rotate.api.set_inst2head_rotmat
      ~rotate.base.euler2orient
      ~rotate.base.orient2euler
      ~rotate.base.quaternion2orient
      ~velocity.VelBinner

ADP Submodule
"""""""""""""
The other two ways are to import the instrument-specific
modules.
The ADP module contains routines for reading and working with 
ADP/ADCP data and is imported using 
`from mhkit.dolfyn.adp import api`. It contains:

.. automodule:: mhkit.dolfyn.adp
   :members:
   :imported-members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

	  ~api.read
	  ~api.load
	  ~api.rotate2
	  ~api.calc_principal_heading
	  ~api.clean
	  ~api.VelBinner
	  ~api.ADPBinner

ADV Submodule
"""""""""""""
The ADV module contains routines for reading and working with 
ADV data and is imported using 
`from mhkit.dolfyn.adv import api`. It contains:

.. automodule:: mhkit.dolfyn.adv
   :members:
   :imported-members:
   :undoc-members:
   :show-inheritance:
   
	.. autosummary::
		:nosignatures:
		
		~api.read
		~api.load
		~api.rotate2
		~api.calc_principal_heading
		~api.set_inst2head_rotmat
		~api.clean
		~api.correct_motion
		~api.VelBinner
		~api.ADVBinner
		~api.turbulence_statistics

IO Submodule
""""""""""""
The io submodule contains the following functions to read
binary Nortek (e.g., .VEC, .wpr, .ad2cp, etc.) or TRDI
(.000, .PD0, .ENX, etc.) data file.  

.. automodule:: mhkit.dolfyn.io
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:
		
		~api.read
		~api.read_example
		~api.save
		~api.load
		~api.save_mat
		~api.load_mat
   
.. automodule:: mhkit.dolfyn.io.api
    :members:
    :undoc-members:
    :show-inheritance:
    
.. automodule:: mhkit.dolfyn.io.base
    :members:
    :undoc-members:
    :show-inheritance:
    
.. automodule:: mhkit.dolfyn.io.nortek
    :members:
    :undoc-members:
    :show-inheritance:
    
.. automodule:: mhkit.dolfyn.io.nortek2
    :members:
    :undoc-members:
    :show-inheritance:
    
.. automodule:: mhkit.dolfyn.io.rdi
    :members:
    :undoc-members:
    :show-inheritance:

Rotate Submodule
""""""""""""""""
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

.. automodule:: mhkit.dolfyn.rotate
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:

		~api.rotate2
		~api.calc_principal_heading
		~api.set_declination
		~api.set_inst2head_rotmat
		~base.euler2orient
		~base.orient2euler
		~base.quaternion2orient
		~base.calc_tilt
 
.. automodule:: mhkit.dolfyn.rotate.api
    :members:
    :undoc-members:
    :show-inheritance:

.. automodule:: mhkit.dolfyn.rotate.base
    :members:
    :undoc-members:
    :show-inheritance:

Cleaning Data
"""""""""""""
The clean submodule contains basic quality control tools
specific to ADCP and ADVs.

ADP Cleaning
+++++++++++++

.. automodule:: mhkit.dolfyn.adp.clean
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:
		
		~set_range_offset
		~water_depth_from_amplitude
		~water_depth_from_pressure
		~remove_surface_interference
		~correlation_filter
		~medfilt_orient
		~val_exceeds_thresh
		~fillgaps_time
		~fillgaps_depth
  
ADV Cleaning
+++++++++++++

.. automodule:: mhkit.dolfyn.adv.clean
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:
	
		~clean_fill
		~fill_nan_ensemble_mean
		~spike_thresh
		~range_limit
		~GN2002

Motion Correction
"""""""""""""""""
The motion correction submodule contains tools to correct
Nortek Vector ADV-IMU data using the onboard IMU, if 
equipped. Requires `proper setup <https://dolfyn.readthedocs.io/en/stable/motion-correction.html>`_
prior to collecting data.

.. automodule:: mhkit.dolfyn.adv.motion
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:
	
		~correct_motion

Velocity Analysis
"""""""""""""""""
Analysis in DOLfYN is primarily handled through the 
`VelBinner` class. Below is a list of functions that can 
be called from `VelBinner`.

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.velocity.VelBinner
	~mhkit.dolfyn.velocity.VelBinner.bin_average
	~mhkit.dolfyn.velocity.VelBinner.bin_variance
	~mhkit.dolfyn.velocity.VelBinner.autocovariance
	~mhkit.dolfyn.velocity.VelBinner.turbulence_intensity
	~mhkit.dolfyn.velocity.VelBinner.turbulent_kinetic_energy
	~mhkit.dolfyn.velocity.VelBinner.power_spectral_density
	~mhkit.dolfyn.binned.TimeBinner.reshape
	~mhkit.dolfyn.binned.TimeBinner.detrend 
	~mhkit.dolfyn.binned.TimeBinner.demean
	~mhkit.dolfyn.binned.TimeBinner.mean 
	~mhkit.dolfyn.binned.TimeBinner.variance
	~mhkit.dolfyn.binned.TimeBinner.standard_deviation

.. automodule:: mhkit.dolfyn.velocity
    :members:
    :undoc-members:
    :show-inheritance:

.. automodule:: mhkit.dolfyn.binned
    :members:
    :undoc-members:
    :show-inheritance:


ADV Turbulence Analysis
"""""""""""""""""""""""
Functions for analyzing ADV data via the `ADVBinner` class, 
beyond those described in `VelBinner`.

.. automodule:: mhkit.dolfyn.adv.turbulence
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:

		~ADVBinner
		~turbulence_statistics
		~ADVBinner.reynolds_stress
		~ADVBinner.cross_spectral_density
		~ADVBinner.doppler_noise_level
		~ADVBinner.check_turbulence_cascade_slope
		~ADVBinner.dissipation_rate_LT83
		~ADVBinner.dissipation_rate_SF
		~ADVBinner.dissipation_rate_TE01
		~ADVBinner.integral_length_scales

AD2CP Turbulence Analysis
"""""""""""""""""""""""""
Functions for analyzing turbulence from AD2CP measurements
via the `ADPBinner` class.

.. automodule:: mhkit.dolfyn.adp.turbulence
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:

		~ADPBinner
		~ADPBinner.dudz
		~ADPBinner.dvdz
		~ADPBinner.dwdz
		~ADPBinner.shear_squared
		~ADPBinner.doppler_noise_level
		~ADPBinner.reynolds_stress_4beam
		~ADPBinner.stress_tensor_5beam
		~ADPBinner.check_turbulence_cascade_slope
		~ADPBinner.dissipation_rate_LT83
		~ADPBinner.dissipation_rate_SF
		~ADPBinner.friction_velocity

Tools
"""""
Spectral analysis and miscellaneous DOLfYN functions are 
stored here. These functions are used throughout DOLfYN's 
core code and may also be helpful to users in general.

FFT-based Functions
+++++++++++++++++++

.. automodule:: mhkit.dolfyn.tools.fft
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:

		~fft_frequency
		~psd_1D
		~cpsd_1D
		~cpsd_quasisync_1D

Other Functions
+++++++++++++++

.. automodule:: mhkit.dolfyn.tools.misc
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:
		
		~detrend_array
		~group
		~slice1d_along_axis
		~convert_degrees
		~fillgaps
		~interpgaps
		~medfiltnan

Time
""""
The time submodule contains functions to modify the format
of the stored time between a variety of time formats.

.. automodule:: mhkit.dolfyn.time
    :members:
    :undoc-members:
    :show-inheritance:

	.. autosummary::
		:nosignatures:
		
		~epoch2dt64
		~dt642epoch
		~date2dt64
		~dt642date
		~epoch2date
		~date2str
		~date2epoch
		~date2matlab
		~matlab2date
