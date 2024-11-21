.. _river_api:

River Module
^^^^^^^^^^^^^^^^^^^^^^^^^^
The river module contains a set of functions to calculate quantities of interest for river energy converters (REC). 
  
.. automodule:: mhkit.river
   :members:
   :no-undoc-members:
   :show-inheritance:
    
IO
""""""
The io submodule contains the following functions to 
load USGS discharge and Delft3D data.  

.. automodule:: mhkit.river.io
   :members:
   :no-undoc-members:
   :show-inheritance:

USGS
++++

.. automodule:: mhkit.river.io.usgs
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~read_usgs_file
      ~request_usgs_data

D3D
+++

.. automodule:: mhkit.river.io.d3d
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:
      
      ~get_all_time
      ~index_to_seconds
      ~seconds_to_index
      ~get_layer_data
      ~create_points
      ~variable_interpolation
      ~get_all_data_points
      ~turbulent_intensity

Resource
""""""""""""
The resource submodule uses discharge data to compute 
exeedance probability, velocity, and power.  The module also contains functions
to compute the Froude number and to fit a polynomial to a series of points.
The polynomial is used to estimate the relationship between discharge and velocity 
or velocity and power at an individual turbine.

.. automodule:: mhkit.river.resource
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~Froude_number
      ~exceedance_probability
      ~polynomial_fit
      ~discharge_to_velocity
      ~velocity_to_power
      ~energy_produced

Performance
""""""""""""
The performance submodule contains functions to compute equivalent diameter 
and capture area for circular, ducted, rectangular, adn multiple circular devices. 
A circular device is a vertical axis water turbine (VAWT). A 
rectangular device is a horizontal axis water turbine. A ducted device
is an enclosed VAWT. A multiple-circular devices is a device with
multiple VAWTs per device. The performance module also includes functions 
for calculating a turbine coeffcient of power and tip speed ratio.

.. automodule:: mhkit.river.performance
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

Graphics
""""""""""""
The graphics submodule contains functions to plot river resource data and related metrics.  

.. automodule:: mhkit.river.graphics
   :members:
   :undoc-members:
   :show-inheritance:

   .. autosummary::
      :nosignatures:

      ~plot_flow_duration_curve
      ~plot_velocity_duration_curve
      ~plot_power_duration_curve
      ~plot_discharge_timeseries
      ~plot_discharge_vs_velocity
      ~plot_velocity_vs_power
