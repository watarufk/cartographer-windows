cd ..
rmdir /S /Q cairo_build_x64
mkdir cairo_build_x64


REM This needs Anaconda3.

cd cairo_build_x64
cmake.exe ../cairo -G "Visual Studio 14 2015 Win64" -DCMAKE_SUPPRESS_REGENERATION:BOOL=TRUE -Dprotobuf_BUILD_TESTS:BOOL="0" ^
-DZLIB_INCLUDE_DIR:PATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\include" ^
-DZLIB_LIBRARY:FILEPATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\lib\zlibstat.lib" ^
-DFREETYPE_INCLUDE_DIR:PATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\include" ^
-DFREETYPE_LIBRARY:FILEPATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\lib\freetype.lib" ^
-DFONTCONFIG_INCLUDE_DIR:PATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\include" ^
-DFONTCONFIG_LIBRARY:FILEPATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\lib\fontconfig.lib" ^
-DPIXMAN_INCLUDE_DIR:PATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\include\pixman-1" ^
-DPIXMAN_LIBRARY:FILEPATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\lib\pixman-1.lib" ^
-DPNG_INCLUDE_DIR:PATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\include" ^
-DPNG_LIBRARY:FILEPATH="..\gtkPlusBuiltFilesForWindows\gtk-build\gtk\x64\lib\libpng16.lib"

REM cmake.exe --build "." --target "ALL_BUILD" --config "Release"
cd ..



cd cartographer-windows
