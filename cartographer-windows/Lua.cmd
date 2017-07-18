SET SdksFolderPath=C:/SDKs



cd ..
rmdir /S /Q lua_build_x64
mkdir lua_build_x64



cd lua_build_x64
cmake.exe ../lua -G "Visual Studio 14 2015 Win64" ^
-DCMAKE_CONFIGURATION_TYPES:STRING="Release" ^
-DCMAKE_INSTALL_PREFIX:PATH="%SdksFolderPath%/lua/lua"

cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cmake.exe --build "." --target "RUN_TESTS" --config "Release"
cmake.exe --build "." --target "INSTALL" --config "Release"
cd ..



cd /d "%~dp0"
