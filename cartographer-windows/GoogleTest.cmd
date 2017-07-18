cd ..
rmdir /S /Q googletest_build_x64
mkdir googletest_build_x64



SET SdksFolderPath=C:/SDKs



cd googletest_build_x64
cmake.exe ../googletest -G "Visual Studio 14 2015 Win64" ^
-DCMAKE_CONFIGURATION_TYPES:STRING="Release" ^
-DBUILD_GMOCK:BOOL=TRUE ^
-Dgtest_build_samples:BOOL=TRUE ^
-Dgmock_build_tests:BOOL=TRUE ^
-Dgtest_disable_pthreads:BOOL=TRUE ^
-Dgtest_force_shared_crt:BOOL=FALSE ^
-Dgtest_hide_internal_symbols:BOOL=FALSE ^
-DCMAKE_INSTALL_PREFIX:PATH="%SdksFolderPath%/google/googletest"

cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cmake.exe --build "." --target "RUN_TESTS" --config "Release"
cmake.exe --build "." --target "INSTALL" --config "Release"
cd ..




cd /d "%~dp0"
