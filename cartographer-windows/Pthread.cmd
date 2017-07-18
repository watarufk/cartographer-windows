call "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\vcvarsall.bat" amd64
echo on



SET SdksFolderPath=C:/SDKs



cd ..\pthread-win32
msbuild pthread.2015.sln /m /t:Build /p:Configuration=Release;Platform=x64
cd ..
REM The last character of the target path must be not "/" but "\".
xcopy /E /D /Y /Q "pthread-win32"  "%SdksFolderPath%/GerHobbelt/pthread-win32\"
copy "%SdksFolderPath%\GerHobbelt\pthread-win32\bin\x64_MSVC2015.Release\pthread_lib.lib" "%SdksFolderPath%\GerHobbelt\pthread-win32\bin\x64_MSVC2015.Release\pthread.lib"



cd /d "%~dp0"
