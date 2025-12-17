.. _matlab_installation:

MHKiT-MATLAB Installation
=========================

The following section includes instructions for installing `MHKiT-MATLAB <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_ .

* New users should follow the :ref:`Installation Steps <installation-section>`.
* Experienced users can follow the :ref:`Advanced Installation Steps <matlab-advanced-installation-section>`.


Installation Overview
---------------------

MHKiT-MATLAB utilizes MHKiT-Python to perform some computations and requires installation of Python and MHKiT-Python.

Utilizing MHKiT-Python has the following advantages:

* One standardized codebase that performs computations

  * Bugs fixed in MHKiT-Python are included in MHKiT-MATLAB

  * Features added to MHKiT-Python are not reinvented in MHKiT-MATLAB

* Python can leverage scientific computing tools that are not available in MATLAB

The major disadvantage of using Python is difficulty of installation for the MATLAB user. These installation steps provide the simplest path to getting the MATLAB user up and running with MHKiT-MATLAB. Please submit any issues or improvement suggestions to `the MHKiT-MATLAB issues page <https://github.com/MHKiT-Software/MHKiT-MATLAB/issues>`_.

The installation process requires performing the following actions in order:

1. `Install Anaconda <#step-1-install-anaconda>`_
2. `Configure an Anaconda Python Environment <#step-2-configure-an-anaconda-python-environment>`_
3. `Install MHKiT-Python <#step-3-install-mhkit-python>`_
4. `Download MHKiT-MATLAB from source <#step-4-download-mhkit-matlab-source-code>`_
5. `Install MHKiT-MATLAB Python utilities <#step-5-install-mhkit-matlab-python-utilities>`_
6. `Configure MATLAB python environment <#step-6-configure-matlab-python-environment>`_
7. `Install the MHKiT-MATLAB Add-On <#step-7-install-mhkit-matlab-add-on>`_
8. `Verify MHKiT-MATLAB functionality <#step-8-verify-mhkit-matlab-installation>`_


Required Software
-----------------

* `Anaconda <https://www.anaconda.com/download>`_: Python version and environment manager
* `MATLAB <https://www.mathworks.com/products/matlab.html>`_: Version 2021b and above. The `MHKiT-MATLAB Compatibility Matrix has complete details <https://github.com/MHKiT-Software/MHKiT-MATLAB?tab=readme-ov-file#software-requirements>`_.

.. note::
   We strongly recommend using Anaconda to manage Python and its dependencies. For MHKiT-MATLAB other variations of Python installations may work, but Anaconda provides a standardized Python installation and usage process that works consistently with MATLAB.

.. _installation-section:

Installation Steps
------------------

Step 1. Install Anaconda
"""""""""""""""""""""""""

Download and install `Anaconda <https://www.anaconda.com/download>`_.

Step 2. Configure an Anaconda Python Environment
""""""""""""""""""""""""""""""""""""""""""""""""

In this step we are going to create a Python environment within Anaconda which will contain an installation of Python, MHKiT-Python, and the required python packages.

2.1 Launch the "Anaconda Navigator" application

2.2 Navigate to the "Environments" section

.. image:: ./figures/install_anaconda_select_environment_section.png
  :width: 500
  :alt: Navigating to the Anaconda Navigator "Environments" section

2.3 Create a new environment by clicking on the "Create" button

.. image:: ./figures/install_anaconda_create_environment.png
  :width: 500
  :alt: Creating a new Anaconda environment

2.4 Set the environment name and python version to the recommended settings

    * Name: ``mhkit``

      * Note: Environments can have any name, but we recommend naming them based on their intended use

    * Packages:

      * Version 3.10

      * Note: Check the `MHKiT-MATLAB MATLAB/Python compatibility matrix <https://github.com/MHKiT-Software/MHKiT-MATLAB?tab=readme-ov-file#software-requirements>`_ to verify that the Python version selected is compatible with your version of MATLAB.

.. image:: ./figures/install_anaconda_setup_environment.png
  :width: 500
  :alt: Setting the parameters a new Anaconda environment

2.5 Create the environment by clicking "Create"

   * Anaconda is downloading an entire python environment and all of its dependencies, which typically takes a few minutes

Step 3. Install MHKiT-Python
""""""""""""""""""""""""""""

3.1 Select the newly create environment by clicking on ``mhkit`` (the name of your environment)

3.2 Click the play button and select "Open Terminal"

.. image:: ./figures/install_anaconda_open_environment_terminal.png
  :width: 500
  :alt: Opening the terminal for the ``mhkit`` environment

3.3 Verify that you see ``(mhkit)`` at the beginning of your terminal prompt. This indicates that you are within the Anaconda ``mhkit`` environment. All actions performed within this environment are isolated from other Anaconda and system Python environments.

.. image:: ./figures/install_anaconda_terminal_with_environment_name.png
  :width: 500
  :alt: Detail of terminal with anaconda environment name

3.4 Install MHKiT-Python Anaconda dependencies. In the terminal input the following command::

    conda install hdf5 netcdf4~=1.6.0

And press enter to run this command.

.. image:: ./figures/install_anaconda_conda_dependencies.png
  :width: 500
  :alt: Installing MHKiT-Python conda dependencies


.. Note::
    If this command throws any errors, you must fix them before proceeding! Refer to the `troubleshooting section <#troubleshooting>`_ for more details on recommended troubleshooting steps.

3.5 Install MHKiT-Python. In the terminal input the following command::

    pip install mhkit==0.7.0

And press enter to run this command.

.. image:: ./figures/install_anaconda_terminal_pip_install_mhkit.png
  :width: 500
  :alt: Install MHKiT-Python with pip


.. Note::
    If this command throws any errors, you must fix them before proceeding! Refer to the `troubleshooting section <#troubleshooting>`_ for more details on recommended troubleshooting steps.

3.6 Update python module for MHKiT-Python compatibility. In the terminal input the following command::

    pip install numpy~=1.24.0 scipy~=1.10.0 netcdf4~=1.6.0

And press enter to run this command.

.. image:: ./figures/install_anaconda_terminal_pip_install_downgrade.png
  :width: 500
  :alt: Downgrade pip modules


.. Note::
    If this command throws any errors, you must fix them before proceeding! Refer to the `troubleshooting section <#troubleshooting>`_ for more details on recommended troubleshooting steps.


3.7 Verify your MHKiT-Python version. In the terminal input the following command::

    python -c "import mhkit; print(mhkit.__version__)"

And press enter to run this command.

The expected output is the specified ``mhkit`` version number

.. image:: ./figures/install_anaconda_terminal_version_output.png
  :width: 500
  :alt: Output of ``mhkit`` version number

3.8 Verify ``mhkit`` functionality. In the terminal input the following command::

     python -c "import mhkit; print(mhkit.river.performance.circular(30))"


The expected output is::

    (30, 706.8583470577034)

.. image:: ./figures/install-anaconda_terminal_mhkit_verify_output.png
  :width: 500
  :alt: Verification of mhkit circular function


Step 4. Download MHKiT-MATLAB Source Code
"""""""""""""""""""""""""""""""""""""""""

4.1 Navigate to the `MHKiT-MATLAB GitHub Repository <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_

4.2. Within the "Code" drop-down menu click on "Download ZIP" to download the repository

.. image:: ./figures/install_github_download_mhkit_matlab_zip.png
  :width: 500
  :alt: Download MHKiT-MATLAB zip file from GitHub

4.3. Unzip the downloaded folder in your preferred installation location.

Step 5. Install MHKiT-MATLAB Python utilities
"""""""""""""""""""""""""""""""""""""""""""""

5.1 Navigate to the MHKiT-MATLAB folder using the terminal

Within the Anaconda environments tab, click the play button and select "Open Terminal"

* Verify that you see ``(mhkit)`` at the beginning of your terminal prompt.

.. image:: ./figures/install_anaconda_open_environment_terminal.png
  :width: 500
  :alt: Opening the terminal for the ``mhkit`` environment

5.2 Use pip to install MHKiT-MATLAB Python utilities

* In the terminal type and press enter::

    pip install https://github.com/MHKiT-Software/MHKiT-MATLAB/tarball/master

.. image:: ./figures/install_terminal_pip_mhkit_python_utils.png
  :width: 500
  :alt: Installing mhkit_python_utilities

5.3 Verify your ``mhkit_python_utilities`` version. Expected version is ``0.2.0``

* In the terminal type and press enter::

    python -c "import mhkit_python_utils; print(mhkit_python_utils.__version__)"

.. image:: ./figures/install_terminal_mhkit_python_utils_version.png
  :width: 500
  :alt: Verifying mhkit_python_utilities


Step 6. Configure MATLAB Python Environment
"""""""""""""""""""""""""""""""""""""""""""

6.1 Compute the python executable location

* In the Anaconda ``mhkit`` environment terminal type and press enter::

    python -c "import sys; print(sys.executable)"

And copy the output location:


Typical location on Windows:

* ``C:\ProgramData\anaconda3\envs\mhkit\python.exe``

Typical location on MacOS:

* ``/opt/anaconda3/envs/mhkit/bin/python3``

6.2 Set the Python environment in MATLAB

In the MATLAB command window type the command below, replacing the ``<python executable location>`` with the executable location output from above::

    pyenv(Version="<python executable location>")


.. image:: ./figures/install_matlab_python_executable.png
  :width: 500
  :alt: Set MATLAB python executable

Step 7. Install MHKiT-MATLAB Add-On
"""""""""""""""""""""""""""""""""""

7.1 Navigate to the MHKiT-MATLAB directory

7.2. Install the MHKiT-MATLAB Add-On by double clicking on `mhkit.mltbx` toolbox

.. image:: ./figures/install_matlab_toolbox.png
  :width: 500
  :alt: Install MHKiT-MATLAB toolbox

7.3 Verify the mhkit Add-On installation

.. image:: ./figures/install_matlab_addons_list.png
  :width: 500
  :alt: MHKiT-MATLAB in MATLAB Add-On list

Step 8. Verify MHKiT-MATLAB Installation
""""""""""""""""""""""""""""""""""""""""

8.1 In the MATLAB command window type::

    [x, y] = circular(30)

Verify the output is::

    >> [x, y] = circular(30)

    x =

        30


    y =

      706.8583



.. image:: ./figures/install_matlab_verify_mhkit.png
  :width: 500
  :alt: Install MHKiT-MATLAB toolbox

Congratulations, you now have a working version of MHKiT-MATLAB!

.. _matlab-advanced-installation-section:

Advanced Installation
---------------------

1. Install `miniconda <https://docs.anaconda.com/free/miniconda/miniconda-install/>`_.

2. Create an environment for MHKiT-Python:

   Check the `MHKiT-MATLAB MATLAB/Python compatibility matrix <https://github.com/MHKiT-Software/MHKiT-MATLAB?tab=readme-ov-file#software-requirements>`_ and select the version of Python compatible with your version of MATLAB.

   ::

     conda create -n mhkit python=3.10

   ::

     conda activate mhkit

3. Install conda dependencies:

   ::

     conda install netcdf4 hdf5

4. Use ``pip`` to install MHKiT-Python (``mhkit``):

   ::

     pip install mhkit==0.7.0
     pip install numpy~=1.24.0 scipy~=1.10.0 netcdf4~=1.6.0

   ::

     python -c "import mhkit; print(mhkit.__version__)"

   The expected output is::

     v0.7.0


   Verify the output from the ``circular`` function::

     python -c "import mhkit; print(mhkit.river.performance.circular(30))"

   The expected output is::

     (30, 706.8583470577034)

5. Download/clone `MHKiT-MATLAB from the GitHub Repository <https://github.com/MHKiT-Software/MHKiT-MATLAB>`_:

   ::

     git clone https://github.com/MHKiT-Software/MHKiT-MATLAB.git

6. Install MHKiT-Python MATLAB Utilities:

   ::

     cd MHKiT-MATLAB

   ::

     pip install -e .

7. Get python executable:

   Copy output from::

     python -c "import sys; print(sys.executable)"

8. Set the python executable in MATLAB:

   In the MATLAB command window::

     pyenv(Version="<python executable path>")

9. Install the MHKiT-MATLAB "Add-On":

   In the MHKiT-MATLAB folder, double click on ``mhkit.mltbx``

   `Verify  Add-On installed nominally. <#step-7-install-mhkit-matlab-add-on>`_

10. Verify the MHKiT-MATLAB Add-On functionality:

    In the MATLAB command window execute::

      [x, y] = circular(30)

    Verify the output::

      x = 30
      y = 706.8583


Troubleshooting
---------------

Errors During Installation
^^^^^^^^^^^^^^^^^^^^^^^^^^

Install Supplemental Anaconda Dependencies
"""""""""""""""""""""""""""""""""""""""""""

- Within the ``mhkit`` conda environment execute the following command::

    conda install numpy cython pip pytest hdf5 libnetcdf cftime netcdf4

- Reinstall ``mhkit``::

    pip uninstall mhkit
    pip install mhkit==0.7.0

Verify MHKiT-Python is working properly
""""""""""""""""""""""""""""""""""""""""

- In the terminal, execute::

    python -c "import mhkit; print(mhkit.river.performance.circular(30))"

- The expected output is::

        (30, 706.8583470577034)

Errors Upon Running MHKiT-MATLAB
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Verify MATLAB python environment is using ``mhkit`` conda python executable
""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

- In the MATLAB command window execute::

    pyenv

- The expected output should be similar to::

    ans =

    PythonEnvironment with properties:

          Version: "3.10"
       Executable: "/opt/anaconda3/envs/mhkit/bin/python3"
          Library: "/opt/anaconda3/envs/mhkit/lib/libpython3.10.dylib"
             Home: "/opt/anaconda3/envs/mhkit"
           Status: Loaded
    ExecutionMode: InProcess
        ProcessID: "29611"
      ProcessName: "MATLAB"

- If ``mhkit`` is not within "Executable", string your MATLAB installation is not pointing to the MHKiT installation of Python. `Repeat step 6 (configure MATLAB python environment) <#step-6-configure-matlab-python-environment>`_ to properly set your python executable location in MATLAB to point to the ``mhkit`` python executable.

Add Anaconda binary path to the MATLAB path
"""""""""""""""""""""""""""""""""""""""""""

1. Close MATLAB.

2. Locate the Anaconda environment bin directory:

   - Inside your MHKiT-Python Anaconda environment, in the terminal, determine the location of the Python binary directory by running::

       python -c "import sys; import os; print(os.path.dirname(sys.executable))"

3. Restart MATLAB and add the output directory from the previous step to the first position in the MATLAB path::

      setenv('path', ['<path to Anaconda dir>', getenv('path')])

4. Reset the MATLAB Python Environment:

   - Inside your MHKiT-Python Anaconda environment, in the terminal, determine the location of the Python executable by running::

      python -c "import sys; print(sys.executable)"

   In the MATLAB Command Window, execute::

     pyenv(Version="<path to conda python executable>", ExecutionMode="OutOfProcess")

5. Run the circular example again by `repeating step 8 <#step-8-verify-mhkit-matlab-installation>`_.

Other Errors
^^^^^^^^^^^^

- Check the `MHKiT-MATLAB GitHub Issues <https://github.com/MHKiT-Software/MHKiT-MATLAB/issues>`_
- Check the `MHKiT-Python GitHub Issues <https://github.com/MHKiT-Software/MHKiT-Python/issues>`_
- Submit an issue in the `MHKiT-MATLAB GitHub repository Issue Tracker <https://github.com/MHKiT-Software/MHKiT-MATLAB/issues>`_
