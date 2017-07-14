cd ..
rmdir /S /Q eigen-eigen-5a0156e40feb_build_x64
mkdir eigen-eigen-5a0156e40feb_build_x64



cd eigen-eigen-5a0156e40feb_build_x64
cmake.exe ../ceres-solver-windows/eigen-eigen-5a0156e40feb -G "Visual Studio 14 2015 Win64" -DCMAKE_SUPPRESS_REGENERATION:BOOL=TRUE
REM eigen is header library.
REM cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cd ..



cd cartographer-windows
