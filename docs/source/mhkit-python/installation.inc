.. _installation:

Installation
--------------

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

	git clone https://code.primre.org/mhkit/mhkit-python 
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
diameter and projected capture area of a circular turbine by running the following
code::

    [ED, AP] = mhkit.river.circular(10)
