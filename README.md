
# How to Update the [MHKiT Website](https://mhkit-code-hub.github.io/MHKiT/)

## Download/Install Required Packages
### Step 1. Download and Install Python 
  - Windows: Download and install [Python27](https://www.python.org/downloads/) or [Anaconda](https://www.anaconda.com/distribution/)
  - **NOTE:** MAC/LINUX skip to Step 3, Python is already installed and added to path
 
### Step 2. Add Python to System Path
  - Windows: Modify the PATH in environmental variables to include: C:\PYTHON27;C:\PYTHON27\Scripts 
  ([more info here](http://stackoverflow.com/questions/3701646/how-to-add-to-the-pythonpath-in-windows-7))
  - **NOTE:** Anaconda skip to Step 3,  Python is already added to path 
  - **NOTE:** MAC/LINUX skip to Step 3, Python is already added to path
  
### Step 3. Download/Install [Sphinx](http://www.sphinx-doc.org/en/stable/index.html) package
  - Install Sphinx from cmd ``pip install -U Sphinx`` 
    ([more info here](http://www.sphinx-doc.org/en/master/usage/installation.html))
  - **NOTE:** You may need to add PROXY settings ([see info here](https://cinhtau.net/2018/04/16/python-proxy-windows/))

### Step 4. Download/Install Sphinx extensions
  - Install BibTex ``pip install -U sphinxcontrib-bibtex``
  - Install MATLAB theme ``pip install -U sphinxcontrib-matlabdomain``
  - Install rtd theme ``pip install -U sphinx_rtd_theme``
  - Install Goggle Analytics ``pip install -U sphinxcontrib-googleanalytics``
  ([more info on Google Analytics here](https://pypi.org/project/sphinxcontrib-googleanalytics/))
  - **NOTE:** You may have to manually move extensions to the ``/sphinx/`` or ``/sphinxcontrib/`` Python directories
  - **NOTE:** For Sphinx 1.8 you may need to modify googleanalytics.py according to ([this](https://jiangsheng.net/2019/01/05/fix-sphinxcontrib-googleanalytics-on-sphinx-1-8/))


## Update the [MHKiT Website]()
The MHKiT documentation located on the [MHKiT Documetnation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/), refered to as ``$docs``. The documentation is developed as restructured text files that are compiled by [Sphinx](http://www.sphinx-doc.org/en/master/) into html files. To edit the documentation, modify the source files located in the ``$docs/source`` directory using the syntax described on the [Sphinx Website](http://www.sphinx-doc.org/en/master/). Once you are done editing, cd to your local ``$docs`` directory from cmd, clean the previous compile with ``make clean``, and compile the updated the documentation with``make html``. This compiles an html version of the website in ``$docs/``. After compiling the updated website, you can view the local copy of the website by opening the ``$docs/index.html`` file from your local directory, and viewing it in a web browser (before pushing it online). 

### Best Practices
  - Run spell check (not built into most text editors)
  - Update the MHKiT-Python and MHKiT-MATLAB submodules ``git submodule init`` ``git submodule update --remote``, refer to https://git-scm.com/book/en/v2/Git-Tools-Submodules for more information
  - When compiling the website, ``make clean`` and then ``make html``

### Formatting Guidelines
  - `*.m` or `*.py` syntax to refer to file extension
  - use ``insert code`` to reference code
  - use API documentation from source code
  - Title `####` with overline
  - Heading 1 `======`
  - Heading 2 `------`
  - Heading 3 `^^^^^^`
  - Heading 4 `""""""`
  - Use this style guide: https://documentation-style-guide-sphinx.readthedocs.io/en/latest/style-guide.html
  - MHKiT-Python (or link to MHKiT-Python when refering to the repo)
  - MHKiT-MATLAB (MHKiT-MATLAB when refering to the repo)
  - MHKiT (Marine and Hydrokinetic Toolkit) 
  

### Terminology Guidelines
  - DataFrame (not dataframe)
  - MATLAB (not Matlab)
  - Python (no python)
  - MHKiT (not mhkit)
  - open-source (not open source)
  - time-series (not timeseries or time series)
  - time-domain (not time domain)
  - frequency-domain (not frequency domain)

## Push updates to the [MHKiT Website](https://mhkit-code-hub.github.io/MHKiT/) 
Using Sphinx, GitHub renders the documentation on the [MHKiT Documetnation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/) as the [MHKiT Website](https://mhkit-code-hub.github.io/MHKiT/). The user then pushes changes in the html documentation directly to the [MHKiT Documetnation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/), by doing the following:

  ```Shell
  # Move to the local $docs directory in cmd
  cd $docs

  # Clean and build the html documentation in cmd
  make clean
  make html

  # Use Git-shell to check status of the MHKiT documentation respository, then commit and push changes. 
  git status
  git add --all
  git commit -m 'update to MHKiT documentation'
  git push
  ```
  
  
  
