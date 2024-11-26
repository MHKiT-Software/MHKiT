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
The io submodule contains the following functions to
load NOAA velocity/ direction data.

.. automodule:: mhkit.tidal.io
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:
            
      ~noaa.request_noaa_data
      ~noaa.read_noaa_json
    
Resource
""""""""""""
The resource module allows the user to calculate the ebb and flood directions
of the tidal resource given a timeseries of directional data. 

.. automodule:: mhkit.tidal.resource
   :members:
   :undoc-members:
   :show-inheritance:

    .. autosummary::
       :nosignatures:

       ~principal_flow_directions
       ~Froude_number
       ~exceedance_probability

Performance
""""""""""""
The performance submodule contains functions to compute equivalent diameter
and capture area for circular, ducted, rectangular, adn multiple circular devices.
A circular device is a vertical axis water turbine (VAWT). A
rectangular device is a horizontal axis water turbine (HAWT). A ducted device
is an enclosed VAWT. A multiple-circular devices is a device with
multiple VAWTs per device. This submodule also contains functions for computing 
the tip speed ratio and power coefficient from a blade/rotor type device.

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
The graphics submodule contains functions to plot tidal resource data 
and related metrics.

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
