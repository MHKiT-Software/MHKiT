.. _installation:

Installation
=============

The following documentation includes installation instructions for MHKiT-Python and MHKiT-Matlab.

MHKiT-Python
-------------

MHKiT-Python requires Python (tested on 3.6 and 3.7) along with several Python 
package dependencies.  Information on installing and using Python can be found at 
https://www.python.org/.  Python distributions, such as Anaconda,
are recommended to manage the Python interface.  
Anaconda Python distributions include the Python packages needed to run MHKiT-Python.


.. Note:: 
   Add user type guidance, e.g. user, developer, etc

MHKiT-Python can be installed using pip, git, or a downloaded zip file.  

**pip:** To install MHKiT-Python using pip::

	pip install mhkit
	
**git**: To install MHKiT-Python using git::

	git clone https://github.com/mhkit-code-hub/mhkit-python
	cd mhkit-python
	python setup.py install

**zip file**: To install MHKiT-Python using a downloaded zip file, go to https://code.primre.org/mhkit/mhkit-python, 
select the "Download" button and then select "Download zip".
This downloads a zip file called mhkit-python-master.zip.
The software can then be installed by unzipping the file and running setup.py::

	unzip mhkit-python-master.zip
	cd mhkit-python-master
	python setup.py install	
	
Requirements
^^^^^^^^^^^^^^^

Required Python package dependencies include:

* **Pandas**: used for data storage and analysis, http://pandas.pydata.org
* **Numpy**: used for data storage and analysis, http://www.numpy.org
* **Scipy**: used for numerical methods, statistics, and signal processing, https://docs.scipy.org
* **Matplotlib**: used to produce figures, http://matplotlib.org
* **Requests**: used to get data from websites, https://requests.readthedocs.io/
* **Pecos**: used for quality control analysis, https://pecos.readthedocs.io/

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


MHKiT-Matlab
-------------
MHKit-Matlab relies on three components which need to be installed seperately. 
First, MHKit-Matlab consists of Matlab code which runs the MHKit-Python functions. Therefore, installation of both packages is necessary. See the 
MHKit-Python installation instructions above. 

Second, MHKiT-Matlab utilizes a helper package called mhkit_python_utils. Installation instructions are below. 

Lastly, the mhkit.mltbx, which contains the MHKiT-Matlab functions, needs to be downloaded and installed. Instructions for installation and 
setting up the Matlab/Python environment are below.  

mhkit_python_utils package
^^^^^^^^^^^^^^^^^^^^^^^^^^
mhkit_python_utils is a helper package for running MHKiT- Matlab. From https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB, download setup.py and mhkit_python_utils. 
Run setup.py on your machine by running::

	python3 setup.py install


MHKit Matlab Installation
^^^^^^^^^^^^^^^^^^^^^^^^^^^
Download mhkit.mltbx from https://github.com/MHKiT-Code-Hub/MHKiT-MATLAB. 
In Matlab, navigate to the folder where you downloaded mhkit.mltbx to, double click on it, and the toolbox will install automatically. 

Setup Matlab Environment
^^^^^^^^^^^^^^^^^^^^^^^^^^

Open Matlab and in the terminal type::

    pyversion

You should see something similar to the following: 

	version: '3.7'

	executable: '/Library/Frameworks/Python.framework/Versions/3.7/bin/python3'

	library: '/Library/Frameworks/Python.framework/Versions/3.7/lib/libpython3.7m.dylib'
	
	home: '/Library/Frameworks/Python.framework/Versions/3.7'

	isloaded: 1

If the resulting Python version is 3.6 or 3.7 skip to the Test the Installation section. 
If the resulting Python version is not 3.6, or 3.7 open a Window or Mac terminal window and type::

    python3 -c "import sys; print(sys.executable)"

If the resulting path_to_exe indicates Python 3.6, or 3.7, copy the path and in the Matlab terminal run::

    pyversion('<path_to_exe>')

Note: Mac computers come with Python 2.7 pre-installed. MHKit does not work with Python 2.7.  A second version of 
Python (3.6, or 3.7) will need to be installed on your machine. DO NOT DELETE Python 2.7. Use the above steps to assure 
Matlab is running the proper version of Python. 

Test the Installation
^^^^^^^^^^^^^^^^^^^^^^
To test that your install of MHKit worked correctly, run the following in your Matlab terminal:

	[x,y]=circular(30)

The results should be: 

	x = 30

	y = 1.1310e+04





