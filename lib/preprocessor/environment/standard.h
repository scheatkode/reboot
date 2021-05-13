/* ***************************************************
 *                                                   *
 *     (C) Copyright scheatkode 2021.                *
 *                                                   *
 *     Distributed under  the MIT  License. (See     *
 *     accompanying file LICENSE  at the root of     *
 *     the project).                                 *
 *                                                   *
 *************************************************** */

#ifndef __AMPLIFY_PREPROCESSOR_ENVIRONMENT_STANDARD_H__
#define __AMPLIFY_PREPROCESSOR_ENVIRONMENT_STANDARD_H__

/*!
 * @file  preprocessor/environment/standard.h
 * @brief Standard C preprocessor directives.
 *
 * This  header  provides preprocessor  directives  for
 * dealing  with predefined  macros  pertaining to  the
 * targeted/supported   version  of   the  C   language
 * standard.
 *
 * These preprocessor directives  are listed hereafter,
 * assuming  the following  prefix local  to this  file
 * `AMPLIFY_PREPROCESSOR_ENVIRONMENT_STANDARD_` :
 *
 * - C : This  is  the  main  constant  containing  the
 *       assumed current version of the C standard.
 *
 * If  defined,  the  following means  one  can  safely
 * target *at least* the respective standard :
 *
 * - `C_1989`              : C89     / ANSI X3.159-1989
 * - `C_1990`              : C90     / ISO/IEC 9899:1990
 * - `C_1994`              : C94     / ISO/IEC 9899-1:1994
 * - `C_1999`              : C99     / ISO/IEC 9899:1999
 * - `C_2011`              : C11     / ISO/IEC 9899:2011
 * - `C_2017`,  `C_2018`   : C18     / ISO/IEC 9899:2018
 * - `CPP_1997`,`CPP_1998` : C++98   / ISO/IEC 14882:1998
 * - `CPP_2011`            : C++11   / ISO/IEC 14882:2011
 * - `CPP_2014`            : C++14   / ISO/IEC 14882:2014
 * - `CPP_2017`            : C++17   / ISO/IEC 14882:2017
 * - `CPP_CLI`             : C++/CLI / ECMA-372
 * - `CPP_EMB`             : Embedded C++
 *
 * The many architectures  and compiler implementations
 * have  created much  inconsistencies  over time  and,
 * pertaining to  this file  only, the  provided macros
 * are  imprecise. It  should therefore  be known  that
 * they are  not set in  stone and gain in  accuracy as
 * more headers are included, namely :
 *
 * - `preprocessor/environment/architecture.h`
 * - `preprocessor/environment/compiler.h`
 * - `preprocessor/environment/os.h`
 *
 * It is,  therefore, safe *and encouraged*  to include
 * these headers  if one wishes to  accurately make use
 * of the macros defined in this file.
 *
 * Sources :
 *
 * - http://csapp.cs.cmu.edu/3e/docs/chistory.html
 * - http://david.tribble.com/text/cdiffs.htm#C90-vs-CPP98
 * - http://www.c-faq.com/
 * - http://www.coding-guidelines.com/cbook/c90c++.pdf
 * - http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1256.pdf
 * - http://www.open-std.org/JTC1/SC22/WG14/www/docs/n1570.pdf
 * - http://www.open-std.org/JTC1/SC22/WG14/www/docs/n2310.pdf
 * - http://www.open-std.org/JTC1/SC22/WG14/www/docs/n2596.pdf
 * - http://www.open-std.org/JTC1/SC22/WG14/www/standards
 * - https://en.wikipedia.org/wiki/ANSI_C
 * - https://en.wikipedia.org/wiki/C++/CX
 * - https://en.wikipedia.org/wiki/C11_(C_standard_revision)
 * - https://en.wikipedia.org/wiki/C17_(C_standard_revision)
 * - https://en.wikipedia.org/wiki/C2x
 * - https://en.wikipedia.org/wiki/C99
 * - https://en.wikipedia.org/wiki/Embedded_C
 * - https://sourceforge.net/p/predef/wiki/Standards/
 * - https://www.ecma-international.org/
 * - https://www.ibm.com/docs/en/xl-c-and-cpp-aix/
 * - https://www.iso.org/standard/25845.html
 * - https://www.iso.org/standard/38110.html
 * - https://www.iso.org/standard/50372.html
 * - https://www.iso.org/standard/64029.html
 * - https://www.iso.org/standard/68564.html
 * - https://www.iso.org/standard/79358.html
 * - https://www.stroustrup.com/bs_faq.html
 * - https://www.stroustrup.com/compat_short.pdf
 * - https://www.stroustrup.com/crc.pdf
 * - https://www.stroustrup.com/examples_short.pdf
 * - https://www.stroustrup.com/siblings_short.pdf
 * - Linux   <features.h>
 * - FreeBSD <features.h>
 * - Extensive compiler flag testing
 */

/*! <!-- C {{{ --> */
/*! <!-- Standard C {{{ -->
 * This  section  safely  assumes and  initializes  the
 * below constant to a minimum of C89 if the `__STDC__`
 * predefined macro  is available. We  have, otherwise,
 * no way of accurately determining pre-C89 versions.
 */
#ifdef __STDC__

#  define AMPLIFY_PREPROCESSOR_STANDARD_C 1989
#  define AMPLIFY_PREPROCESSOR_STANDARD_C_1989        /*!< ANSI X3.159-1989 */

#endif /* <!-- }}} Standard C --> */

/*! <!-- Standard C version {{{ -->
 * TODO(scheatkode): Write Standard C version documentation.
 */
#ifdef __STDC_VERSION__

#  if ! defined(AMPLIFY_PREPROCESSOR_STANDARD_C)
   || ! defined(AMPLIFY_PREPROCESSOR_STANDARD_C_1989)

#     define AMPLIFY_PREPROCESSOR_STANDARD_C 1994
#     define AMPLIFY_PREPROCESSOR_STANDARD_C_1989  /*!<    ANSI X3.159-1989 */
#     define AMPLIFY_PREPROCESSOR_STANDARD_C_1990  /*!<   ISO/IEC 9899:1990 */
#     define AMPLIFY_PREPROCESSOR_STANDARD_C_1994  /*!< ISO/IEC 9899-1:1994 */

#  endif

#  if (__STDC_VERSION__ >= 199409L)
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_C
#     define AMPLIFY_PREPROCESSOR_STANDARD_C 1994
#     define AMPLIFY_PREPROCESSOR_STANDARD_C_1994  /*!< ISO/IEC 9899-1:1994 */
#  endif

#  if (__STDC_VERSION__ >= 199901L) \
   || defined(__STDC_HOSTED__)        /*!< This macro appeared starting C99 */
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_C
#     define AMPLIFY_PREPROCESSOR_STANDARD_C 1999
#     define AMPLIFY_PREPROCESSOR_STANDARD_C_1999    /*!< ISO/IEC 9899:1999 */
#  endif

#  if (__STDC_VERSION__ >= 201112L)
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_C
#     define AMPLIFY_PREPROCESSOR_STANDARD_C 2011
#     define AMPLIFY_PREPROCESSOR_STANDARD_C_2011    /*!< ISO/IEC 9899:2011 */
#  endif

#  if (__STDC_VERSION__ >= 201710L)
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_C
#     define AMPLIFY_PREPROCESSOR_STANDARD_C 2017
#     define AMPLIFY_PREPROCESSOR_STANDARD_C_2017    /*!< ISO/IEC 9899:2018 */
#  endif

#endif /* <!-- }}} Standard C version --> */
/* <!-- C }}} --> */

/* <!-- C++ {{{ --> */
/*! <!-- Standard C++ version {{{ -->
 * TODO(scheatkode): Write Standard C++ version documentation.
 */
#ifdef __cplusplus

#  if (__cplusplus >= 199711L)
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_CPP
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP 1998
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP_1998 /*!< ISO/IEC 14882:1998 */
#  endif

/*!
 * C++03 is a minor revision of the C++98 standard; the
 * `__cplusplus` macro is therefore unchanged. There is
 * currently no viable way of identifying this revision
 * specifically.
 */

#  if (__cplusplus >= 201103L)
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_CPP
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP 2011
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP_2011 /*!< ISO/IEC 14882:2011 */
#  endif

#  if (__cplusplus >= 201402L)
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_CPP
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP 2014
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP_2014 /*!< ISO/IEC 14882:2014 */
#  endif

#  if (__cplusplus >= 201703L)
#     undef  AMPLIFY_PREPROCESSOR_STANDARD_CPP
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP 2017
#     define AMPLIFY_PREPROCESSOR_STANDARD_CPP_2017 /*!< ISO/IEC 14882:2017 */
#  endif

#  ifndef AMPLIFY_PREPROCESSOR_STANDARD_CPP
#  endif

#endif /* <!-- }}} Standard C++ version --> */

/*! <!-- C++/CLI {{{ -->
 * C++/CLI is  a Windows-specific extension of  the C++
 * version described in ISO/IEC 14882:2003 which has no
 * viable  method  of  identification.  The  only  safe
 * assumption  left is  the preceding  standard, namely
 * ISO/IEC 14882:1998, a.k.a C++98.
 */
#ifdef __cplusplus_cli

#  define AMPLIFY_PREPROCESSOR_STANDARD_CPP 1998
#  define AMPLIFY_PREPROCESSOR_STANDARD_CPP_1998    /*!< ISO/IEC 14882:1998 */
#  define AMPLIFY_PREPROCESSOR_STANDARD_CPP_CLI               /*!< ECMA-372 */

#endif /* <!-- C++ CLI }}} --> */

/*! <!-- Embedded C++ {{{ -->
 * Embedded C++ is a subset of C++ lacking at least the
 * following language  features which  are known  to be
 * used extensively throughout the standard library :
 *
 * - Exceptions
 * - Multiple inheritance
 * - Namespaces
 * - RTTI support
 * - Templates
 *
 * It  is  therefore  not   compliant  to  any  of  the
 * aforementioned C++ standards.
 */
#ifdef __embedded_cplusplus

#  define AMPLIFY_PREPROCESSOR_STANDARD_CPP 0
#  define AMPLIFY_PREPROCESSOR_STANDARD_CPP_EMB           /*!< Embedded C++ */

#endif /* <!-- Embedded C++ }}} --> */
/* <!-- C++ }}} --> */

#endif /* __AMPLIFY_PREPROCESSOR_ENVIRONMENT_STANDARD_H__ */

/* vim: set ft=c et sw=3 fdm=marker fmr={{{,}}} fdl=0: */
