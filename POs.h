/******************************************************************************
* \file      POs.h
* \version   2026.01.01
* \author    Peter Potrok ( @ignackodotcom )
*            ignacko.com@outlook.com
*            https://github.com/ignackodotcom
* \copyright Copyright (c) 1994 - 2026
*            MIT License (see License.txt file)
* \brief     Os identification macros
* \details
*
* \see       https://github.com/ignackodotcom
*			 https://github.com/cpredef/predef
*            https://copilot.microsoft.com/
*            https://chatgpt.com/
*            https://deepai.org/chat
*            and other resources
*
* \note      It is completely impossible to fully test all os combinations,
*            so this library is not fully tested. If you have any improvements,
*            please feel free to contact me at ignacko.com@outlook.com
******************************************************************************/

#ifndef POS_H
#define POS_H      20260101L



/******************************************************************************
** When compiling or setting up a build for a specific environment,
** you can explicitly add a macro if this predefined macro does not exist.
**
** (e.g., -D__AIX__).
*/



/******************************************************************************
*******************************************************************************
** 0-9
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** A
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Aix
*/
#define OS_AIX                          1
#define OS_AIX_NAME                     "AIX"

#if defined(_AIX) || defined(__TOS_AIX__)
 #define OS                             OS_AIX
 #define OS_NAME                        OS_AIX_NAME
#endif


/******************************************************************************
** Amdahl UTS
*/
#define OS_AMDAHLUTS                    OS_AIX + 1
#define OS_AMDAHLUTS_NAME               "Amdahl UTS"

#if defined(UTS)
 #define OS                             OS_AMDAHLUTS
 #define OS_NAME                        OS_AMDAHLUTS_NAME
#endif


/******************************************************************************
** AmigaOS
*/
#define OS_AMIGAOS                      OS_AMDAHLUTS + 1
#define OS_AMIGAOS_NAME                 AmigaOS

#if defined(AMIGA) || defined(__amigaos__)
 #define OS                             OS_AMIGAOS
 #define OS_NAME                        OS_AMIGAOS_NAME
#endif


/******************************************************************************
** Android
*/
#define OS_ANDROID                      OS_AMIGAOS + 1
#define OS_ANDROID_NAME                 "Android"

#if defined(__ANDROID__)
 #define OS                             OS_ANDROID
 #define OS_NAME                        OS_ANDROID_NAME
#endif


/******************************************************************************
** Apollo AEGIS
*/
#define OS_APOLLOAEGIS                  OS_ANDROID + 1
#define OS_APOLLOAEGIS_NAME             "Apollo AEGIS"

#if defined(aegis)
 #define OS                             OS_APOLLOAEGIS
 #define OS_NAME                        OS_APOLLOAEGIS_NAME
#endif


/******************************************************************************
** Apollo Domain/OS
*/
#define OS_APOLLODOMAINOS               OS_APOLLOAEGIS + 1
#define OS_APOLLODOMAINOS_NAME          "Apollo Domain/OS"

#if defined(apollo)
 #define OS                             OS_APOLLODOMAINOS
 #define OS_NAME                        OS_APOLLODOMAINOS_NAME
#endif


/******************************************************************************
** AROS
*/
#define OS_AROS                         OS_APOLLODOMAINOS + 1
#define OS_AROS_NAME                    "AROS"

#if defined(__AROS__)
 #define OS                             OS_AROS
 #define OS_NAME                        OS_AROS_NAME
#endif



/******************************************************************************
*******************************************************************************
** B
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Bada
**
** If you're using Bada in a project and need version detection,
** you d likely need to manually define your own macros via compiler flags
** (e.g., -D__BADA__=1234 or -D__BADA__).
*/
#define OS_BADA                         OS_AROS + 1
#define OS_BADA_NAME                    "Bada"

#if defined(__BADA__)
 #define OS                             OS_BADA
 #define OS_NAME                        OS_BADA_NAME
#endif


/******************************************************************************
** BeOS
*/
#define OS_BEOS                         OS_BADA + 1
#define OS_BEOS_NAME                    "BeOS"

#if defined(__BEOS__)
 #define OS                             OS_BEOS
 #define OS_NAME                        OS_BEOS_NAME
#endif


/******************************************************************************
** Blue Gene
*/
#define OS_BLUEGENE                     OS_BEOS + 1
#define OS_BLUEGENE_NAME                "Blue Gene"

#if defined(__bg__) || defined(__THW_BLUEGENE__)
 #define OS                             OS_BLUEGENE
 #define OS_NAME                        OS_BLUEGENE_NAME
#endif



/******************************************************************************
*******************************************************************************
** C
*******************************************************************************
******************************************************************************/

/******************************************************************************
** ConvexOS
*/
#define OS_CONVEXOS                     OS_BLUEGENE + 1
#define OS_CONVEXOS_NAME                "ConvexOS"

#if defined(__convex__)
 #define OS                             OS_CONVEXOS
 #define OS_NAME                        OS_CONVEXOS_NAME
#endif


/******************************************************************************
** CP/M
*/
#define OS_CPM                          OS_CONVEXOS + 1
#define OS_CPM_NAME                     "CP/M"

#if defined(__CPM) || defined(CPM)
 #define OS                             OS_CPM
 #define OS_NAME                        OS_CPM_NAME
#endif



/******************************************************************************
*******************************************************************************
** D
*******************************************************************************
******************************************************************************/

/******************************************************************************
** DG/UX
*/
#define OS_DGUX                         OS_CPM + 1
#define OS_DGUX_NAME                    "DG/UX"

#if defined(DGUX) ||  defined(__DGUX__) ||  defined(__dgux__)
 #define OS                             OS_DGUX
 #define OS_NAME                        OS_DGUX_NAME
#endif


/******************************************************************************
** DragonFly
*/
#define OS_DRAGONFLY                    OS_DGUX + 1
#define OS_DRAGONFLY_NAME               "DragonFly"

#if defined(__DragonFly__)
 #define OS                             OS_DRAGONFLY
 #define OS_NAME                        OS_DRAGONFLY_NAME
#endif


/******************************************************************************
** DYNIX/ptx
*/
#define OS_DYNIXPTX                     OS_DRAGONFLY + 1
#define OS_DYNIXPTX_NAME                "DYNIX/ptx"

#if defined(_SEQUENT_) || defined(sequent)
 #define OS                             OS_DYNIXPTX
 #define OS_NAME                        OS_DYNIXPTX_NAME
#endif



/******************************************************************************
*******************************************************************************
** E
*******************************************************************************
******************************************************************************/

/******************************************************************************
** eCos
*/
#define OS_ECOS                         OS_DYNIXPTX + 1
#define OS_ECOS_NAME                    "eCos"

#if defined(__ECOS)
 #define OS                             OS_ECOS
 #define OS_NAME                        OS_ECOS_NAME
#endif


/******************************************************************************
** Emscripten
*/
#define OS_EMSCRIPTEN                   OS_ECOS + 1
#define OS_EMSCRIPTEN_NAME              "Emscripten"

#if defined(EMSCRIPTEN) || defined(__EMSCRIPTEN__)
 #define OS                             OS_EMSCRIPTEN
 #define OS_NAME                        OS_EMSCRIPTEN_NAME
#endif



/******************************************************************************
*******************************************************************************
** F
*******************************************************************************
******************************************************************************/

/******************************************************************************
** FreeBSD
*/
#define OS_FREEBSD                      OS_EMSCRIPTEN + 1
#define OS_FREEBSD_NAME                 "FreeBSD"

#if defined(__FreeBSD__)
 #define OS                             OS_FREEBSD
 #define OS_NAME                        OS_FREEBSD_NAME
#endif


/******************************************************************************
** Fuchsia
*/
#define OS_FUCHSIA                      OS_FREEBSD + 1
#define OS_FUCHSIA_NAME                 "Fuchsia"

#if defined(__Fuchsia__)
 #define OS                             OS_FUCHSIA
 #define OS_NAME                        OS_FUCHSIA_NAME
#endif



/******************************************************************************
*******************************************************************************
** G
*******************************************************************************
******************************************************************************/

/******************************************************************************
** GNU aka GNU/Hurd
*/
#define OS_GNUHURD                      OS_FUCHSIA + 1
#define OS_GNUHURD_NAME                 "GNU aka GNU/Hurd"

#if defined(__gnu_hurd__)
 #define OS                             OS_GNUHURD
 #define OS_NAME                        OS_GNUHURD_NAME
#endif


/******************************************************************************
** GNU/kFreeBSD
*/
#define OS_GNUKFREEBSD                  OS_GNUHURD + 1
#define OS_GNUKFREEBSD_NAME             "GNU/kFreeBSD"

#if defined(__FreeBSD_kernel__) && defined(__GLIBC__)
 #define OS                             OS_GNUKFREEBSD
 #define OS_NAME                        OS_GNUKFREEBSD_NAME
#endif


/******************************************************************************
** GNU/Linux
*/
#define OS_GNULINUX                     OS_GNUKFREEBSD + 1
#define OS_GNULINUX_NAME                "GNU/Linux"

#if defined(__gnu_linux__) && !defined(__linux__) && !defined(linux) && !defined(__linux)
 #define OS                             OS_GNULINUX
 #define OS_NAME                        OS_GNULINUX_NAME
#endif



/******************************************************************************
*******************************************************************************
** H
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Haiku
*/
#define OS_HAIKU                        OS_GNULINUX + 1
#define OS_HAIKU_NAME                   "Haiku"

#if defined(__HAIKU__)
 #define OS                             OS_HAIKU
 #define OS_NAME                        OS_HAIKU_NAME
#endif


/******************************************************************************
** HI-UX MPP
*/
#define OS_HIUXMPP                      OS_HAIKU + 1
#define OS_HIUXMPP_NAME                 "HI-UX MPP"

#if defined(__hiuxmpp)
 #define OS                             OS_HIUXMPP
 #define OS_NAME                        OS_HIUXMPP_NAME
#endif


/******************************************************************************
** HP-UX
*/
#define OS_HPUX                         OS_HIUXMPP + 1
#define OS_HPUX_NAME                    "HP-UX"

#if defined(_hpux) || defined(hpux) || defined(__hpux)
 #define OS                             OS_HPUX
 #define OS_NAME                        OS_HPUX_NAME
#endif



/******************************************************************************
*******************************************************************************
** I
*******************************************************************************
******************************************************************************/

/******************************************************************************
** IBM OS/400
*/
#define OS_IBMOS400                     OS_HPUX + 1
#define OS_IBMOS400_NAME                "IBM OS/400"

#if defined(__OS400__)
 #define OS                             OS_IBMOS400
 #define OS_NAME                        OS_IBMOS400_NAME
#endif


/******************************************************************************
** Illumos
*/
#define OS_ILLUMOS                      OS_IBMOS400 + 1
#define OS_ILLUMOS_NAME                 "Illumos"

#if defined(__illumos__)
 #define OS                             OS_ILLUMOS
 #define OS_NAME                        OS_ILLUMOS_NAME
#endif


/******************************************************************************
** INTEGRITY
*/
#define OS_INTEGRITY                    OS_ILLUMOS + 1
#define OS_INTEGRITY_NAME               "INTEGRITY"

#if defined(__INTEGRITY)
 #define OS                             OS_INTEGRITY
 #define OS_NAME                        OS_INTEGRITY_NAME
#endif


/******************************************************************************
** IRIX
*/
#define OS_IRIX                         OS_INTEGRITY + 1
#define OS_IRIX_NAME                    "IRIX"

#if defined(sgi) || defined(__sgi)
 #define OS                             OS_IRIX
 #define OS_NAME                        OS_IRIX_NAME
#endif



/******************************************************************************
*******************************************************************************
** J
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** K
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** L
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Linux
*/
#define OS_LINUX                        OS_IRIX + 1
#define OS_LINUX_NAME                   "Linux"

#if defined(__linux__) || defined(linux) || defined(__linux) && !defined(__ANDROID__)
 #define OS                             OS_LINUX
 #define OS_NAME                        OS_LINUX_NAME
#endif


/******************************************************************************
** LynxOS
*/
#define OS_LYNXOS                       OS_LINUX + 1
#define OS_LYNXOS_NAME                  "LynxOS"

#if defined(__Lynx__)
 #define OS                             OS_LYNXOS
 #define OS_NAME                        OS_LYNXOS_NAME
#endif



/******************************************************************************
*******************************************************************************
** M
*******************************************************************************
******************************************************************************/

/******************************************************************************
** MacOS
*/
#define OS_MACOS                        OS_LYNXOS + 1
#define OS_MACOS_NAME                   "MacOS"

#if defined(macintosh) || defined(Macintosh) || defined(__APPLE__) && defined(__MACH__)
 #define OS                             OS_MACOS
 #define OS_NAME                        OS_MACOS_NAME
#endif


/******************************************************************************
** MicrowareOS-9
*/
#define OS_MICROWAREOS9                 OS_MACOS + 1
#define OS_MICROWAREOS9_NAME            "MicrowareOS-9"

#if defined(__OS9000) || defined(_OSK)
 #define OS                             OS_MICROWAREOS9
 #define OS_NAME                        OS_MICROWAREOS9_NAME
#endif


/******************************************************************************
** MidnightBSD
*/
#define OS_MIDNIGHTBSD                  OS_MICROWAREOS9 + 1
#define OS_MIDNIGHTBSD_NAME             "MidnightBSD"

#if defined(__MidnightBSD__) || defined(__MidnightBSD_kernel__)
 #define OS                             OS_MIDNIGHTBSD
 #define OS_NAME                        OS_MIDNIGHTBSD_NAME
#endif


/******************************************************************************
** MINIX
*/
#define OS_MINIX                        OS_MIDNIGHTBSD + 1
#define OS_MINIX_NAME                   "MINIX"

#if defined(__minix)
 #define OS                             OS_MINIX
 #define OS_NAME                        OS_MINIX_NAME
#endif


/******************************************************************************
** MiNT
*/
#define OS_MINT                         OS_MINIX + 1
#define OS_MINT_NAME                    "MiNT"

#if defined(__MINT__)
 #define OS                             OS_MINT
 #define OS_NAME                        OS_MINT_NAME
#endif


/******************************************************************************
** MorphOS
*/
#define OS_MORPHOS                      OS_MINT + 1
#define OS_MORPHOS_NAME                 "MorphOS"

#if defined(__MORPHOS__)
 #define OS                             OS_MORPHOS
 #define OS_NAME                        OS_MORPHOS_NAME
#endif


/******************************************************************************
** MPE/iX
*/
#define OS_MPEIX                        OS_MORPHOS + 1
#define OS_MPEIX_NAME                   "MPE/iX"

#if defined(mpeix) || defined(__mpexl)
 #define OS                             OS_MPEIX
 #define OS_NAME                        OS_MPEIX_NAME
#endif


/******************************************************************************
** MSDOS
*/
#define OS_MSDOS                        OS_MPEIX + 1
#define OS_MSDOS_NAME                   "MSDOS"

#if defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(__DOS__)
 #define OS                             OS_MSDOS
 #define OS_NAME                        OS_MSDOS_NAME
#endif


/******************************************************************************
** MSX
*/
#define OS_MSX                          OS_MSDOS + 1
#define OS_MSX_NAME                     "MSX"

#if defined(__MSX) || defined(MSX)
 #define OS                             OS_MSX
 #define OS_NAME                        OS_MSX_NAME
#endif



/******************************************************************************
*******************************************************************************
** N
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Native Client
*/
#define OS_NATIVECLIENT                 OS_MSX + 1
#define OS_NATIVECLIENT_NAME            "Native Client"

#if defined(__native_client__)
 #define OS                             OS_NATIVECLIENT
 #define OS_NAME                        OS_NATIVECLIENT_NAME
#endif


/******************************************************************************
** NetBSD
*/
#define OS_NETBSD                       OS_NATIVECLIENT + 1
#define OS_NETBSD_NAME                  "NetBSD"

#if defined(__NetBSD__)
 #define OS                             OS_NETBSD
 #define OS_NAME                        OS_NETBSD_NAME
#endif


/******************************************************************************
** NeXTSTEP
*/
#define OS_NEXTSTEP                     OS_NETBSD + 1
#define OS_NEXTSTEP_NAME                "NeXTSTEP"

#if defined(NeXT)
 #define OS                             OS_NEXTSTEP
 #define OS_NAME                        OS_NEXTSTEP_NAME
#endif


/******************************************************************************
** NonStop
*/
#define OS_NONSTOP                      OS_NEXTSTEP + 1
#define OS_NONSTOP_NAME                 "NonStop"

#if defined(__TANDEM)
 #define OS                             OS_NONSTOP
 #define OS_NAME                        OS_NONSTOP_NAME
#endif


/******************************************************************************
** Nucleus RTOS
*/
#define OS_NUCLEUSRTOS                  OS_NONSTOP + 1
#define OS_NUCLEUSRTOS_NAME             "Nucleus RTOS"

#if defined(__nucleus__)
 #define OS                             OS_NUCLEUSRTOS
 #define OS_NAME                        OS_NUCLEUSRTOS_NAME
#endif



/******************************************************************************
*******************************************************************************
** O
*******************************************************************************
******************************************************************************/

/******************************************************************************
** OpenBSD
*/
#define OS_OPENBSD                      OS_NUCLEUSRTOS + 1
#define OS_OPENBSD_NAME                 "OpenBSD"

#if defined(__OpenBSD__)
 #define OS                             OS_OPENBSD
 #define OS_NAME                        OS_OPENBSD_NAME
#endif


/******************************************************************************
** OS/2
*/
#define OS_OS2                          OS_OPENBSD + 1
#define OS_OS2_NAME                     "OS/2"

#if defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
 #define OS                             OS_OS2
 #define OS_NAME                        OS_OS2_NAME
#endif



/******************************************************************************
*******************************************************************************
** P
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Palm OS
*/
#define OS_PALMOS                       OS_OS2 + 1
#define OS_PALMOS_NAME                  "Palm OS"

#if defined(__palmos__)
 #define OS                             OS_PALMOS
 #define OS_NAME                        OS_PALMOS_NAME
#endif


/******************************************************************************
** Plan 9
*/
#define OS_PLAN9                        OS_PALMOS + 1
#define OS_PLAN9_NAME                   "Plan 9"

#if defined(EPLAN9)
 #define OS                             OS_PLAN9
 #define OS_NAME                        OS_PLAN9_NAME
#endif


/******************************************************************************
** Pyramid DC/OSx
*/
#define OS_PYRAMIDDCOSX                 OS_PLAN9 + 1
#define OS_PYRAMIDDCOSX_NAME            "Pyramid DC/OSx"

#if defined(pyr)
 #define OS                             OS_PYRAMIDDCOSX
 #define OS_NAME                        OS_PYRAMIDDCOSX_NAME
#endif



/******************************************************************************
*******************************************************************************
** Q
*******************************************************************************
******************************************************************************/

/******************************************************************************
** QNX
*/
#define OS_QNX                          OS_PYRAMIDDCOSX + 1
#define OS_QNX_NAME                     ""

#if defined(__QNX__) || defined(__QNXNTO__)
 #define OS                             OS_QNX
 #define OS_NAME                        OS_QNX_NAME
#endif



/******************************************************************************
*******************************************************************************
** R
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Reliant UNIX
*/
#define OS_RELIANTUNIX                  OS_QNX + 1
#define OS_RELIANTUNIX_NAME             "Reliant UNIX"

#if defined(sinux)
 #define OS                             OS_RELIANTUNIX
 #define OS_NAME                        OS_RELIANTUNIX_NAME
#endif



/******************************************************************************
*******************************************************************************
** S
*******************************************************************************
******************************************************************************/

/******************************************************************************
** SCO OpenServer
*/
#define OS_SCOOPENSERVER                OS_RELIANTUNIX + 1
#define OS_SCOOPENSERVER_NAME           "SCO OpenServer"

#if defined(M_I386) || defined(M_XENIX) || defined(_SCO_DS)
 #define OS                             OS_SCOOPENSERVER
 #define OS_NAME                        OS_SCOOPENSERVER_NAME
#endif


/******************************************************************************
** SerenityOS
*/
#define OS_SERENITYOS                   OS_SCOOPENSERVER + 1
#define OS_SERENITYOS_NAME              "SerenityOS"

#if defined(__serenity__)
 #define OS                             OS_SERENITYOS
 #define OS_NAME                        OS_SERENITYOS_NAME
#endif


/******************************************************************************
** Solaris
*/
#define OS_SOLARIS                      OS_SERENITYOS + 1
#define OS_SOLARIS_NAME                 "Solaris"

#if !defined(__illumos__)
 #if defined(sun) || defined(__sun)
  #if defined(__SVR4) || defined(__svr4__)
   #define OS                            OS_SOLARIS
   #define OS_NAME                       OS_SOLARIS_NAME
  #endif
 #endif
#endif


/******************************************************************************
** Stratus VOS
*/
#define OS_STRATUSVOS                   OS_SOLARIS + 1
#define OS_STRATUSVOS_NAME              "Stratus VOS"

#if defined(__VOS__)
 #define OS                             OS_STRATUSVOS
 #define OS_NAME                        OS_STRATUSVOS_NAME
#endif


/******************************************************************************
** SunOS
*/
#define OS_SUNOS                        OS_STRATUSVOS + 1
#define OS_SUNOS_NAME                   "SunOS"

#if defined(sun) || defined(__sun)
 #if !defined(__SVR4) && !defined(__svr4__)
  #define OS                            OS_SUNOS
  #define OS_NAME                       OS_SUNOS_NAME
 #endif
#endif


/******************************************************************************
** Syllable
*/
#define OS_SYLLABLE                     OS_SUNOS + 1
#define OS_SYLLABLE_NAME                "Syllable"

#if defined(__SYLLABLE__)
 #define OS                             OS_SYLLABLE
 #define OS_NAME                        OS_SYLLABLE_NAME
#endif


/******************************************************************************
** Symbian OS
*/
#define OS_SYMBIANOS                    OS_SYLLABLE + 1
#define OS_SYMBIANOS_NAME               "Symbian OS"

#if defined(__SYMBIAN32__)
 #define OS                             OS_SYMBIANOS
 #define OS_NAME                        OS_SYMBIANOS_NAME
#endif



/******************************************************************************
*******************************************************************************
** T
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Tru64 (OSF/1)
*/
#define OS_TRU64                        OS_SYMBIANOS + 1
#define OS_TRU64_NAME                   "Tru64 (OSF/1)"

#if defined(__osf__) || defined(__osf)
 #define OS                             OS_TRU64
 #define OS_NAME                        OS_TRU64_NAME
#endif



/******************************************************************************
*******************************************************************************
** U
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Ultrix
*/
#define OS_ULTRIX                       OS_TRU64 + 1
#define OS_ULTRIX_NAME                  "Ultrix"

#if defined(ultrix) || defined(__ultrix) || defined(__ultrix__) || \
    defined(unix) && defined(vax)
 #define OS                             OS_ULTRIX
 #define OS_NAME                        OS_ULTRIX_NAME
#endif


/******************************************************************************
** UNICOS
*/
#define OS_UNICOS                       OS_ULTRIX + 1
#define OS_UNICOS_NAME                  "UNICOS"

#if defined(_UNICOS)
 #define OS                             OS_UNICOS
 #define OS_NAME                        OS_UNICOS_NAME
#endif


/******************************************************************************
** UNICOS/mp
*/
#define OS_UNICOSMP                     OS_UNICOS + 1
#define OS_UNICOSMP_NAME                "UNICOS/mp"

#if defined(_CRAY) || defined(__crayx1)
 #define OS                             OS_UNICOSMP
 #define OS_NAME                        OS_UNICOSMP_NAME
#endif


/******************************************************************************
** UnixWare
*/
#define OS_UNIXWARE                     OS_UNICOSMP + 1
#define OS_UNIXWARE_NAME                "UnixWare"

#if defined(sco) || defined(_UNIXWARE7)
 #define OS                             OS_UNIXWARE
 #define OS_NAME                        OS_UNIXWARE_NAME
#endif



/******************************************************************************
*******************************************************************************
** V
*******************************************************************************
******************************************************************************/

/******************************************************************************
** VMS
*/
#define OS_VMS                          OS_UNIXWARE + 1
#define OS_VMS_NAME                     "VMS"

#if defined(VMS) || defined(__VMS)
 #define OS                             OS_VMS
 #define OS_NAME                        OS_VMS_NAME
#endif


/******************************************************************************
** VxWorks
*/
#define OS_VXWORKS                      OS_VMS + 1
#define OS_VXWORKS_NAME                 "VxWorks"

#if defined(__VXWORKS__) || defined(__vxworks)
 #define OS                             OS_VXWORKS
 #define OS_NAME                        OS_VXWORKS_NAME
#endif



/******************************************************************************
*******************************************************************************
** W
*******************************************************************************
******************************************************************************/

/******************************************************************************
** Windows
*/
#define OS_WINDOWS                      OS_VXWORKS + 1
#define OS_WINDOWS_NAME                 "Windows"

#if defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || \
    defined(__WIN32__) || defined(__TOS_WIN__) || defined(__WINDOWS__)
 #define OS                             OS_WINDOWS
 #define OS_NAME                        OS_WINDOWS_NAME
#endif


/******************************************************************************
** Windows CE
*/
#define OS_WINDOWSCE                    OS_WINDOWS + 1
#define OS_WINDOWSCE_NAME               "Windows CE"

#if defined(_WIN32_WCE) || defined(WIN32_PLATFORM_HPC2000) || \
    defined(WIN32_PLATFORM_HPCPRO) || defined(WIN32_PLATFORM_PSPC) || \
    defined(WIN32_PLATFORM_WFSP)
 #define OS                             OS_WINDOWSCE
 #define OS_NAME                        OS_WINDOWSCE_NAME
#endif



/******************************************************************************
*******************************************************************************
** X
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** Y
*******************************************************************************
******************************************************************************/

/******************************************************************************
*******************************************************************************
** Z
*******************************************************************************
******************************************************************************/

/******************************************************************************
** MVS/ESA, OS/390 and z/OS
*/
#define OS_ZOS                          OS_WINDOWSCE + 1
#define OS_ZOS_NAME                     "MVS/ESA, OS/390 and z/OS"

#if defined(__MVS__) || defined(__HOS_MVS__) || defined(__TOS_MVS__)
 #define OS                             OS_ZOS
 #define OS_NAME                        OS_ZOS_NAME
#endif


/******************************************************************************
** VM/ESA and z/VM
*/
#define OS_ZVM                          OS_ZOS + 1
#define OS_ZVM_NAME                     "VM/ESA and z/VM"

#if defined(__VM__) || defined(__HOS_VM__) || defined(__TOS_VM__)
 #define OS                             OS_ZVM
 #define OS_NAME                        OS_ZVM_NAME
#endif



/******************************************************************************
*******************************************************************************
** OS unknown
*******************************************************************************
******************************************************************************/

#ifndef OS
/* Unknown os. */
#define OS                              0
#endif /* OS */

#ifndef OS_NAME
/* Unknown os name. */
#define OS_NAME                         "unknown"
#endif /* OS_NAME */



/******************************************************************************
* Example of use
*
* #if OS == 0
*   #error "Unknown os"
* #endif
*
* #if OS == OS_WINDOWS
*   ...
*   Windows code
*   ...
* #elif OS == OS_LINUX
*   ...
*   Linux code
*   ...
* #else
*   ...
*   other code
*   ...
* #endif
*
*/



#endif /* POS_H */
