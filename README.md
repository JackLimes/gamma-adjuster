# gamma-adjuster
## Description
This is a program that gives the user a visual guide that helps them correctly configure their gamma.
it uses gtk3+ and is basically a wrapper for xgamma.
## Installation
For Ubuntu 18.04:
Make sure you have cmake installed:
  sudo apt install cmake
Clone the repo:
  git clone --recursive https://github.com/JackLimes/gamma-adjuster.git
Change dirctory into the folder:
  cd gamma-adjuster
Compile it:
  cmake . && make
Run it:
  ./gamma-adjuster
(Optional) Let it be ran from anywhere:
  sudo ln -s gamma-adjuster /usr/bin/gamma-adjuster
