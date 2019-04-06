/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* write audiodata to the sound device without blocking */
/* #undef AUDIO_NONBLOCKING */

/* Compile-time audio output driver info */
#define BUILDOPTS_AUDIODRIVERS "oss "

/* Compile-time audio foramt support info */
#define BUILDOPTS_AUDIOFORMATS "mp3 wav"

/* Compile-time features info */
#define BUILDOPTS_FEATURES "pthreads "

/* Define to 1 if you have the <bool.h> header file. */
/* #undef HAVE_BOOL_H */

/* Define to 1 if you have the <errno.h> header file. */
#define HAVE_ERRNO_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `ossaudio' library (-lossaudio). */
/* #undef HAVE_LIBOSSAUDIO */

/* Define to 1 if you have the `pthread' library (-lpthread). */
#define HAVE_LIBPTHREAD 1

/* Define to 1 if you have the <machine/soundcard.h> header file. */
/* #undef HAVE_MACHINE_SOUNDCARD_H */

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <pthread.h> header file. */
#define HAVE_PTHREAD_H 1

/* Define to 1 if you have the <pthread/mit/pthread.h> header file. */
/* #undef HAVE_PTHREAD_MIT_PTHREAD_H */

/* Define to 1 if you have the <pth.h> header file. */
/* #undef HAVE_PTH_H */

/* SID Playback support */
/* #undef HAVE_SIDPLAYER */

/* Define to 1 if you have the <soundcard.h> header file. */
/* #undef HAVE_SOUNDCARD_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strdup' function. */
#define HAVE_STRDUP 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strstr' function. */
#define HAVE_STRSTR 1

/* Define to 1 if you have the <sys/ioctl.h> header file. */
#define HAVE_SYS_IOCTL_H 1

/* Define to 1 if you have the <sys/soundcard.h> header file. */
#define HAVE_SYS_SOUNDCARD_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* LIRC support */
/* #undef INCLUDE_LIRC */

/* OGG playback support */
/* #undef INCLUDE_OGG */

/* Use PTH as posix threads library */
/* #undef LIBPTH */

/* Which headerfile to include for ncurses support */
#define NCURSES_HEADER <ncurses.h>

/* Use alternative buffering mechanism when using OSS output driver */
/* #undef NEWTHREAD */

/* Name of package */
#define PACKAGE "mp3blaster"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "mp3blaster"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "mp3blaster 3.2.7-dev"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "mp3blaster"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.2.7-dev"

/* Use pthreads for buffered audio playback (OSS only) */
#define PTHREADEDMPEG 1

/* OSS driver include file */
#define SOUNDCARD_HEADERFILE <sys/soundcard.h>

/* Default OSS sound device to use */
#define SOUND_DEVICE "/dev/dsp"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "3.2.7-dev"

/* ESD audio output support */
/* #undef WANT_ESD */

/* NAS audio output support */
/* #undef WANT_NAS */

/* OSS audio output support */
/* #define WANT_OSS */

/* SDL audio output support */
#define WANT_SDL 1

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Pthreads-required symbol on some systems */
#define _REENTRANT 1

/* Pthreads-required symbol on some systems */
/* #undef _THREAD_SAFE */

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

#define MP3BLASTER_DOCDIR "doc"
