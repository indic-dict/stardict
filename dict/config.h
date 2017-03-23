/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Compile with darwin support */
/* #undef CONFIG_DARWIN */

/* Compile with gnome support */
#define CONFIG_GNOME /**/

/* Compile with gpe support */
/* #undef CONFIG_GPE */

/* Compile without gnome support */
/* #undef CONFIG_GTK */

/* Compile with maemo support */
/* #undef CONFIG_MAEMO */

/* always defined to indicate that i18n is enabled */
#define ENABLE_NLS 1

/* Gettext package */
#define GETTEXT_PACKAGE "stardict"

/* Define to 1 if you have the `bind_textdomain_codeset' function. */
#define HAVE_BIND_TEXTDOMAIN_CODESET 1

/* Define to 1 if you have the `dcgettext' function. */
#define HAVE_DCGETTEXT 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <espeak/speak_lib.h> header file. */
/* #undef HAVE_ESPEAK_SPEAK_LIB_H */

/* Define to 1 if you have the <festival/festival.h> header file. */
/* #undef HAVE_FESTIVAL_FESTIVAL_H */

/* Have gethostbyname_r function. */
#define HAVE_GETHOSTBYNAME_R /**/

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define if the GNU gettext() function is already present or preinstalled. */
#define HAVE_GETTEXT 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if your <locale.h> file defines LC_MESSAGES. */
#define HAVE_LC_MESSAGES 1

/* Define to 1 if you have the `X11' library (-lX11). */
#define HAVE_LIBX11 1

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Have memrchr function. */
#define HAVE_MEMRCHR /**/

/* Define to 1 if you have a working `mmap' system call. */
#define HAVE_MMAP 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "stardict"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://www.stardict.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "StarDict"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "StarDict 3.0.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "stardict"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.0.5"

/* does the C++ compiler support the use of a particular specialization when
   calling operator() template methods. */
#define SIGC_GCC_TEMPLATE_SPECIALIZATION_OPERATOR_OVERLOAD 1

/* Defined when the libstdc++ declares the std-namespace */
#define SIGC_HAVE_NAMESPACE_STD 1

/* Defined when std::reverse_iterator require additional argument */
/* #undef SIGC_HAVE_SUN_REVERSE_ITERATOR */

/* does the C++ compiler support the use of a particular specialization when
   calling operator() template methods omitting the template keyword. */
#define SIGC_MSVC_TEMPLATE_SPECIALIZATION_OPERATOR_OVERLOAD 1

/* does c++ compiler allows usage of member function in initialization of
   static member field. */
#define SIGC_SELF_REFERENCE_IN_MEMBER_INITIALIZATION 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "3.0.5"

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

#include <../lib/config-custom.h>
