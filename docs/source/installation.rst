.. _installation:

Installation
=============

The following section includes installation instructions for `MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ and `MHKiT-MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_.


MHKiT-Python
-------------

`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ requires `Python (3.7+) <https://www.python.org/>`_  and has several Python package dependencies.
It is recommended to use the `Anaconda Python Distribution <https://www.anaconda.com/distribution/>`_ to install Python since it includes most of MHKiT-Python's package dependencies.
Refer to the `Python website <https://www.python.org/>`_ for information on using Python.

.. Note::
    The installation of Anaconda3 no longer adds python to the Windows Environment Variables by default. During installation, there is a checkbox in the advanced options of the installation to add it to the system path. The installation wizard advises against doing so in case a user has multiple python installations. Either check this box or setup your environmental variables so that python is accessible through your system path.

    Click `here <https://www.datacamp.com/community/tutorials/installing-anaconda-windows>`_ for more information.

.. Note::
	Mac computers come with Python 2.7 pre-installed. MHKiT does not 
	work with Python 2.7.  A second version of Python (3.7+) will need to 
	be installed on your machine. DO NOT DELETE Python 2.7. Use the above 
	steps to make sure MATLAB is running the proper version of Python.

Requirements
^^^^^^^^^^^^^^^
`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ requires `Python (3.7+) <https://www.python.org/>`_  and has the following Python packages dependencies:

* `Pandas <http://pandas.pydata.org>`_: used for data storage and analysis
* `NumPy <http://www.numpy.org>`_: used for data storage and analysis
* `SciPy <https://docs.scipy.org>`_: used for numerical methods, statistics, and signal processing
* `Matplotlib <http://matplotlib.org>`_: used to produce figures
* `Requests <https://requests.readthedocs.io/>`_: used to get data from websites
* `Pecos v0.1.9 <https://pecos.readthedocs.io/>`_: used for quality control analysis

It is recommended to use the `Anaconda Python Distribution <https://www.anaconda.com/distribution/>`_ because it includes all of the MHKiT-Python package dependencies except Pecos.


Install MHKiT-Python
^^^^^^^^^^^^^^^^^^^^^

Option 1: PIP Install from Python
""""""""""""""""""""""""""""""""""""

This option is recommended for MHKiT-Python users.
To install MHKiT-Python using `pip <https://pip.pypa.io/en/stable/>`_::

	pip install mhkit

Using this option to install MHKiT-Python will automatically install Pecos.


Option 2: Clone Repository from GitHub
""""""""""""""""""""""""""""""""""""""""""

This option is recommended for MHKiT-Python developers.
To install MHKiT-Python using `git <https://git-scm.com/>`_::

	git clone https://github.com/MHKiT-Software/MHKiT-Python
	cd mhkit-python
	pip install -e .

Using this option to install MHKiT-Python will require following the `Pecos installation instructions <https://pecos.readthedocs.io/en/latest/installation.html>`_ to install the Pecos package dependency.

.. Note::
	If you plan to contribute to the MHKiT-Python open-source software, please `fork <https://help.github.com/articles/fork-a-repo/>`_ the MHKiT-Python repository into your GitHub user account.
	To include your additions to the MHKiT-Python code, please submit a `pull request <https://github.com/MHKiT-Software/MHKiT-Python/pulls>`_ in the MHKiT-Python master branch.
	Once reviewed by the MHKiT-Python development team, pull requests will be merged into MHKiT-Python and included in future releases of MHKiT-Python.


Test MHKiT-Python installation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

To test that MHKiT-Python is installed correctly, open a Python console and run::

    import mhkit

If MHKiT-Python is installed properly, Python proceeds to the next line and no other output is printed to the screen.
If MHKiT-Python is not installed properly, the user will see the following error::

    ImportError: No module named mhkit

To test a simple function using MHKiT-Python, the user can compute the equivalent diameter (ED) and projected capture area (AP) of a circular turbine by running the following code::

    [ED, AP] = mhkit.river.performance.circular(30)
    print(ED)
    print(AP)

The results should be::

	ED = 30
	AP = 706.858


MHKiT-MATLAB
-------------

`MHKiT-MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_ requires 
MATLAB 2019b or later and relies on three components which need to be 
installed separately.

.. Note::
	If you are using Python 3.8, MATLAB 2020b or later is required. 

Install MHKiT-MATLAB
^^^^^^^^^^^^^^^^^^^^^
First, MHKiT-MATLAB consists of MATLAB code which runs the MHKiT-Python functions. Therefore, the installation of both packages is necessary. See the MHKit-Python installation instructions above.
Second, MHKiT-MATLAB utilizes a helper package called mhkit_python_utils. This we be installed using the system terminal.
Third, we will check the MATLAB environment to ensure the correct python version is being called. 
Lastly, the mhkit.mltbx, which contains the MHKiT-Matlab functions, needs to be downloaded and installed. Instructions for installation and setting up the Matlab to Python environment are below.

Step 1: Download MHKiT-MATLAB 
""""""""""""""""""""""""""""""""""""
Clone or download the MHKiT-MATLAB repo from 
 https://github.com/MHKiT-Software/MHKiT-MATLAB.

.. Note::
	If you would like to contribute to MHKiT-MATLAB, please fork the MHKiT-MATLAB repository from https://github.com/MHKiT-Software/MHKiT-MATLAB into your GitHub user account, and submit a pull request for review.


Step 2: Install MHKiT-MATLAB in the Python Environment
"""""""""""""""""""""""""""""""""""""""""""""""""""""""
To install MHKiT MATLAB in your Python environment, navigate to 
your cloned or downloaded MHKiT-MATLAB folder, and in a system 
terminal run::

	pip install -e .
	
	
Step 3: Check the MATLAB Environment for Python
""""""""""""""""""""""""""""""""""""""""""""""""""
In this section we will check that MATLAB is using the correct python 
version. To check the python version open MATLAB and in the terminal type::

    pyversion

You should see something similar to the following::

	version: '3.7'
	executable: '/Library/Frameworks/Python.framework/Versions/3.7/bin/python3'
	library: '/Library/Frameworks/Python.framework/Versions/3.7/lib/libpython3.7m.dylib'
	home: '/Library/Frameworks/Python.framework/Versions/3.7'
	isloaded: 1

If the resulting Python version is 3.7+, skip to the Install the 
MHKiT-MATLAB Toolbox section.

If the resulting Python version is not 3.7+ in a system terminal 
window and type::

    python -c "import sys; print(sys.executable)"

If the resulting path to the python executable (path_to_exe) indicates 
Python 3.7+, copy the path and in the MATLAB terminal run::

    pyversion('<path_to_exe>')


Step 4: Install the MHKiT-MATLAB Toolbox 
""""""""""""""""""""""""""""""""""""""""""""
In MATLAB, navigate to the folder where you downloaded or cloned the 
repo which contains `mhkit.mltbx`, double-click `mhkit.mltbx`, and follow 
the instructions to install the toolbox.


Test MHKiT-MATLAB Installation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
To test that your install of MHKiT worked correctly, run the following 
in your MATLAB terminal::

	[x,y]=circular(30)

The results should be::

	x = 30
	y = 706.858





