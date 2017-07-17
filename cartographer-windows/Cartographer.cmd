REM Set "Assume Unchanged to the ..\Projects\cartographer\CMakeLists.txt".
copy cartographer\CMakeLists.txt ..\Projects\cartographer



REM call GoogleTest.cmd



cd ..\Projects
rmdir /S /Q cartographer_build_x64
mkdir cartographer_build_x64



cd cartographer_build_x64

cmake.exe ../cartographer -G "Visual Studio 14 2015 Win64" ^
-DTHREADS_PTHREADS_INCLUDE_DIR:PATH="C:/pthread" ^
-DTHREADS_PTHREADS_LIBRARY_DIR:PATH="C:/pthread/bin/x64_MSVC2015.Release" ^
-DGTEST_INCLUDE_DIRS:PATH="../../googletest/googletest/include" ^
-DGMOCK_INCLUDE_DIRS:PATH="../../googletest/googlemock/include" ^
-DGMOCK_LIBRARIES:FILEPATH="../../googletest_build_x64/googlemock/Release" ^
-DGMOCK_SRC_DIR:PATH="../../googletest/googlemock/src" ^
-Dgflags_DIR:PATH="../../ceres-solver-windows/gflags_build_x64" ^
-DGFLAGS_INCLUDE_DIR_HINTS:PATH="../../ceres-solver-windows/gflags_build_x64/include" ^
-DGFLAGS_INCLUDE_DIR:PATH="../../ceres-solver-windows/gflags_build_x64/include" ^
-DGFLAGS_LIBRARY:FILEPATH="../../ceres-solver-windows/gflags_build_x64/lib/Release/gflags_nothreads_static.lib" ^
-DGFLAGS_NAMESPACE:STRING="google" ^
-Dglog_DIR:PATH="../../ceres-solver-windows/glog_build_x64" ^
-DGLOG_INCLUDE_DIR:PATH="../../ceres-solver-windows/glog_build_x64" ^
-DGLOG_LIBRARY:FILEPATH="../../ceres-solver-windows/glog_build_x64/Release/glog.lib" ^
-DEIGEN_INCLUDE_DIR:PATH="../../ceres-solver-windows/eigen-eigen-5a0156e40feb" ^
-DEigen3_DIR:PATH="../../ceres-solver-windows/eigen-eigen-5a0156e40feb_build_x64_cuda_openmp" ^
-DCeres_DIR:PATH="../../ceres-solver-windows/ceres-solver_build_x64" ^
-DCeres_INCLUDE_DIRS:PATH="../../ceres-solver-windows/ceres-solver/include" ^
-DCeres_LIBRARIES:PATH="../../ceres-solver-windows/ceres-solver_build_x64/lib/Release" ^
-DBoost_DIR:PATH="D:/Shared/SDKs/boost_1_64_0" ^
-DBoost_INCLUDE_DIR:PATH="D:/Shared/SDKs/boost_1_64_0" ^
-DBoost_LIBRARY_DIR:FILEPATH="D:/Shared/SDKs/boost_1_64_0/lib64-msvc-14.1" ^
-DBoost_IOSTREAMS_LIBRARY_DEBUG:FILEPATH="boost_iostreams-vc141-mt-gd-1_64.lib" ^
-DBoost_IOSTREAMS_LIBRARY_RELEASE:FILEPATH="boost_iostreams-vc141-mt-1_64.lib" ^
-DBoost_REGEX_LIBRARY_DEBUG:FILEPATH="boost_regex-vc141-mt-gd-1_64.lib" ^
-DBoost_REGEX_LIBRARY_RELEASE:FILEPATH="boost_regex-vc141-mt-1_64.lib" ^
-DLUA_INCLUDE_PREFIX:PATH="../../lua/src" ^
-DLUA_INCLUDE_DIR="../../lua/src" ^
-DLUA_LIBRARIES="../../lua_build_x64/Release" ^
-DLUA_LIBRARY:FILEPATH="../../lua_build_x64/Release" ^
-DProtobuf_SRC_ROOT_FOLDER="../../protobuf/src" ^
-DProtobuf_INCLUDE_DIR:PATH="../../protobuf/src" ^
-DProtobuf_LIBRARIES:PATH="../../protobuf_cmake_build_x64/Release" ^
-DProtobuf_LITE_LIBRARY_DEBUG:FILEPATH="../../protobuf_cmake_build_x64/Debug/libprotobuf-lited.lib" ^
-DProtobuf_LITE_LIBRARY_RELEASE:FILEPATH="../../protobuf_cmake_build_x64/Release/libprotobuf-lite.lib" ^
-DProtobuf_PROTOC_EXECUTABLE:FILEPATH="../../protobuf_cmake_build_x64/Release/protoc.exe" ^
-DProtobuf_PROTOC_LIBRARY_DEBUG:FILEPATH="../../protobuf_cmake_build_x64/Debug/protocd.lib" ^
-DProtobuf_PROTOC_LIBRARY_RELEASE:FILEPATH="../../protobuf_cmake_build_x64/Release/libprotoc.lib" ^
-DGTK3_INCLUDE_DIRS:PATH="../../gtkPlusBuiltFilesForWindows/gtk-build/gtk/x64/include" ^
-DGTK3_LIBRARY_DIRS:FILEPATH="../../gtkPlusBuiltFilesForWindows/gtk-build/gtk/x64/lib" ^
-DCARTOGRAPHER_CONFIGURATION_FILES_DIRECTORY:PATH="../../cartographer/configuration_files"

REM cmake.exe --build "." --target "ALL_BUILD" --config "Release"

goto :exit

echo ^

 



:exit
cd "..\..\cartographer-windows"
