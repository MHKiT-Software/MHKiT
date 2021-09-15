.. _dolfyn_api:

DOLfYN Module
^^^^^^^^^^^^^
DOLfYN is a library of tools for reading, processing, and analyzing
data from oceanographic velocity measurement instruments such as
acoustic Doppler velocimeters (ADVs) and acoustic Doppler current profilers
(ADCPs). It is currently being migrated into MHKiT, which currently includes 
tools to

 * Read in raw ADCP/ADV datafiles
 * Rotate vector data through coordinate systems (i.e. beam to instrument to Earth to principal frames of reference)
 
DOLfYN data objects are built on xarray `DataArrays
<http://xarray.pydata.org/en/stable/user-guide/data-structures.html>`_
combined into a single `Dataset <http://xarray.pydata.org/en/stable/generated/xarray.Dataset.html#xarray.Dataset>`_. 
Xarray can be thought of as a multidimensional extension of pandas, though 
it is not built on top of pandas. Datasets and DataArrays support all of the 
same basic functionality of dictionaries (e.g., indexing, iterating, etc.), 
with additional functionality that is designed to streamline the process of 
analyzing and working with data.
 

Instrument Support
""""""""""""""""""

 * Nortek:
    * AWAC ADCP
    * Signature AD2CP
    * Vector ADV
	
 * TRDI:
    * Workhorse ADCPs (Monitor and Sentinel)
    * WinRiver output files
    * VMDAS output files


I/O
"""
Contains high level routines for reading in instrument binary data, 
and saving and loading xarray datasets. DOLfYN will automatically search through 
and select a binary reader based on the input data's file extension.

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.io.api.read
	~mhkit.dolfyn.io.api.read_example
	~mhkit.dolfyn.io.api.save
	~mhkit.dolfyn.io.api.load
	~mhkit.dolfyn.io.api.save_mat
	~mhkit.dolfyn.io.api.load_mat
	
I/O functions can be accessed directly from the main import::

	>> import mhkit.dolfyn as dlfn
	>> dat = dlfn.read(<path/to/my_data_file>)
	>> dlfn.save(dat, <path/to/save_file.nc>)

.. automodule:: mhkit.dolfyn.io.api
    :members:
    :undoc-members:
    :show-inheritance:
	

Rotate
""""""
Contains functions for rotating data through frames of reference (FoR):
	1. **'beam'**: Follows the acoustic beam FoR, where velocity data is organized by beam number 1-3 or 1-4.
	2. **'inst'**: The instrument's *XYZ* Cartesian directions. For ADVs, this orientation is from the mark on the ADV body/battery canister, not the sensor head. For TRDI 4-beam instruments, the fourth velocity term is the error velocity (aka *XYZE*). For Nortek 4-beam instruments, this is *XYZ1 Z2*, where *E=Z2-Z1*.
	3. **'earth'**: *East North UP* (*ENU*) FoR. Based on either magnetic or true North, depending on whether or not DOLfYN has a magnetic declination associated with the dataset. Instruments do not internally record magnetic declination, unless it has been supplied via external software like TRDI's VMDAS.
	4. **'principal'**: Rotates velocity data into a *streamwise*, *cross-stream*, and *vertical* FoR based on the principal flow direction. One must calculate principal heading first.

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.rotate.api.rotate2
	~mhkit.dolfyn.rotate.api.set_declination
	~mhkit.dolfyn.rotate.api.calc_principal_heading
	~mhkit.dolfyn.rotate.api.set_inst2head_rotmat
	
These functions pertain to both ADCPs and ADVs::

	>> import mhkit.dolfyn as dlfn
	>> dat = dlfn.read_example('burst_mode01.VEC')
	
	>> dat_mag = dlfn.set_declination(dat, 12)
	>> dat_earth = dlfn.rotate2(dat_mag, 'earth')
	
	>> dat_earth.attrs['principal_heading'] = dlfn.calc_principal_heading(dat_earth['vel'])
	>> dat_flow = dlfn.rotate2(dat_earth, 'principal')

.. automodule:: mhkit.dolfyn.rotate.api
    :members:
    :undoc-members:
    :show-inheritance:
	

Time
""""
Time in DOLfYN is handled primary in epoch time, or seconds since 1/1/1970, and 
includes conversion to Unix timestamps, datetime objects, and MATLAB datenum.

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.time.date2dt64
	~mhkit.dolfyn.time.dt642date
	~mhkit.dolfyn.time.epoch2dt64
	~mhkit.dolfyn.time.dt642epoch
	~mhkit.dolfyn.time.epoch2date
	~mhkit.dolfyn.time.date2str
	~mhkit.dolfyn.time.date2epoch
	~mhkit.dolfyn.time.date2matlab
	~mhkit.dolfyn.time.matlab2date

.. automodule:: mhkit.dolfyn.time
    :members:
    :undoc-members:
    :show-inheritance:
	

Other functions
"""""""""""""""
Functions in the DOLfYN codebase that may be useful to users are kept here

.. autosummary::
	:nosignatures:
	
	~mhkit.dolfyn.tools.misc.slice1d_along_axis
	~mhkit.dolfyn.tools.misc.fillgaps
	~mhkit.dolfyn.tools.misc.interpgaps
	~mhkit.dolfyn.tools.misc.convert_degrees

.. automodule:: mhkit.dolfyn.tools.misc
    :members:
    :undoc-members:
    :show-inheritance: