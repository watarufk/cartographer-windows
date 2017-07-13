cd ..
rmdir /S /Q protobuf_cmake_build_x64
mkdir protobuf_cmake_build_x64



cd protobuf_cmake_build_x64
cmake.exe ../protobuf/cmake -G "Visual Studio 14 2015 Win64" -DCMAKE_SUPPRESS_REGENERATION:BOOL=TRUE -Dprotobuf_BUILD_TESTS:BOOL="0"
cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cmake.exe --build "." --target "ALL_BUILD" --config "Debug"
cd ..



cd cartographer-windows
