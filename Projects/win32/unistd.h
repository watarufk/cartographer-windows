#ifndef _UNISTD_H_
#define _UNISTD_H_
#if defined(_MSC_VER)

// refered: http://d.hatena.ne.jp/deraw/20070517/1179334643

#include <io.h>
/*
access
chmod
chsize
close
creat
dup
dup2
eof
filelength
isatty
locking
lseek
mktemp
open
read
setmode
sopen
tell
umask
unlink
write
*/
#include <direct.h>
/*
chdir
getcwd
mkdir
rmdir
*/
#include <process.h>
/*
cwait
execl
execle
execlp
execlpe
execv
execve
execvp
execvpe
spawnl
spawnle
spawnlp
spawnlpe
spawnv
spawnve
spawnvp
spawnvpe

*/
#pragma comment( lib, "ws2_32" )
#include <winsock2.h>
/*
gethostname
*/

#include <process.h>
/*
_getpid
*/
#include <time.h>

#ifdef	__cplusplus
extern "C" {
#endif


#if 1
// added by kishimoto
#ifndef read
#define read _read
#endif
#ifndef write
#define write _write
#endif
#ifndef popen
#define popen _popen
#endif
#ifndef pclose
#define pclose _pclose
#endif

#ifndef CLOCK_REALTIME
#define CLOCK_REALTIME  0
#endif
#undef pid_t
#if defined(_MSC_VER)
    typedef void *pid_t;
#else
    typedef int pid_t;
#endif

#if 0
    typedef int	pid_t;			/* process id type	*/
#ifndef getpid
#define  getpid() _getpid()
    extern pid_t __cdecl _getpid(void);
#endif
#endif
#endif



#ifndef _SSIZE_T_DEFINED
    typedef int ssize_t;
#define _SSIZE_T_DEFINED
#endif

#ifndef vsnprintf
#define vsnprintf _vsnprintf
#endif

#ifndef snprintf
#define snprintf _snprintf
#endif


#define nice(incr) (SetPriorityClass(GetCurrentProcess(),incr))//TODO
#define sleep(seconds) (Sleep(seconds*1000))
#define usleep(useconds) (Sleep(useconds))

#define stime(tp) UNISTD_stime(tp)
    __forceinline int UNISTD_stime(const time_t *tp) {
        FILETIME ft;
        SYSTEMTIME st;
        LONGLONG ll = Int32x32To64(*tp, 10000000) + 116444736000000000;
        ft.dwLowDateTime = (DWORD)ll;
        ft.dwHighDateTime = (DWORD)ll >> 32;
        FileTimeToSystemTime(&ft, &st);
        return SetSystemTime(&st);
    }

    //<sys/stat.h>
#define fstat64(fildes, stat) (_fstati64(fildes, stat))
#define stat64(path, buffer) (_stati64(path,buffer))



#ifdef	__cplusplus
}
#endif
#endif /* _MSC_VER */
#endif /* _UNISTD_H_ */
