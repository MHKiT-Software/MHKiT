.. _installation:

Installation
=============

The following section includes installation instructions for `MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ and `MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_.


MHKiT-Python
-------------

`MHKiT-Python <https://github.com/MHKiT-Code-Hub/MHKiT-Python>`_ requires Python (3.6 or 3.7), and has several Python package dependencies.  Refer to the `Python website <https://www.python.org/>`_ for information on installing and using Python.  Python distributions, such as the `Anaconda Python Distribution <https://www.anaconda.com/distribution/>`_, are recommended to manage the Python interface.  


Requirements
^^^^^^^^^^^^^^^

Python requirements and Python package dependencies include:

* `Python <https://www.python.org/>`_:  3.6 or 3.7 
* `Pandas <http://pandas.pydata.org>`_: used for data storage and analysis
* `Numpy <http://www.numpy.org>`_: used for data storage and analysis
* `Scipy <https://docs.scipy.org>`_: used for numerical methods, statistics, and signal processing 
* `Matplotlib <http://matplotlib.org>`_: used to produce figures
* `Requests <https://requests.readthedocs.io/>`_: used to get data from websites
* `Pecos <https://pecos.readthedocs.io/>`_: used for quality control analysis 

.. Note:: 
    All of MHKiT-Python's package dependencies are included in `Anaconda Python Distribution <https://www.anaconda.com/distribution/>`_ except Pecos. Pecos can be installed by following `Pecos installation instructions <https://pecos.readthedocs.io/en/latest/installation.html>`_.  Pecos version 0.1.8 is required for MHKiT-Python.  Currently, Numpy version 1.18 is not working with MHKiT-Python's graphics, version 1.17 is recommended.


PIP Install from Python (Recommended for Users)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

To install MHKiT-Python using `pip <https://pip.pypa.io/en/stable/>`_::

	pip install mhkit
	

Clone Repository from GitHub (Recommended for Developers)
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

To install MHKiT-Python using `git <https://git-scm.com/>`_::

	git clone https://github.com/MHKiT-Code-Hub/MHKiT-Python
	cd mhkit-python
	python setup.py develop
	

.. Note:: 
    If you plan to contribute to the MHKiT-Python open-source software, please `fork the MHKiT-Python repository <https://help.github.com/articles/fork-a-repo/>`_ into your GitHub user account. Please submit a `pull request <https://github.com/MHKiT-Code-Hub/MHKiT-Python/pulls>`_ to include your code revisions in the MHKiT-Python master branch. After reviewed, the pull request will be merged into MHKiT-Python and included in future releases.

	

Test the installation
^^^^^^^^^^^^^^^^^^^^^^

To test that MHKiT-Python is installed correctly, open a Python console and run::

    import mhkit

If MHKiT-Python is installed properly, Python proceeds to the next line. 
No other output is printed to the screen.

If MHKiT-Python is not installed properly, the user will see the following ImportError::

    ImportError: No module named mhkit
    
To test a simple function in MHKiT-Python, the user can compute the equivalent 
diameter (ED) and projected capture area (AP) of a circular turbine by running the following
code::

    [ED, AP] = mhkit.river.device.circular(30)
    
The results should be ED = 30 and AP = 11309.7.


MHKiT-MATLAB
-------------
`MHKiT-MATLAB <https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB>`_ requires Matlab 2018 or later and relies on three components which need to be installed separately. 

First, MHKiT-MATLAB consists of Matlab code which runs the MHKiT-Python functions. Therefore, installation of both packages is necessary. See the 
MHKit-Python installation instructions above. 

Second, the mhkit.mltbx, which contains the MHKiT-Matlab functions, needs to be downloaded and installed. Instructions for installation and 
setting up the Matlab/Python environment are below. 

Lastly, MHKiT-MATLAB utilizes a helper package called mhkit_python_utils. Installation instructions are below.

MHKiT-MATLAB Installation
^^^^^^^^^^^^^^^^^^^^^^^^^^^
Clone or download the MHKiT-MATLAB repo from https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB. 
In MATLAB, navigate to the folder where you downloaded or cloned the repo which contains mhkit.mltbx, double click on mhkit.mltbx, and the toolbox will install automatically. 

If you would like to contribute to MHKiT-MATLAB, you can fork the MHKiT-MATLAB repository from https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB 
and submit a pull request for review. 

Setup MATLAB Environment
^^^^^^^^^^^^^^^^^^^^^^^^^^

Open MATLAB and in the terminal type::

    pyversion

You should see something similar to the following:: 

	version: '3.7'
	executable: '/Library/Frameworks/Python.framework/Versions/3.7/bin/python3'
	library: '/Library/Frameworks/Python.framework/Versions/3.7/lib/libpython3.7m.dylib'	
	home: '/Library/Frameworks/Python.framework/Versions/3.7'
	isloaded: 1

If the resulting Python version is 3.6 or 3.7 skip to the Test the Installation section. 
If the resulting Python version is not 3.6, or 3.7 open a Window or Mac terminal window and type::

    python3 -c "import sys; print(sys.executable)"

If the resulting path to the python executable (path_to_exe) indicates Python 3.6, or 3.7, copy the path and in the Matlab terminal run::

    pyversion('<path_to_exe>')

Note: Mac computers come with Python 2.7 pre-installed. MHKit does not work with Python 2.7.  A second version of 
Python (3.6, or 3.7) will need to be installed on your machine. DO NOT DELETE Python 2.7. Use the above steps to assure 
Matlab is running the proper version of Python. 

mhkit_python_utils package
^^^^^^^^^^^^^^^^^^^^^^^^^^
mhkit_python_utils is a helper package for running MHKiT-MATLAB. From within you cloned or downloaded MHKiT-Matlab folder  
run setup.py on your machine by running::

	python3 setup.py install




Test the Installation
^^^^^^^^^^^^^^^^^^^^^^
To test that your install of MHKiT worked correctly, run the following in your MATLAB terminal::

	[x,y]=circular(30)

The results should be:: 

	x = 30
	y = 1.1310e+04





