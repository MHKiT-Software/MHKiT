.. _tidal_api_matlab:

Tidal Module
^^^^^^^^^^^^^^^^^^^^^^^^^^
The tidal module contains a set of functions to 
calculate quantities of interest for tidal energy converters.

.. Note::
    The names of the functions below are of the convention ``path.path.function``. Only the function name is used when calling the function in MATLAB. For example, to call on ``mhkit.tidal.io.request_noaa_data`` simply use ``request_noaa_data``. 
    
IO
""""""""""""
The io submodule contains the following functions to 
load USGS Discharge data into structures.  

===========================================  =========================
Functions                                    Description
===========================================  =========================
``read_noaa_json``                              Returns site structure from a json saved from the request_noaa_data function
``request_noaa_data``                           Loads NOAA current data directly from https://tidesandcurrents.noaa.gov/api/ using a GET request into a structure
===========================================  ========================= 

.. mat:automodule:: mhkit.tidal.io
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

===========================================  =========================
Functions                                    Description
===========================================  =========================
``principal_flow_direction``                    Calculates the principal flow directions of current data
``Froude_number``                               Calculate the Froude Number of the river, channel or duct flow, to check subcritical flow assumption (if Fr <1).
``exceedance_probability``                      Calculates the exceedance probability
===========================================  ========================= 

.. mat:automodule:: mhkit.tidal.resource
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
multiple VAWTs per device.
This submodule also contains functions for computing tip speed ratio and the power coefficient from blade/rotor type devices.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``circular``                                    Calculates the equivalent diameter and projected capture area of a circular turbine
``ducted``                                      Calculates the equivalent diameter and projected capture area of a ducted turbine
``multiple_circular``                           Calculates the equivalent diameter and projected capture area of a multiple circular turbine
``rectangular``                                 Calculates the equivalent diameter and projected capture area of a retangular turbine
``tip_speed_ratio``                             Calculates the tip speed ratio (TSR) of a MEC device with rotor
``power_coefficient``                           Calculates the calculates the power coefficient of MEC device
===========================================  ========================= 

.. mat:automodule:: mhkit.river.performance
    :members:
    :undoc-members:
    :show-inheritance:

.. Note::
	Tidal device functions are the same as the River device functions

Graphics
""""""""""""
The graphics submodule contains functions to plot river data and related metrics.  
The functions are designed to work in parallel with the :class:`~mhkit.tidal.resource` submodule.

===========================================  =========================
Functions                                    Description
===========================================  =========================
``plot_velocity_duration_curve``                 Plots velocity vs exceedance probability as a Flow Duration Curve (FDC)
``plot_rose``                                    Creates a polar histogram. Direction angles from binned histogram must be specified such that 0  degrees is north.
``plot_joint_probability_distribution``          Creates a polar histogram. Direction angles from binned histogram must be specified such that 0 is north.
``plot_current_timeseries``                      Returns a plot of velocity from an array of direction and speed data in the direction of the supplied principal_direction.
``plot_tidal_phase_exceedance``                  Creates a stacked area plot of the exceedance probability for the flood and ebb tidal phases.
``plot_tidal_phase_probability``                 Discretizes the tidal series speed by bin size and returns a plot of the probability for each bin in the flood or ebb tidal phase.
===========================================  ========================= 

.. mat:automodule:: mhkit.tidal.graphics
    :members:
    :undoc-members:
    :show-inheritance:
