
# How to Update the [MHKiT Documentation Website](https://MHKiT-Software.github.io/MHKiT/)
The MHKiT documentation is developed as restructured text files that are compiled by [Sphinx](http://www.sphinx-doc.org/en/master/) into html files and then uploaded to the [MHKiT Documentation Repository](https://github.com/MHKiT-Software/MHKiT). Using Sphinx, GitHub renders the documentation on the [MHKiT Documentation Repository](https://github.com/MHKiT-Software/MHKiT/) as the [MHKiT Documentation Website](https://MHKiT-Software.github.io/MHKiT/). This guide will help the user to download the documentation, modify the documentation, build the documentation locally, and push changes back up to the repository.


## Requirements

To update the MHKiT documentation you will need Python 3.6+, Git, Sphinx, and a GitHub account. This documentation assumes the user has a working version of Python installed (We recommend Anaconda Python, during installation check the add Python to Path) and a GitHub account but will cover the needed Python Sphinx package installation.

### Step 1. Fork the Repository & Clone to local machine
  - To update the documentation a user will need to "fork" this repository. This simply means that you are creating your own copy of this repository that you can edit.
  - Once forked you can "clone" (this will download your fork to your machine) the repository to your local machine using the command line.
  - Using the command line navigate to the file system location you would like to keep the documentation repository clone the documentation. Replacing the username and repository name to the correct values for you. This link can be automatically generated on your fork by copying the link visible after clicking clone on your repository page. The repository name will be assumed to be MHKiT in the remaining commands.
  ```bash
    git clone https://github.com/USERNAME/REPOSITORYNAME.git
  ```
  - Once cloned use the command line to change directories into the folder created by the clone to update the  MHKiT-Python and MHKiT-MATLAB [submodules].
  
  ```bash
     cd MHKiT
     git submodule init
     git submodule update --remote
  ```
  The ``MHKiT-Python`` and ``MHKiT-MATLAB`` folders should now contain source code.
  
  To build the Python API documentation for submitting a pull request you will want to use the submodule MHKiT-Python included here. To do so first uninstall any MHKiT you may have and then use the python package manager to install this MHKiT submodule.
  
  ```bash
  pip uninstall mhkit
  cd MHKiT-Python
  pip install -e .
  ```
   **NOTE:** After building the documentation (see below) be sure to reinstall your MHKiT-Python distribution from pypi (e.g. `pip install mhkit`) or from your fork of the repository as an editable package (e.g. `pip install -e /path/to/my/fork/of/MHKiT-Python`)

### Step 2. Download/Install [Sphinx](http://www.sphinx-doc.org/en/stable/index.html) package and extensions
  - [Sphinx]((http://www.sphinx-doc.org/en/master/usage/installation.html)) is a python package used to create the MHKiT documentation.

  - Install Sphinx from the command line
   **NOTE:** You may need to add PROXY settings ([see info here](https://cinhtau.net/2018/04/16/python-proxy-windows/))
    
    ```pip install -U Sphinx```
  
    - Sphinx --> Version: 8.1.3

  - Use the command line to install the needed Sphinx submodules (BibTex, MATLAB theme, rtd theme, NB Sphinx, and google analytics) and additional dependencies

     ```pip install -U sphinxcontrib-bibtex sphinxcontrib-matlabdomain sphinx_rtd_theme nbsphinx sphinxcontrib-googleanalytics ipython```

      - nbsphinx  --> Version: 0.9.5

      - sphinxcontrib-matlabdomain  --> Version: 0.22.1

      - sphinxcontrib-bibtex --> Version: 2.6.3

      - sphinx-rtd-theme --> Version: 3.0.2

      - sphinxcontrib-googleanalytics  --> Version: 0.4
    
    ```conda install pandoc```

You are now ready to begin modifying and building the MHKiT documentation.

## Step 3. Modify the Documentation

- The restructured text files used to build the documentation are located in the ``/MHKiT/docs/source`` directory (Check the [Sphinx Website](http://www.sphinx-doc.org/en/master/) for information about the folder structure).
- Before modifying the documentation we recommend creating a feature branch and not modifying your fork's main branch. A feature branch can be created using the commands
```bash
git branch featureBranchName
git checkout featureBranchName
```
- Now you can use a text editor to modify any restructured text file (files with `.rst` extension, e.g. `index.rst`).
- Once you are done editing, move to Step 4

## Step 4. Build the [MHKiT Documentation](https://MHKiT-Software.github.io/MHKiT/)
- To locally build the documentation use the command line to move into the ``/MHKiT/docs`` folder then `make html`
```bash
    cd docs
    make clean
    make html
```
Using your machine's file explorer navigate to MHKiT/docs and use an Internet browser (i.e. Chrome, Safari, Edge, etc. ) to open `index.html` to view modifications to the documentation source made above.


## Step 5. Update to the [MHKiT Documentation](https://MHKiT-Software.github.io/MHKiT/)
- Once changes have been made the user can push the changes back up to their fork


  ```Shell
  git status
  ```
  - The status will return a list of files that have been modified. If you want to commit all of the changed files you can use `git add --all` otherwise use `git add fileName` where `fileName` is either the file or a list of space-separated files the user wishes to add.
  - Commit the changes with a message documenting what has been changed
  ```
  git commit -m 'A descriptive message here describing why or what was changed in the documentation'
  ```
  - Finally, push the changes to your fork's (``yourFork``) feature branch (``featureBranchName``).
  ```
  git push -u yourFork featureBranchName
  ```
  - If you did not create a feature branch simply type `git push` 

## Step 6. Submit a Pull Request
- Submit a pull request to merge the revisions on your fork with main, https://github.com/MHKiT-Software/MHKiT/pulls

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
  - Heading 5 `++++++`
  - Made sure header underline is for full length of header text
  - Use this style guide: https://documentation-style-guide-sphinx.readthedocs.io/en/latest/style-guide.html

## Terminology Guidelines
  - DataFrame (not dataframe)
  - MATLAB (not Matlab)
  - Python (not python)
  - pandas (not Pandas)
  - MHKiT (not mhkit)
  - open-source (not open source)
  - time-series (not timeseries or time series)
  - time-domain (not time domain)
  - frequency-domain (not frequency domain)
  - MHKiT-Python (or link to MHKiT-Python when referring to the repo)
  - MHKiT-MATLAB (MHKiT-MATLAB when referring to the repo)
  - MHKiT (Marine and Hydrokinetic Toolkit)

## Modules Template
All modules in MHKiT should be briefly described in the "Module Overview" Section.
Below is a template that can be used for a new MHKiT module (fix title 
characters when adding a section):

NAME Module
<br />====================

Brief description of what the module dose.

API Documentation
<br />--------------------

- `Python NAME API Documentation <mhkit-python/api.NAME.html>`_
- `MATLAB NAME API Documentation <mhkit-matlab/api.NAME.html>`_

Examples
<br />--------------

- Bulleted list of linked examples
- pertaining to this module.
- Tag modules in docs/source/examples.rst as appropriate.

Submodules
<br />--------------

The NAME module contains the following submodules:

* ``SUBMODULE_NAME``: one sentence description of the submodule. Calculations are based on `IEC TS XXXXX-XXX:20XX EDX <LINK>`
* ``SUBMODULE_NAME``: etc...

IEC/TS XXXXX-XXX
<br />---------------------------

Recommends proper use of the module per relevant IEC standards.

