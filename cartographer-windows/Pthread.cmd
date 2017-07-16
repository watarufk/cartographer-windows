call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64
echo on



cd ..\pthread-win32
msbuild pthread.2015.sln /m /t:Rebuild /p:Configuration=Release;Platform=x64



cd ..\ceres-solver-windows
