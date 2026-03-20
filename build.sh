#!/usr/bin/env bash

if [ -e _build ]
then
  cmake --build _build -j 4
fi
