.. _installation_matlab:

Installation
--------------
Download mhkit.mltbx from https://github.com/MHKiT-Code-Hub/mhkit-matlab. 
In Matlab, navigate to the folder where you downloaded mhkit.mltbx to, double click on it, and the toolbox will install automatically. 

Setup Matlab Environment by opening MATLAB and typing the following line the terminal::

    pyversion

If the resulting Python version is not 3.6, or 3.7 open a Window or Mac terminal window and type::

    python3 -c "import sys; print(sys.executable)"

If the resulting path_to_exe indicates Python 3.6, or 3.7, copy the path and in the Matlab terminal run::

    pyversion('<path_to_exe>')

mhkit_python_utils is a helper package for running MHKiT- Matlab. From https://github.com/MHKiT-Code-Hub/mhkit-matlab, download setup.py and mhkit_python_utils. 
Run setup.py on your machine by running::

	python3 setup.py install
	
	
Requirements
^^^^^^^^^^^^^^^^^^^^^^^^^^
Required MHKiT-Matlab dependencies include:

* **Matlab 2013b or later**: required to run Python from Matlab. MHKit Matlab has been tested on versions 2019b and 2018b.
* **Python 3.6 or 3.7**: required to run MHKiT-Matlab


.. Note:: 
   Mac computers come with Python 2.7 pre-installed. MHKit does not work with Python 2.7.  A second version of Python (3.6, or 3.7) will need to be installed on your machine. DO NOT DELETE Python 2.7. Use the above steps to assure Matlab is running the proper version of Python. 

Test the Installation
^^^^^^^^^^^^^^^^^^^^^^
To test that your install of MHKit worked correctly, run the following in your Matlab terminal:

	[x,y]=circular(30)

The results should be: 

	x = 30

	y = 1.1310e+04