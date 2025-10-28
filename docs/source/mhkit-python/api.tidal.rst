.. _tidal_api:

Tidal Module
^^^^^^^^^^^^
The tidal module contains a set of functions to 
calculate quantities of interest for tidal energy converters (TEC).

The tidal module uses timeseries data of velocity and direction.

.. automodule:: mhkit.tidal
   :members:
   :no-undoc-members:
   :show-inheritance:
    
IO
""""""""""""
The io submodule contains functions to load NOAA and Delft3D data.

.. automodule:: mhkit.tidal.io
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:
            
      ~noaa.request_noaa_data
      ~noaa.read_noaa_json
      ~d3d.get_all_time
      ~d3d.index_to_seconds
      ~d3d.seconds_to_index
      ~d3d.get_layer_data
      ~d3d.create_points
      ~d3d.variable_interpolation
      ~d3d.get_all_data_points
      ~d3d.turbulent_intensity
    
Resource
""""""""""""
This module provides utility functions for analyzing river and tidal
flow directions and velocities. It includes tools for determining
principal flow directions, classifying ebb and flood cycles, and
computing probability distributions of flow velocities.

.. automodule:: mhkit.tidal.resource
   :members:
   :undoc-members:
   :show-inheritance:

    .. autosummary::
       :nosignatures:

       ~principal_flow_directions
       ~froude_number
       ~exceedance_probability

Performance
""""""""""""
This module provides functions for analyzing the performance of tidal energy
devices using Acoustic Doppler Current Profiler (ADCP) data. It includes
methods for calculating power curves, efficiency, velocity profiles, and
other metrics relevant to marine energy devices.

.. automodule:: mhkit.tidal.performance
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~circular
      ~ducted
      ~rectangular
      ~multiple_circular
      ~tip_speed_ratio
      ~power_coefficient
      ~power_curve
      ~velocity_profiles
      ~device_efficiency
	
Graphics
""""""""""""
This module provides functions for visualizing tidal resource and performance data.
It includes tools for creating polar plots, velocity distributions, exceedance
probability charts, and current time-series plots.

.. automodule:: mhkit.tidal.graphics
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~plot_rose
      ~plot_joint_probability_distribution
      ~plot_current_timeseries
      ~plot_velocity_duration_curve
      ~tidal_phase_probability
      ~tidal_phase_exceedance
