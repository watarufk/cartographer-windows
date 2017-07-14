cd ..
rmdir /S /Q lua_build_x64
mkdir lua_build_x64



cd lua_build_x64
cmake.exe ../lua -G "Visual Studio 14 2015 Win64" -DCMAKE_SUPPRESS_REGENERATION:BOOL=TRUE
cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cd ..



cd cartographer-windows
