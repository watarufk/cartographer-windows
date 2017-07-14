REM copy cartographer\CMakeLists.txt ..\Projects\cartographer
REM call GoogleTest.cmd
REM call Eigen3.cmd



cd ..\Projects
rmdir /S /Q cartographer_build_x64
mkdir cartographer_build_x64



cd cartographer_build_x64

cmake.exe ../cartographer -G "Visual Studio 14 2015 Win64" ^
-DCMAKE_SUPPRESS_REGENERATION:BOOL=TRUE ^
-DGTEST_INCLUDE_DIRS:PATH="..\..\googletest\googletest\include" ^
-DGMOCK_INCLUDE_DIRS:PATH="..\..\googletest\googlemock\include" ^
-DGMOCK_LIBRARIES:FILEPATH="..\..\googletest_build_x64\googlemock\Release" ^
-DGMOCK_SRC_DIR:PATH="..\..\googletest\googlemock\src" ^
-DEIGEN3_INCLUDE_DIR="..\..\ceres-solver-windows\eigen-eigen-5a0156e40feb" ^
-DCeres_DIR:PATH="..\..\ceres-solver-windows\ceres-solver" ^
-DCeres_INCLUDE_DIRS:PATH="..\..\ceres-solver-windows\ceres-solver\include" ^
-DCeres_LIBRARIES:PATH="..\..\ceres-solver-windows\ceres-solver_build_x64\lib\Release" ^
-DBoost_DIR:PATH="D:/Shared/SDKs/boost_1_64_0" ^
-DBoost_INCLUDE_DIR:PATH="D:/Shared/SDKs/boost_1_64_0" ^
-DBoost_LIBRARY_DIR:FILEPATH="D:/Shared/SDKs/boost_1_64_0/lib64-msvc-14.1" ^
-DBoost_IOSTREAMS_LIBRARY_DEBUG:FILEPATH="boost_iostreams-vc141-mt-gd-1_64.lib" ^
-DBoost_IOSTREAMS_LIBRARY_RELEASE:FILEPATH="boost_iostreams-vc141-mt-1_64.lib" ^
-DBoost_REGEX_LIBRARY_DEBUG:FILEPATH="boost_regex-vc141-mt-gd-1_64.lib" ^
-DBoost_REGEX_LIBRARY_RELEASE:FILEPATH="boost_regex-vc141-mt-1_64.lib" ^
-DLUA_INCLUDE_PREFIX:PATH="..\..\lua\src" ^
-DLUA_INCLUDE_DIR="..\..\lua\src" ^
-DLUA_LIBRARIES="..\..\lua_build_x64\Release" ^
-DLUA_LIBRARY:FILEPATH="..\..\lua_build_x64\Release" ^
-DProtobuf_INCLUDE_DIR="..\..\protobuf\src\google\protobuf" ^
-DProtobuf_SRC_ROOT_FOLDER="..\..\protobuf\src\google\protobuf" ^
-DProtobuf_LIBRARIES="..\..\protobuf_cmake_build_x64\Release" ^
-DProtobuf_LIBRARY_RELEASE:FILEPATH="libprotobuf.lib" ^
-DProtobuf_LITE_LIBRARY_RELEASE:FILEPATH="libprotobuf-lite.lib" ^
-DProtobuf_PROTOC_LIBRARY_RELEASE:FILEPATH="libprotoc.lib" ^
-DProtobuf_PROTOC_EXECUTABLE:FILEPATH="protoc.exe" ^
-DCAIRO_DIR="..\..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\" ^
-DCAIRO_INCLUDE_DIRS:PATH="..\..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\include" ^
-DCAIRO_LIBRARIES:FILEPATH="..\..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\lib" ^
-DPKG_CONFIG_EXECUTABLE:FILEPATH="..\..\cartographer\configuration_files"

REM cmake.exe --build "." --target "ALL_BUILD" --config "Release"

goto :exit



:exit
cd "..\..\cartographer-windows"
