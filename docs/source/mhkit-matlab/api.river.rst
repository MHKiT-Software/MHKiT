.. _river_api_matlab:

River Module
^^^^^^^^^^^^^^^^^^^^^^^^^^
The river module contains a set of functions to calculate quantities of interest for river energy converters (REC).
    
.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.river.io.request_usgs_data`` simply use ``request_usgs_data``. 

IO
""""""""""""
The io submodule contains the following functions to load USGS Discharge data into structures.  

==============================================  =========================
Functions                                        Description
==============================================  =========================
``read_usgs_file``                                  Reads a USGS JSON data file (from https://waterdata.usgs.gov/nwis) into a structure 
``request_usgs_file``                               Loads USGS data directly from https://waterdata.usgs.gov/nwis using a GET request into a structure
``delft_3d_calculate_turbulent_intensity``          Returns the turbulent intensity percentage for a given data set for the specified points
``delft_3d_calculate_unorm``                        Calculates the root mean squared value given three arrays.
``delft_3d_calculate_variable_interpolation``       Interpolates multiple variables from the Delft3D onto the same points.
``delft_3d_cleanup_turbulent_kinetic_energy``       Cleans up the turbulent kinetic energy values based on a threshold.
``delft_3d_convert_time``                           Converts timestamps into a usable format.
``delft_3d_create_points``                          Turns three coordinate inputs into a single output struct of points
``delft_3d_get_all_data_points``                    Returns all data points for a specific variable at a given time index from a Delft 3D netCDF object.
``delft_3d_get_all_time``                           Returns all time values from a Delft 3D netCDF object.
``delft_3d_get_keys``                               Returns a struct of the key/values of a Delft 3D netCDF object.
``delft_3d_get_layer_data``                         Returns layer data from a Delft 3D netCDF object.
``delft_3d_index_to_seconds``                       Returns the time in seconds corresponding to the given index in the Delft3D dataset.
``delft_3d_interpolate_to_centerline``              Interpolates data to points along a centerline.
``delft_3d_open_netcdf``                            Opens a Delft 3D netCDF file as a python netCDF4 object
``delft_3d_seconds_to_index``                       Returns the index corresponding to the given number of seconds elapsed in the Delft3D dataset.
==============================================  ========================= 

.. mat:automodule:: mhkit.river.IO
    :members:
    :undoc-members:

.. mat:automodule:: mhkit.river.IO.delft_3d
    :members:
    :undoc-members:

Resource
""""""""""""
The resource submodule uses discharge data to compute exeedance probability, velocity, and power.  The module also contains functions to compute the Froude number and to fit a polynomial to a series of points. The polynomial is used to estimate the relationship between discharge and velocity or velocity and power at an individual turbine.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``Froude_number``                                Calculate the Froude Number of the river, channel or duct flow, to check subcritical flow assumption (if Fr <1).
``polynomial_fit``                               Returns a polynomial fit for y given x of order n with an R-squared score of the fit
``exceedance_probability``                       Calculates the exceedance probability
``discharge_to_velocity``                        Calculates velocity given discharge data and the relationship between discharge and velocity at an individual turbine
``velocity_to_power``                            Calculates power given velocity data and the relationship between velocity and power from an individual turbine
``energy_produced``                              Returns the energy produced for a given time period provided exceedence probability and power.
===========================================  ========================= 

.. mat:automodule:: mhkit.river.resource
    :members:
    :undoc-members:

Performance 
""""""""""""
The performance submodule contains functions to compute equivalent diameter and capture area for circular, ducted, rectangular, and
multiple circular devices. A circular device is a vertical axis water turbine (VAWT). 
A rectangular device is a horizontal axis water turbine. A ducted device is an enclosed VAWT. A multiple-circular devices is a device with multiple VAWTs per device.
This submodule also contains functions for computing tip speed ratio and the power coefficient from blade/rotor type devices.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``circular``                                     Calculates the equivalent diameter and projected capture area of a circular turbine
``ducted``                                       Calculates the equivalent diameter and projected capture area of a ducted turbine
``multiple_circular``                            Calculates the equivalent diameter and projected capture area of a multiple circular turbine
``rectangular``                                  Calculates the equivalent diameter and projected capture area of a retangular turbine
``tip_speed_ratio``                              Calculates the tip speed ratio (TSR) of a MEC device with rotor
``power_coefficient``                            Calculates the calculates the power coefficient of MEC device
===========================================  ========================= 

.. mat:automodule:: mhkit.river.performance
    :members:
    :undoc-members:

Graphics
""""""""""""
The graphics submodule contains functions to plot river data and related metrics.  The functions are designed to work in parallel with the :class:`~mhkit.river.resource` submodule.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``plot_discharge_timeseries``                    Plots discharge vs time
``plot_discharge_vs_velocity``                   Plots discharge vs velocity
``plot_flow_duration_curve``                     Plots discharge vs exceedance probability as a Flow Duration Curve (FDC)
``plot_power_duration_curve``                    Plots power vs exceedance probability as a Flow Duration Curve (FDC)
``plot_velocity_duration_curve``                 Plots velocity vs exceedance probability as a Flow Duration Curve (FDC)
``plot_velocity_vs_power``                       Plots velocity vs power along with a polynomial fit 
===========================================  ========================= 

.. mat:automodule:: mhkit.river.graphics
    :members:
    :undoc-members:
