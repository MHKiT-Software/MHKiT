
# How to Update the [MHKiT Documentation](https://MHKiT-Software.github.io/MHKiT/)
The MHKiT documentation is developed as restructured text files that are compiled by [Sphinx](http://www.sphinx-doc.org/en/master/) into html files and then uploaded to the [MHKiT Documentation Repository](https://github.com/MHKiT-Software/MHKiT). Using Sphinx, GitHub renders the documentation on the [MHKiT Documentation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/) as the [MHKiT Website](https://mhkit-code-hub.github.io/MHKiT/). This guide will help the user to download the documentation, modify the documentation, build the documentation locally, and push changes back up to the repository.


## Requirements

To update the MHKiT documentation you will need Python 3.6+, Sphinx, and a clone of this repository. This documentation assumes the user has a working version of Python installed. We recommend Anaconda Python. Please follow the installation instructions of your Python distribution before starting Step 1.


### Step 1. Git Documents and submodules
  - To update the documentation, fork the [MHKiT](https://github.com/MHKiT-Software/MHKiT) your repository. We recommend using Git.
  - Using the command line navigate to the file system location you would like to keep the documentation repository clone the documentation.
  ```git clone https://github.com/MHKiT-Software/MHKiT.git```

  - Once cloned change directories into the folder created by the clone to update the  MHKiT-Python and MHKiT-MATLAB [submodules].
  ```bash
     cd MHKiT
     git submodule init
     submodule update --remote
  ```
  The ``MHKiT-Python`` and ``MHKiT-MATLAB`` folders should now contain source code.

### Step 2. Download/Install [Sphinx](http://www.sphinx-doc.org/en/stable/index.html) package and extensions
  - [Sphinx]((http://www.sphinx-doc.org/en/master/usage/installation.html)) is a python package used to create the MHKiT documentation.

  - To install Sphinx from the command line
  ```pip install -U Sphinx```
   **NOTE:** You may need to add PROXY settings ([see info here](https://cinhtau.net/2018/04/16/python-proxy-windows/))

  - Use the command line to install the needed Sphinx submodules (BibTex, MATLAB theme, rtd theme, NB Sphinx, and NB Sphinx Lin)
   ``pip install -U sphinxcontrib-bibtex sphinxcontrib-matlabdomain sphinx_rtd_theme nbsphinx nbsphinx_link``


You are now ready to begin modifying and building the MHKiT documentation.

## Step 3. Modify the Documentation

- The restructured text files used to build the documentation are located in the ``/MHKiT/docs/source`` directory (Check the [Sphinx Website](http://www.sphinx-doc.org/en/master/) for information about the folder structure).
- Use a text editor to modify any restructured text file (files with `.rst` extension, e.g. `index.rst`).
- Once you are done editing, move to Step 4

## Step 4. Build the [MHKiT Documentation](https://MHKiT-Software.github.io/MHKiT/)
- To locally build the documentation use the command line to move into the ``/MHKiT/docs`` folder then `make html`
```
    cd docs
    make clean
    make html
```
Using the file explorer navigate to MHKiT/docs use an Internet browser (i.e. Chrome, Safari, Edge, etc. ) and open `index.html` to view changes.


## Step 5. Update to the [MHKiT Documentation](https://MHKiT-Software.github.io/MHKiT/)
- Once changes have been made the user can push the changes back up to their branch


  ```Shell
  git status
  ```
  - The status will return a list of files that have been modified. If you want to commit all of the changed files you can use `git add --all` otherwise use `git add fileName` where `fileName` is either the file or a list of space-separated files the user wishes to add.  Add the files to the list to be pushed to the
  - Add a commit message documenting what has been changed
  ```
  git commit -m 'A descriptive message here describing why or what was changed in the documentation'
  ```
  - Finally, push the changes to your fork
  ```
  git push origin
  ```


# Best Practices
  - Run spell check (not built into most text editors)
  - Update the MHKiT-Python and MHKiT-MATLAB submodules ``git submodule init`` ``git submodule update --remote``, refer to https://git-scm.com/book/en/v2/Git-Tools-Submodules for more information
  - When compiling the website, ``make clean`` and then ``make html``

## Formatting Guidelines
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

## Terminology Guidelines
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
  - 16 warnings
    - 4 .nblink: WARNING: document isn't included in any toctree
    - duplicate object warnings
    - 2 MHKiT-MATLAB formating warnings (listed below)
  - MHKiT-MATLAB
    - MATLAB Live examples remove index, and must be exorted as HTML manually
    - mhkit.wave.graphics.plot_spectrum:1: WARNING: Unexpected section title or transition.
    - mhkit.wave.graphics.plot_spectrum:13: WARNING: Unexpected section title or transition

  - MHKiT-Python
    - Jupyter Notebooks examples change the index

