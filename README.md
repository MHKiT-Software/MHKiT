
# How to Update the [MHKiT Documentation Website](https://MHKiT-Software.github.io/MHKiT/)
The MHKiT documentation is developed as restructured text files that are compiled by [Sphinx](http://www.sphinx-doc.org/en/master/) into html files and then uploaded to the [MHKiT Documentation Repository](https://github.com/MHKiT-Software/MHKiT). Using Sphinx, GitHub renders the documentation on the [MHKiT Documentation Repository](https://github.com/MHKiT-Code-Hub/MHKiT/) as the [MHKiT Documentation Website](https://mhkit-code-hub.github.io/MHKiT/). This guide will help the user to download the documentation, modify the documentation, build the documentation locally, and push changes back up to the repository.


## Requirements

To update the MHKiT documentation you will need Python 3.6+, Git, Sphinx, and a GitHub account. This documentation assumes the user has a working version of Python installed (We recommend Anaconda Python, during installation check the add Python to Path) and a GitHub account but will cover the needed Python Sphinx package installation.

### Step 1. Fork the Repository & Clone to local machine
  - To update the documentation a user will need to "fork" this repository. This simply means that you are creating your own copy of this repository that you can edit.
  - Once forked you can "clone" (this will download your fork to your machine) the repository to your local machine using the command line.
  - Using the command line navigate to the file system location you would like to keep the documentation repository clone the documentation. Replacing the username and repository name to the correct values for you. This link can be automatically generated on your fork by copying the link visible after clicking clone on your repository page. The repository name will be assumed to be MHKiT in the remaining commands.
  ```bash
    git clone''' *https://github.com/USERNAME/REPOSITORYNAME.git*
  ```
  - Once cloned use the command line to change directories into the folder created by the clone to update the  MHKiT-Python and MHKiT-MATLAB [submodules].
  
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

   ```pip install -U sphinxcontrib-bibtex sphinxcontrib-matlabdomain sphinx_rtd_theme nbsphinx nbsphinx_link```


You are now ready to begin modifying and building the MHKiT documentation.

## Step 3. Modify the Documentation

- The restructured text files used to build the documentation are located in the ``/MHKiT/docs/source`` directory (Check the [Sphinx Website](http://www.sphinx-doc.org/en/master/) for information about the folder structure).
- Before modifying the documentation we recommend creating a feature branch and not modifying your fork's master branch. A feature branch can be created using the commands
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
- submit a pull request to merge the revisions on your fork with master, https://github.com/MHKiT-Software/MHKiT/pulls

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

