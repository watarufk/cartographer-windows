call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64
echo on



cd ..\pthread-win32
msbuild pthread.2015.sln /m /t:Build /p:Configuration=Release;Platform=x64
cd ..
xcopy /E /D /Y /Q "pthread-win32"  "C:\SDKs\GerHobbelt\pthread-win32\"



cd /d "%~dp0"
