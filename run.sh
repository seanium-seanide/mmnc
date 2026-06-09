#!/usr/bin/env bash

set -e

if [ ! -e _build/source/mmnc ]
then
  echo "Could not find mmnc executable. Run the build script."
  echo "Exiting..."
  exit 1
fi

./_build/source/mmnc
