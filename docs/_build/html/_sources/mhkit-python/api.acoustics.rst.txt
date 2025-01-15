.. _acoustics_api:

Passive Acoustics Module
^^^^^^^^^^^^^^^^^^^^^^^^

.. automodule:: mhkit.acoustics
    :members:
    :no-undoc-members:
    :show-inheritance:

    .. automodule:: mhkit.acoustics.analysis

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

.. automodule:: mhkit.acoustics.graphics
    :members:
    :no-undoc-members:
    :show-inheritance:

        .. autosummary::
            :nosignatures:
            
            ~plot_spectrogram
            ~plot_spectra
