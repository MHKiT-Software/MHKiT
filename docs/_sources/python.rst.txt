.. _python:

MHKiT-Python
====================

Installation
--------------------

Refer to the :ref:`Installation:MHKiT-Python` installation section for information on how to install MHKiT-Python.

.. _apidoc_python:

API Documentation
--------------------

.. toctree::

   mhkit-python/api.qc
   mhkit-python/api.wave
   mhkit-python/api.river
   mhkit-python/api.tidal
   mhkit-python/api.power
   mhkit-python/api.loads
   mhkit-python/api.dolfyn
   mhkit-python/api.mooring
   mhkit-python/api.utils

Examples
--------------
Jupyter notebook examples of MHKiT-Python are included below:

.. toctree::
   :maxdepth: 1

   qc_example.ipynb
   wave_example.ipynb
   river_example.ipynb
   tidal_example.ipynb
   power_example.ipynb
   loads_example.ipynb
   environmental_contours_example.ipynb
   wecsim_example.ipynb
   SWAN_example.ipynb
   WPTO_hindcast_example.ipynb
   cdip_example.ipynb
   PacWave_resource_characterization_example.ipynb
   directional_waves.ipynb
   metocean_example.ipynb
   Delft3D_example.ipynb
   tidal_performance_example.ipynb
   adcp_example.ipynb
   ADCP_Delft3D_TRTS_example.ipynb
   adv_example.ipynb
   extreme_response_MLER_example.ipynb
   extreme_response_contour_example.ipynb
   extreme_response_full_sea_state_example.ipynb
   short_term_extremes_example.ipynb
   mooring_example.ipynb

   

Online Forum
--------------

Please post questions, feature requests, and bug reports about MHKiT-Python to the `Issues Page <https://github.com/MHKiT-Software/MHKiT-Python/issues>`_. 
This forum is managed by the MHKiT-Python code development team and users. 

Software Tests
--------------------------

MHKiT-Python includes continuous integration software tests that are run using `Travis CI <https://travis-ci.org/MHKiT-Software/mhkit-python>`_. 
The tests are run each time changes are made to the repository and are designed to ensure that the code is performing as expected. 
New tests are developed each time new functions are added or modified.
Testing status (passing/failed) and code coverage statistics are posted on the `README page <https://github.com/MHKiT-Software/MHKiT-Python>`_.

Tests can also be run locally using the Python package nose.  Developers should run software tests before 
submitting a pull request, using the following command::

   nosetests -v --with-coverage --cover-package=mhkit mhkit


