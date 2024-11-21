.. _acoustics_api:

Passive Acoustics Module
^^^^^^^^^^^^^^^^^^^^^^^^

.. automodule:: mhkit.acoustics
    :members:
    :no-undoc-members:
    :show-inheritance:
    
        Analysis functions are stored in the analysis submodule,
        accessed directly from ``mhkit.acoustics``. These functions
        are intended to be used on top of the I/O submodule, and
        include functionality to calibrate data, create spectral 
        densities, sound pressure levels, and time or band
        aggregate spectral data.

        .. autosummary::
           :nosignatures:
            
           ~minimum_frequency
           ~sound_pressure_spectral_density
           ~apply_calibration
           ~sound_pressure_spectral_density_level
           ~band_aggregate
           ~time_aggregate
           ~sound_pressure_level
           ~third_octave_sound_pressure_level
           ~decidecade_sound_pressure_level

IO
""""

There is one primary function of the I/O submodule that
can be used to read in *.wav* files output by hydrophones,
``acoustics.io.read_hydrophone``. There are a couple 
manufacturer specific wrappers around this function, as 
well as one to export audio back into a *.wav* file.

.. automodule:: mhkit.acoustics.io
    :members:
    :no-undoc-members:
    :show-inheritance:

        .. autosummary::
            :nosignatures:
            
            ~read_hydrophone
            ~read_soundtrap
            ~read_iclisten
            ~export_audio

Graphics
""""""""

The graphics submodule provides functions for plotting
spectograms (frequency vs time) and spectra (psd vs frequency).
These functions are fully configurable via matplotlib
and can be pulled into existing plotting frameworks.

.. automodule:: mhkit.acoustics.graphics
    :members:
    :no-undoc-members:
    :show-inheritance:

        .. autosummary::
            :nosignatures:
            
            ~plot_spectogram
            ~plot_spectra
