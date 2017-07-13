cd ..
rmdir /S /Q googletest_build_x64
mkdir googletest_build_x64



cd googletest_build_x64
cmake.exe ../googletest -G "Visual Studio 14 2015 Win64" -DCMAKE_SUPPRESS_REGENERATION:BOOL=TRUE -Dgtest_build_samples:BOOL="1" -Dgtest_force_shared_crt:BOOL="1" -Dgtest_disable_pthreads:BOOL="1" -DBUILD_GTEST:BOOL="1" -Dgmock_build_tests:BOOL="1" -Dgtest_hide_internal_symbols:BOOL="1" -Dgtest_build_tests:BOOL="1"
cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cd ..



cd cartographer-windows
