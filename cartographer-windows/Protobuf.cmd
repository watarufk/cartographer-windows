SET SdksFolderPath=C:/SDKs



cd ..
rmdir /S /Q protobuf_cmake_build_x64
mkdir protobuf_cmake_build_x64



cd protobuf_cmake_build_x64
cmake.exe ../protobuf/cmake -G "Visual Studio 14 2015 Win64" ^
-DCMAKE_CONFIGURATION_TYPES:STRING="Release" ^
-Dprotobuf_BUILD_EXAMPLES:BOOL=TRUE ^
-Dprotobuf_BUILD_TESTS:BOOL=FALSE ^
-DCMAKE_INSTALL_PREFIX:PATH="%SdksFolderPath%/google/protobuf"

cmake.exe --build "." --target "ALL_BUILD" --config "Release"

REM Setting protobuf_BUILD_TESTS to TRUE fails.
REM cmake.exe --build "." --target "RUN_TESTS" --config "Release"

cmake.exe --build "." --target "INSTALL" --config "Release"
cd ..



cd /d "%~dp0"
