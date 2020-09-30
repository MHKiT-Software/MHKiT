.. _river_api:

River Module
^^^^^^^^^^^^^^^^^^^^^^^^^^
The river module contains a set of functions to calculate quantities of interest for river energy converters (REC). 
      
**Discharge time series data** is stored as a pandas DataFrame indexed by time.  
  Time can be specified in datetime or in seconds.  The column names describe the type of data in each column.
  
.. This doesn't generate anything
.. automodule:: mhkit.river
    :members:
    :no-undoc-members:
    :show-inheritance:
    
IO
""""""
The io submodule contains the following functions to 
load USGS discharge data.  

.. autosummary::
   :nosignatures:
   
   ~mhkit.river.io.read_usgs_file
   ~mhkit.river.io.request_usgs_data
   
.. automodule:: mhkit.river.io
    :members:
    :undoc-members:
    :show-inheritance:
    
Resource
""""""""""""
The resource submodule uses discharge data to compute 
exeedance probability, velocity, and power.  The module also contains functions
to compute the Froude number and to fit a polynomial to a series of points.
The polynomial is used to estimate the relationship between discharge and velocity 
or velocity and power at an individual turbine.

.. autosummary::
   :nosignatures:

   ~mhkit.river.resource.Froude_number
   ~mhkit.river.resource.polynomial_fit
   ~mhkit.river.resource.exceedance_probability
   ~mhkit.river.resource.discharge_to_velocity
   ~mhkit.river.resource.velocity_to_power
 
.. TODO Add Annual energy produced (AEP)

.. automodule:: mhkit.river.resource
    :members:
    :undoc-members:
    :show-inheritance:

Performance
""""""""""""
The performance submodule contains functions to compute equivalent diameter 
and capture area for circular, ducted, rectangular, adn multiple circular devices. 
A circular device is a vertical axis water turbine (VAWT). A 
rectangular device is a horizontal axis water turbine. A ducted device
is an enclosed VAWT. A multiple-circular devices is a device with
multiple VAWTs per device. The performance module also includes functions 
for calculating a turbine coeffcient of power and tip speed ratio.

.. autosummary::
   :nosignatures:
   
   ~mhkit.river.performance.power_coefficient
   ~mhkit.river.performance.tip_speed_ratio
   ~mhkit.river.performance.circular
   ~mhkit.river.performance.ducted
   ~mhkit.river.performance.rectangular
   ~mhkit.river.performance.multiple_circular
   
.. automodule:: mhkit.river.performance
    :members:
    :undoc-members:
    :show-inheritance:
	
Graphics
""""""""""""
The graphics submodule contains functions to plot river resource data and related metrics.  

.. autosummary::
   :nosignatures:

   ~mhkit.river.graphics.plot_flow_duration_curve
   ~mhkit.river.graphics.plot_velocity_duration_curve
   ~mhkit.river.graphics.plot_power_duration_curve
   ~mhkit.river.graphics.plot_discharge_timeseries
   ~mhkit.river.graphics.plot_discharge_vs_velocity
   ~mhkit.river.graphics.plot_velocity_vs_power
   
.. automodule:: mhkit.river.graphics
    :members:
    :undoc-members:
    :show-inheritance:
