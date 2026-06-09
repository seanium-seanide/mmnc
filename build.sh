#!/usr/bin/env bash

set -e

if [ ! -e _build ]
then
  echo "Build directory could not be found. Run the CMake configuration script."
  echo "Exiting..."
  exit 1
fi

cmake --build _build -j 4
