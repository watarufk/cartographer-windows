call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64
echo on



SET SdksFolderPath=C:/SDKs



REM Please set "Assume Unchanged" to these files with your git client.
xcopy /E /D /Y /Q "Projects\cartographer" "..\Projects\cartographer\"



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
-DCMAKE_CXX_FLAGS:STRING="/DWIN32 /D_WINDOWS /D_USE_MATH_DEFINES /W3 /GR /EHsc /I\"%SdksFolderPath%/GerHobbelt/pthread-win32\" /I\"%SdksFolderPath%/lua/lua/include\" /I\"../win32\"" ^
-DCMAKE_EXE_LINKER_FLAGS:STRING="/machine:x64 /LIBPATH:\"C:/SDKs/boost_1_64_0/lib64-msvc-14.1\" /LIBPATH:\"C:/SDKs/google/glog/lib\" /LIBPATH:\"C:/SDKs/GerHobbelt/pthread-win32/bin/x64_MSVC2015.Release\"" ^
-Dgflags_DIR:PATH="%SdksFolderPath%/gflags/gflags/lib/cmake/gflags" ^
-DGFLAGS_NAMESPACE:STRING="google" ^
-Dglog_DIR:PATH="%SdksFolderPath%/google/glog/lib/cmake/glog" ^
-Dglog_INCLUDE_DIRS:PATH="%SdksFolderPath%/google/glog/include" ^
-DEIGEN_INCLUDE_DIR:PATH="%SdksFolderPath%/eigen/eigen3/include/eigen3" ^
-DEIGEN3_INCLUDE_DIR:PATH="%SdksFolderPath%/eigen/eigen3/include/eigen3" ^
-DEigen3_DIR:PATH="%SdksFolderPath%/eigen/eigen3/share/eigen3/cmake" ^
-DCeres_DIR:PATH="%SdksFolderPath%/ceres-solver/ceres-solver/CMake" ^
-DGTEST_INCLUDE_DIRS:PATH="%SdksFolderPath%/google/googletest/include" ^
-DGMOCK_INCLUDE_DIRS:PATH="%SdksFolderPath%/google/googletest/include" ^
-DGMOCK_LIBRARIES:FILEPATH="%SdksFolderPath%/google/googletest/lib" ^
-Dgmock_build_tests:BOOL=FALSE ^
-DBoost_DIR:PATH="%SdksFolderPath%/boost_1_64_0" ^
-DBoost_INCLUDE_DIR:PATH="%SdksFolderPath%/boost_1_64_0" ^
-DBoost_LIBRARY_DIR:FILEPATH="%SdksFolderPath%/boost_1_64_0/lib64-msvc-14.1" ^
-DBoost_IOSTREAMS_LIBRARY_DEBUG:FILEPATH="boost_iostreams-vc141-mt-gd-1_64.lib" ^
-DBoost_IOSTREAMS_LIBRARY_RELEASE:FILEPATH="boost_iostreams-vc141-mt-1_64.lib" ^
-DBoost_REGEX_LIBRARY_DEBUG:FILEPATH="boost_regex-vc141-mt-gd-1_64.lib" ^
-DBoost_REGEX_LIBRARY_RELEASE:FILEPATH="boost_regex-vc141-mt-1_64.lib" ^
-DLUA_INCLUDE_PREFIX="%SdksFolderPath%/lua/lua/include" ^
-DLUA_INCLUDE_DIR="%SdksFolderPath%/lua/lua/include" ^
-DLUA_LIBRARIES="%SdksFolderPath%/lua/lua/lib" ^
-DLUA_LIBRARY:FILEPATH="%SdksFolderPath%/lua/lua/lib/lua.lib" ^
-DProtobuf_SRC_ROOT_FOLDER:PATH="../../protobuf/src" ^
-DProtobuf_INCLUDE_DIR:PATH="%SdksFolderPath%/google/protobuf/include" ^
-DProtobuf_LIBRARIES:PATH="%SdksFolderPath%/google/protobuf/lib" ^
-DProtobuf_PROTOC_EXECUTABLE:FILEPATH="%SdksFolderPath%/google/protobuf/bin/protoc.exe" ^
-DProtobuf_LITE_LIBRARY_RELEASE:FILEPATH="%SdksFolderPath%/google/protobuf/lib/libprotobuf-lite.lib" ^
-DProtobuf_PROTOC_LIBRARY_RELEASE:FILEPATH="%SdksFolderPath%/google/protobuf/lib/libprotoc.lib" ^
-DGTK3_INCLUDE_DIRS:PATH="../../gtkPlusBuiltFilesForWindows/gtk-build/gtk/x64/include" ^
-DGTK3_LIBRARY_DIRS:FILEPATH="../../gtkPlusBuiltFilesForWindows/gtk-build/gtk/x64/lib" ^
-Dgtest_build_samples:BOOL=FALSE ^
-Dgtest_build_tests:BOOL=FALSE ^
-Dgtest_disable_pthreads:BOOL=TRUE ^
-Dgtest_force_shared_crt:BOOL=FALSE ^
-DCARTOGRAPHER_CONFIGURATION_FILES_DIRECTORY:PATH="../../cartographer/configuration_files" ^
-DCMAKE_INSTALL_PREFIX:PATH="%SdksFolderPath%/googlecartographer/cartographer"

echo ^
-DTHREADS_PTHREADS_INCLUDE_DIR:PATH="%SdksFolderPath%/GerHobbelt/pthread-win32" ^
-DTHREADS_PTHREADS_LIBRARY_DIR:PATH="%SdksFolderPath%/GerHobbelt/pthread-win32/bin/x64_MSVC2015.Release" ^
 


copy "..\..\cartographer-windows\Projects\cartographer_build_x64\AllFiles.cmake" .


cmake.exe .
cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cmake.exe --build "." --target "RUN_TESTS" --config "Release"
cmake.exe --build "." --target "INSTALL" --config "Release"



cd /d "%~dp0"
