# gamma-adjuster
## Description
This is a program that gives the user a visual guide that helps them correctly configure their gamma.
it uses gtk3+ and is basically a wrapper for xgamma.
## Installation
---
**Ubuntu 18.04**

    #make sure you have cmake installed
    sudo apt install cmake
    #get it from github
    git clone --recursive https://github.com/JackLimes/gamma-adjuster.git
    #change into project directory
    cd gamma-adjuster
    #compile it
    cmake . && make
    #run it
    ./gamma-adjuster
    #(Optional) Let it be ran from anywhere:
    sudo ln -s gamma-adjuster /usr/bin/gamma-adjuster
---
