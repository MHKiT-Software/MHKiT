.. _tidal_api:

Tidal Module
^^^^^^^^^^^^^^^^^^^^^^^^^^
The tidal module contains a set of functions to 
calculate quantities of interest for tidal energy converters (TEC).

The tidal module uses timeseries data of velocity and direction.


* **Velocity/ direction time series data** is stored as a pandas DataFrame indexed by time.
    Time can be specified in datetime or in seconds.  The column names describe the type of data in each column.

.. automodule:: mhkit.tidal
    :members:
    :no-undoc-members:
    :show-inheritance:
    
IO
""""""""""""
The io submodule contains the following functions to
load NOAA velocity/ direction data

.. autosummary::
   :nosignatures:
      
   ~mhkit.tidal.io.request_noaa_data


.. automodule:: mhkit.tidal.io
    :members:
    :undoc-members:
    :show-inheritance:
    
Resource
""""""""""""
The resource module allows the user to calculate the ebb and flood directions
of the tidal resource given a timeseries of directional data. The

.. autosummary::
   :nosignatures:

   ~mhkit.tidal.resource.principal_flow_directions
   ~mhkit.tidal.resource.Froude_number
   ~mhkit.tidal.resource.exceedance_probability

.. automodule:: mhkit.tidal.resource
    :members:
    :undoc-members:
    :show-inheritance:

Device
""""""""""""
The device submodule contains functions to compute equivalent diameter
and capture area for circular, ducted, rectangular, adn multiple circular devices.
A circular device is a vertical axis water turbine (VAWT). A
rectangular device is a horizontal axis water turbine (HAWT). A ducted device
is an enclosed VAWT. A multiple-circular devices is a device with
multiple VAWTs per device.

.. autosummary::
   :nosignatures:

   ~mhkit.tidal.device.circular
   ~mhkit.tidal.device.ducted
   ~mhkit.tidal.device.rectangular
   ~mhkit.tidal.device.multiple_circular
   
.. automodule:: mhkit.tidal.device
    :members:
    :undoc-members:
    :show-inheritance:


	
Graphics
""""""""""""
The graphics submodule contains functions to plot tidal resource data and related metrics.

.. autosummary::
   :nosignatures:

   ~mhkit.tidal.graphics.plot_rose
   ~mhkit.tidal.graphics.plot_joint_probability_distribution
   ~mhkit.tidal.graphics.plot_current_timeseries
   
.. automodule:: mhkit.tidal.graphics
    :members:
    :undoc-members:
    :show-inheritance:



