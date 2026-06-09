#!/usr/bin/env bash

set -e

cmake -S. -B_build -GNinja \
  -DCMAKE_CXX_COMPILER=/usr/bin/clang++-20 \
  -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

if [ ! -e compile_commands.json ]
then
  echo "Creating compile_commands.json..."
  ln -s _build/compile_commands.json .
fi

echo "Exiting..."
