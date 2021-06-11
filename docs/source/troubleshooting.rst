.. _troubleshooting:

Troubleshooting
====================
There are known issues with various configurations of Python packages, interactions with Matlab, and operating systems. 
This section provides solutions to known issues wherever possible. 

For all issues, first make sure your MHKiT and other dependant packages are up to date. 

For Python: 
    ```pip install mhkit --upgrade``` or ```pip install -e . ``` from your local clone

For Matlab: Follow the MHKiT-Matlab `installation instructions <https://mhkit-software.github.io/MHKiT/installation.html#id7>`_ to download the latest version. 

WPTO Hindcast Issues
---------------------------
In some Python package configurations, the WPTO hindcast functions will not be installed with MHKiT due to an issue with the h5py package. 
in this case, the error "WARNING: Wave WPTO hindcast functions not imported from MHKiT-Python." will have printed to the screen. This is often caused
by the h5py package being installed via Anaconda instead of pip. Note: this particular issue only relates to MHKiT-Python users.  

If when trying to run the WPTO hindcast functions you recieve "AttributeError: module 'mhkit.wave.io' has no attribute 'hindcast'"

1. Make sure your MHKiT package is up to date (see above). 

2. Uninstall h5py from Anaconda
    ```conda remove h5py```

3. Re-install MHKiT: 
    ```pip install mhkit --upgrade``` or ```pip install -e . ``` from your local clone 