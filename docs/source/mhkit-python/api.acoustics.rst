.. _acoustics_api:

Passive Acoustics Module
^^^^^^^^^^^^^^^^^^^^^^^^

.. automodule:: mhkit.acoustics
    :members:
    :no-undoc-members:
    :show-inheritance:
    :imported-members: 
    :exclude-members: VelBinner, epoch2dt64, dt642epoch

    .. automodule:: mhkit.acoustics.analysis

        .. autosummary::
           :nosignatures:
            
           ~minimum_frequency
           ~create_frequency_bands
           ~sound_pressure_spectral_density
           ~apply_calibration
           ~convert_to_third_octave
           ~convert_to_decidecade
           ~convert_to_millidecade
           ~convert_to_custom_bands

    .. automodule:: mhkit.acoustics.spsdl

        .. autosummary::
           :nosignatures:

           ~sound_pressure_spectral_density_level
           ~band_aggregate
           ~time_aggregate
           ~time_summation
           ~time_average

    .. automodule:: mhkit.acoustics.spl

        .. autosummary::
           :nosignatures:

           ~sound_pressure_level
           ~third_octave_sound_pressure_level
           ~decidecade_sound_pressure_level

    .. automodule:: mhkit.acoustics.sel

        .. autosummary::
           :nosignatures:
           
           ~nmfs_auditory_weighting
           ~sound_exposure_level

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
            ~read_wispr
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
