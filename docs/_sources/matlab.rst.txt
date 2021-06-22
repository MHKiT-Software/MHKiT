.. _matlab:

MHKiT-MATLAB
====================

Installation
--------------------

Refer to the :ref:`Installation:MHKiT-MATLAB` installation section for information on how to install MHKiT-MATLAB.

.. _apidoc_matlab:

API Documentation
--------------------

.. toctree::
   
   mhkit-matlab/api.qc
   mhkit-matlab/api.wave
   mhkit-matlab/api.river
   mhkit-matlab/api.tidal
   mhkit-matlab/api.power
   mhkit-matlab/api.loads
   mhkit-matlab/api.utils


Examples
--------------

MATLAB Live examples of MHKiT-MATLAB are included below:

- `Wave Example <mhkit-matlab/wave_example.html>`_
- `River Example <mhkit-matlab/river_example.html>`_
- `QC Example <mhkit-matlab/qc_example.html>`_
- `Tidal Example <mhkit-matlab/tidal_example.html>`_
- `Power Example <mhkit-matlab/power_example.html>`_
- `Loads Example <mhkit-matlab/loads_example.html>`_
- `Environmental Contours Example <mhkit-matlab/environmental_contours_example.html>`_
- `WEC-Sim Example <mhkit-matlab/wecsim_example.html>`_
- `SWAN Example <mhkit-matlab/SWAN_example.html>`_

.. MATLAB live examples remove the index, and must be manually saved as html


Online Forum
--------------
Please post questions about MHKiT-MATLAB on the `Issues Page <https://github.com/MHKiT-Software/MHKiT-MATLAB/issues>`_. This forum is managed by the MHKiT-MATLAB code development team and users. 
The issues page is used to interact with the MHKiT-MATLAB community, ask questions, and report bugs.

Software Tests
--------------------------

MHKiT-MATLAB includes continuous integration software tests. 
The tests are run each time changes are made to the repository and are designed to ensure that the code is performing as expected. 
New tests are developed each time new functions are added or modified.

Tests can also be run locally using the Matlab API.  Developers should run software tests before 
submitting a pull request by running runTests.m in the mhkit/tests/ folder. A summary pdf will be created after running the tests 
summarizing the test results. 