BUILD = cmake-build-debug
PROJECT = smallsdl

build:
	@rm ${BUILD} -rf && mkdir ${BUILD} && cd ${BUILD} && cmake .. && make

test:: build
	cd ${BUILD} && ctest

doc::
	@doxygen ./Doxyfile

run: build
	cd ${BUILD} && ./src/${PROJECT}


