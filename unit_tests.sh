#!/usr/bin/env bash

set -e

if [ ! -e _build/test ]
then
  echo "Could not find unit tests. Run the build tests with the unit tests cache variable turned on."
  echo "Exiting..."
  exit 1
fi

ctest -VV --test-dir=_build/test

echo "Exiting..."
