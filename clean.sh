#!/usr/bin/env bash

set -e

if [ -e _build ]
then
  echo "Removing _build..."
  rm -rf _build
fi

if [ -e compile_commands.json ]
then
  echo "Removing compile_commands.json..."
  rm -f compile_commands.json
fi

echo "Exiting..."
