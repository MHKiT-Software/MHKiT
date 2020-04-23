
# How to Update the [MHKiT Website](https://MHKiT-Software.github.io/MHKiT/)

## Requirements
  - ``https://mhkit-software.github.io/MHKiT/installation.html`` including the MHKiT-Python and Requirements headers.


## Download/Install Required Packages
### Step 1. Download/Install [Sphinx](http://www.sphinx-doc.org/en/stable/index.html) package and extensions
  - Install Sphinx from cmd ``pip install -U Sphinx`` ([more info here](http://www.sphinx-doc.org/en/master/usage/installation.html))

  - Install BibTex, MATLAB theme, rtd theme, NB Sphinx, and NB Sphinx Link by running the following code
   ``pip install -U sphinxcontrib-bibtex sphinxcontrib-matlabdomain sphinx_rtd_theme nbsphinx nbsphinx_link``


  - **NOTE:** You may need to add PROXY settings ([see info here](https://cinhtau.net/2018/04/16/python-proxy-windows/))
### Step 2. Git Documents and submodules
  - In order to update the documentation, fork the [MHKiT](https://github.com/MHKiT-Software/MHKiT) your own repository
  - Update the MHKiT-Python and MHKiT-MATLAB submodules using ``git submodule init`` and ``git submodule update --remote``, refer to https://git-scm.com/book/en/v2/Git-Tools-Submodules for more information

## Update the [MHKiT Website](https://MHKiT-Software.github.io/MHKiT/)
The MHKiT documentation located on the [MHKiT Documentation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/), referred to as ``$docs``. The documentation is developed as restructured text files that are compiled by [Sphinx](http://www.sphinx-doc.org/en/master/) into html files. To edit the documentation, first verify that the most recent versions of ``MHKiT-Python`` and ``MHKiT-MATLAB`` are in your local ``$MHKiT-master/``. Then modify the source files located in the ``$docs/source`` directory using the syntax described on the [Sphinx Website](http://www.sphinx-doc.org/en/master/). Once you are done editing, cd to your local ``$docs`` directory from cmd, clean the previous compile with ``make clean``, and compile the updated the documentation with``make html``. This compiles an html version of the website in ``$docs/``. After compiling the updated website, you can view the local copy of the website by opening the ``$docs/index.html`` file from your local directory, and viewing it in a web browser (before pushing it online).

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
  - Made sure header underline is for full length of header text
  - Use this style guide: https://documentation-style-guide-sphinx.readthedocs.io/en/latest/style-guide.html

### Terminology Guidelines
  - DataFrame (not dataframe)
  - MATLAB (not Matlab)
  - Python (no python)
  - pandas (not Pandas)
  - MHKiT (not mhkit)
  - open-source (not open source)
  - time-series (not timeseries or time series)
  - time-domain (not time domain)
  - frequency-domain (not frequency domain)
  - MHKiT-Python (or link to MHKiT-Python when referring to the repo)
  - MHKiT-MATLAB (MHKiT-MATLAB when referring to the repo)
  - MHKiT (Marine and Hydrokinetic Toolkit)

### Unresolved Doc Issues
  - 134 warnings
  - MHKiT-MATLAB
    - API doc amd toctree
    - Examples toctree
  - MHKiT-Python
    - mhkit.tidal.io.request_noaa_data unexpected indentation
    - mhkit.river.io.request_usgs_data unexpected indentation

## Push updates to the [MHKiT Website](https://MHKiT-Software.github.io/MHKiT/)
Using Sphinx, GitHub renders the documentation on the [MHKiT Documentation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/) as the [MHKiT Website](https://mhkit-code-hub.github.io/MHKiT/). The user then pushes changes in the html documentation directly to the [MHKiT Documetnation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/), by doing the following:

  ```Shell
  # Move to the local $docs directory in cmd
  cd $docs

  # Clean and build the html documentation in cmd
  make clean
  make html

  # Use Git-shell to check status of the MHKiT documentation repository, then commit and push changes.
  git status
  git add --all
  git commit -m 'update to MHKiT documentation'
  git push
  ```





