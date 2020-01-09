.. _river_api:

River Module
^^^^^^^^^^^^^^^^^^^^^^^^^^
The river module contains a set of functions to 
calculate quantities of interest for river energy converters (REC). Flow discharge at the site is the primary input for the river module. IEC/TS 62600-100 recommends that river resource is calculated using historical discharge measurements, from at least 10 years daily discharge data, or flow discharge predicted by a regional hydrological model validated using at least one year discharge measurement. The latter approach is often suitable when only limited measurement data at the project site is available. Long-term discharge data from a river gauging stations located within the vicinity of the project site  can often be used for resource assessment. In the US, for example, historical flow discharge data from many gauging stations are publicly available, such as those collected by the US Geological Survey (USGS). The river module contains a functionality for reading historical discharge data published by USGS.  This functionality can be useful for users interested in using USGS data for river resource assessment.
      
**Discharge time series data** is stored as a pandas DataFrame indexed by time.  
  Time can be specified in datetime or in seconds.  The column names describe the type of data in each column.
  
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

Device
""""""""""""
The device submodule contains functions to compute equivalent diameter 
and capture area for circular, ducted, rectangular, adn multiple circular devices. 
A circular device is a vertical axis water turbine (VAWT). A 
rectangular device is a horizontal axis water turbine. A ducted device
is an enclosed VAWT. A multiple-circular devices is a device with
multiple VAWTs per device.

.. autosummary::
   :nosignatures:

   ~mhkit.river.device.circular
   ~mhkit.river.device.ducted
   ~mhkit.river.device.rectangular
   ~mhkit.river.device.multiple_circular
   
.. automodule:: mhkit.river.device
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
