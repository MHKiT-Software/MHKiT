.. _troubleshooting:

Troubleshooting
====================
This section provides solutions to common issues wherever possible.  
There are some known issues with various configurations of Python packages, Matlab versions, and operating systems. 


For all issues, please ensure MHKiT and its dependencies are up to date. 
To ensure this:

For Python: 
    ```pip install mhkit --upgrade``` or ```pip install -e . ``` from your local clone

For Matlab: Follow the MHKiT-Matlab `installation instructions <https://mhkit-software.github.io/MHKiT/installation.html#id7>`_ to download the latest version. 

WPTO Hindcast Issues
---------------------------
In some Python package configurations, the WPTO hindcast functions will 
not be installed with MHKiT due to an issue with the h5py package. 
In this case, the error "WARNING: Wave WPTO hindcast functions not imported  from MHKiT-Python." will print to the screen when trying to run any MHKiT 
function. This is often caused by the h5py package being installed via 
Anaconda instead of pip. Note: this particular issue only relates to 
MHKiT-Python users.  

If you recieve "AttributeError: module 'mhkit.wave.io' has no attribute 'hindcast'" when trying to run the WPTO hindcast functions:

1. Make sure your MHKiT package is up to date (see above). 

2. Uninstall h5py from Anaconda
    ```conda remove h5py```

3. Re-install MHKiT: 
    ```pip install mhkit --upgrade``` or ```pip install -e . ``` from your local clone 