.. _acoustics_api:

Passive Acoustics Module
^^^^^^^^^^^^^^^^^^^^^^^^
The passive acoustics module contains a set of functions
for analyzing and visualizing passive acoustic monitoring 
data deployed in water bodies. This package reads in raw
wav files and conducts basic acoustics analysis and 
visualization.

To start using the module, import it directly from MHKiT.
`from mhkit import acoustics`. The analysis functions
are available directly from the main import, while the 
I/O and graphics submodules are available from 
`acoustics.io` and  `acoustics.graphics`, respectively.

I/O submodule
"""""""""""""
There is one primary function of the I/O submodule that
can be used to read in *.wav* files output by hydrophones,
`acoustics.io.read_hydrophone`. There are a couple 
manufacturer specific wrappers around this function, as 
well as one to export audio back into a *.wav* file.

.. autosummary::
	:nosignatures:
	
    ~mhkit.acoustics.io.read_hydrophone
    ~mhkit.acoustics.io.read_soundtrap
    ~mhkit.acoustics.io.read_iclisten
    ~mhkit.acoustics.io.export_audio


Analysis submodule
""""""""""""""""""
Analysis functions are stored in the analysis submodule,
accessed directly from `mhkit.acoustics`. These functions
are intended to be used on top of the I/O submodule, and
include functionality to calibrate data, create spectral 
densities, sound pressure levels, and time or band
aggregate spectral data.

.. autosummary::
	:nosignatures:
	
    ~mhkit.acoustics.minimum_frequency
    ~mhkit.acoustics.sound_pressure_spectral_density
    ~mhkit.acoustics.apply_calibration
    ~mhkit.acoustics.sound_pressure_spectral_density_level
    ~mhkit.acoustics.band_aggregate
    ~mhkit.acoustics.time_aggregate
    ~mhkit.acoustics.sound_pressure_level
    ~mhkit.acoustics.third_octave_sound_pressure_level
    ~mhkit.acoustics.decidecade_sound_pressure_level


Graphics submodule
""""""""""""""""""
The graphics submodule provides functions for plotting
spectograms (frequency vs time) and spectra (psd vs frequency).
These functions are fully configurable via matplotlib
and can be pulled into existing plotting frameworks.

.. autosummary::
	:nosignatures:
	
    ~mhkit.acoustics.graphics.plot_spectogram
    ~mhkit.acoustics.graphics.plot_spectra
