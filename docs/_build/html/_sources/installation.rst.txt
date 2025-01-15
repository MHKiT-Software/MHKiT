.. _python_installation:

MHKiT-Python Installation
=========================

The following sections includes installation instructions for `MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_.

`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ requires `Python (3.8-3.11) <https://www.python.org/>`_  and has several Python package dependencies.
It is recommended to use the `Anaconda Python Distribution <https://www.anaconda.com/distribution/>`_ to install Python since it includes most of MHKiT-Python's package dependencies.


Requirements
^^^^^^^^^^^^^^^
`MHKiT-Python <https://github.com/MHKiT-Software/MHKiT-Python>`_ requires `Python (3.8-3.11) <https://www.python.org/>`_  and has the following Python packages dependencies:

* `Xarray <https://docs.xarray.dev/en/stable/>`_: used for data storage and analysis
* `Pandas <http://pandas.pydata.org>`_: used for data storage and analysis
* `NumPy <http://www.numpy.org>`_: used for data storage and analysis
* `SciPy <https://docs.scipy.org>`_: used for numerical methods, statistics, and signal processing
* `Matplotlib <http://matplotlib.org>`_: used to produce figures
* `Requests <https://requests.readthedocs.io/>`_: used to get data from websites
* `Pecos v0.1.9 <https://pecos.readthedocs.io/>`_: used for quality control analysis


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
	If you plan to contribute to the MHKiT-Python open-source software, please `fork <https://docs.github.com/en/pull-requests/collaborating-with-pull-requests/working-with-forks/fork-a-repo>`_ the MHKiT-Python repository into your GitHub user account.
	Install MHKiT using Option 2 above.
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

