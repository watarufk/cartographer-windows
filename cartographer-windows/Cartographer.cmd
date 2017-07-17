call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64
echo on



REM On your git client, please set "Assume Unchanged" to the "..\Projects\cartographer\CMakeLists.txt".
copy cartographer\CMakeLists.txt ..\Projects\cartographer



REM call Pthread.cmd
REM call GoogleTest.cmd
REM call Lua.cmd
REM call Protobuf.cmd



cd ..\Projects
rmdir /S /Q cartographer_build_x64
mkdir cartographer_build_x64



cd cartographer_build_x64

cmake.exe ../cartographer -G "Visual Studio 14 2015 Win64" ^
-DCMAKE_CONFIGURATION_TYPES:STRING="Release" ^
-DTHREADS_PTHREADS_INCLUDE_DIR:PATH="C:/SDKs/GerHobbelt/pthread-win32" ^
-DTHREADS_PTHREADS_LIBRARY_DIR:PATH="C:/SDKs/GerHobbelt/pthread-win32/bin/x64_MSVC2015.Release" ^
-Dgflags_DIR:PATH="C:/SDKs/gflags/gflags/lib/cmake/gflags" ^
-DGFLAGS_NAMESPACE:STRING="google" ^
-Dglog_DIR:PATH="C:/SDKs/google/glog/lib/cmake/glog" ^
-Dglog_INCLUDE_DIRS:PATH="C:/SDKs/google/glog/include" ^
-DEIGEN_INCLUDE_DIR:PATH="C:/SDKs/eigen/eigen3/include/eigen3" ^
-DEIGEN3_INCLUDE_DIR:PATH="C:/SDKs/eigen/eigen3/include/eigen3" ^
-DEigen3_DIR:PATH="C:/SDKs/eigen/eigen3/share/eigen3/cmake" ^
-DCeres_DIR:PATH="C:/SDKs/ceres-solver/ceres-solver/CMake" ^
-DGTEST_INCLUDE_DIRS:PATH="C:/SDKs/google/googletest/include" ^
-DGMOCK_INCLUDE_DIRS:PATH="C:/SDKs/google/googletest/include" ^
-DGMOCK_LIBRARIES:FILEPATH="C:/SDKs/google/googletest/lib" ^
-Dgmock_build_tests:BOOL=FALSE ^
-DBoost_DIR:PATH="C:/SDKs/boost_1_64_0" ^
-DBoost_INCLUDE_DIR:PATH="C:/SDKs/boost_1_64_0" ^
-DBoost_LIBRARY_DIR:FILEPATH="C:/SDKs/boost_1_64_0/lib64-msvc-14.1" ^
-DBoost_IOSTREAMS_LIBRARY_DEBUG:FILEPATH="boost_iostreams-vc141-mt-gd-1_64.lib" ^
-DBoost_IOSTREAMS_LIBRARY_RELEASE:FILEPATH="boost_iostreams-vc141-mt-1_64.lib" ^
-DBoost_REGEX_LIBRARY_DEBUG:FILEPATH="boost_regex-vc141-mt-gd-1_64.lib" ^
-DBoost_REGEX_LIBRARY_RELEASE:FILEPATH="boost_regex-vc141-mt-1_64.lib" ^
-DLUA_INCLUDE_DIR="C:/SDKs/lua/lua/include" ^
-DLUA_LIBRARIES="C:/SDKs/lua/lua/lib" ^
-DLUA_LIBRARY:FILEPATH="C:/SDKs/lua/lua/lib/lua.lib" ^
-DProtobuf_SRC_ROOT_FOLDER:PATH="../../protobuf/src" ^
-DProtobuf_INCLUDE_DIR:PATH="C:/SDKs/google/protobuf/include" ^
-DProtobuf_LIBRARIES:PATH="C:/SDKs/google/protobuf/lib" ^
-DProtobuf_PROTOC_EXECUTABLE:FILEPATH="C:/SDKs/google/protobuf/bin/protoc.exe" ^
-DProtobuf_LITE_LIBRARY_RELEASE:FILEPATH="C:/SDKs/google/protobuf/lib/libprotobuf-lite.lib" ^
-DProtobuf_PROTOC_LIBRARY_RELEASE:FILEPATH="C:/SDKs/google/protobuf/lib/libprotoc.lib" ^
-DGTK3_INCLUDE_DIRS:PATH="../../gtkPlusBuiltFilesForWindows/gtk-build/gtk/x64/include" ^
-DGTK3_LIBRARY_DIRS:FILEPATH="../../gtkPlusBuiltFilesForWindows/gtk-build/gtk/x64/lib" ^
-Dgtest_build_samples:BOOL=FALSE ^
-Dgtest_build_tests:BOOL=FALSE ^
-Dgtest_disable_pthreads:BOOL=TRUE ^
-Dgtest_force_shared_crt:BOOL=FALSE ^
-DCARTOGRAPHER_CONFIGURATION_FILES_DIRECTORY:PATH="../../cartographer/configuration_files" ^
-DCMAKE_INSTALL_PREFIX:PATH="C:/SDKs/googlecartographer/cartographer"

echo ^
-DLUA_INCLUDE_PREFIX="C:/SDKs/lua/lua/include" ^
 

REM cmake.exe --build "." --target "ALL_BUILD" --config "Release"
REM cmake.exe --build "." --target "RUN_TESTS" --config "Release"
REM cmake.exe --build "." --target "INSTALL" --config "Release"

goto :exit

echo ^

 



:exit
cd /d "%~dp0"
