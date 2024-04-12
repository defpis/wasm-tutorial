#!/bin/bash

root=$(cd "$(dirname "$0")" && pwd)

build="${root}/cmake-build-debug"

if [ -d "${build}" ]; then
  rm -rf "${build}"
fi

mkdir "${build}" && cd "${build}"

emcmake cmake .. && emmake make
