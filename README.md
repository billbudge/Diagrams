# Diagrams

# How to build for PNaCl

Please install CMake. 

In naclports, install the prerequisited libraries: jsoncpp, eigen3, bullet,
box2d, poly2tri, clipper, sdl2 and sld2_ttf


The build should be straight forward:

cd BUILD_DIR

cmake -D CMAKE_TOOLCHAIN_FILE=SRC_DIR/runtime/cmake/nacl_toolchain.cmake
SRC_DIR/runtime/

make

After building, there sould be an executable "main" in BUILD_DIR/application/.
Now it is time to call pnacl-finalize:

pnacl-finalize BUILD_DIR/application/main \
SRC_DIR/runtime/nacl_example/pinball/pnacl/Release/pinball.pexe

# How to see the demo

Create a http server and put the root dir at SRC_DIR/runtime/nacl_example. The
naclsdk should contain simple tools to enable a server.

Open the pinball folder and enjoy.
