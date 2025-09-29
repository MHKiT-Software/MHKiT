.. _python_installation:

MHKiT-Python Installation
=========================

The following sections includes installation instructions for `MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_.

Requirements
^^^^^^^^^^^^^^^

`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ requires `Python (3.8-3.11) <https://www.python.org/>`_.
It is recommended to use the `Anaconda Python Distribution <https://www.anaconda.com/distribution/>`_ (a fully featured Python installer with a GUI) 
or `Miniconda <https://docs.anaconda.com/miniconda/#quick-command-line-install>`_ (a lightweight installer with the ``conda`` command line utility).  
Both will include most of MHKiT-Python's package dependencies:

* `Xarray <https://docs.xarray.dev/en/stable/>`_: used for data storage and analysis
* `Pandas <http://pandas.pydata.org>`_: used for data storage and analysis
* `NumPy <http://www.numpy.org>`_: used for data storage and analysis
* `SciPy <https://docs.scipy.org>`_: used for numerical methods, statistics, and signal processing
* `Matplotlib <http://matplotlib.org>`_: used to produce figures
* `Requests <https://requests.readthedocs.io/>`_: used to get data from websites
* `Pecos <https://pecos.readthedocs.io/>`_: used for quality control analysis


Install MHKiT-Python
^^^^^^^^^^^^^^^^^^^^^

Option 1: Install from Python
""""""""""""""""""""""""""""""""""""

This option is recommended as a fast installation for MHKiT-Python users.
To install MHKiT-Python using ``conda``, in an Anaconda Prompt::

	conda install -c conda-forge mhkit

Option 2: Clone Repository from GitHub
""""""""""""""""""""""""""""""""""""""""""

This option is recommended for MHKiT-Python users who want access to example notebooks and developers.
Download and install your preferred version of `git <https://git-scm.com/>`_.
To clone MHKiT-Python::

	git clone https://github.com/MHKiT-Software/MHKiT-Python
	cd MHKiT-Python

To install a local, editable version of MHKiT-Python using `pip <https://pip.pypa.io/en/stable/>`_::

	pip install -e .["all"]

An `environment YAML file <https://github.com/MHKiT-Software/MHKiT-Python/blob/main/environment.yml>`_ is also provided that can create the base environment required by MHKiT. 
MHKiT can then be installed into that environment using any of the provided methods.

Option 3: Module-specific Install from Python
""""""""""""""""""""""""""""""""""""""""""""""
A slim version of MHKiT-Python can be installed to reduce the number of dependencies and potential conflicts with other software. 
This installation utilizes pip's optional dependencies installation. 
To install a single MHKiT module, e.g. the wave module, and its dependencies, use::

	pip install mhkit["wave"]

Note that ``pip install mhkit`` only installs the base MHKiT dependencies and not the entire software.
To install all MHKiT dependencies use::

	pip install mhkit["all"]


.. Note::
	If you plan to contribute to the MHKiT-Python open-source software, please `fork <https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo>`_ the MHKiT-Python repository into your GitHub user account.
	Install MHKiT using Option 2 above.
	Make changes on a feature branch of your personal fork.
	To include your additions to the MHKiT-Python code, please submit a `pull request <https://github.com/MHKiT-Software/MHKiT-Python/pulls>`_ to the MHKiT-Python develop branch.
	Once reviewed by the MHKiT-Python development team, pull requests will be merged into MHKiT-Python and included in future releases.


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
	AP = 706.8583470577034

