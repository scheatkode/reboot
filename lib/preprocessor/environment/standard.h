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
 * - https://en.wikipedia.org/wiki/ANSI_C
 * - https://en.wikipedia.org/wiki/C99
 * - https://en.wikipedia.org/wiki/C11_(C_standard_revision)
 * - https://en.wikipedia.org/wiki/C17_(C_standard_revision)
 * - https://en.wikipedia.org/wiki/C2x
 * - https://en.wikipedia.org/wiki/Embedded_C
 * - https://sourceforge.net/p/predef/wiki/Standards/
 * - https://www.ibm.com/docs/en/xl-c-and-cpp-aix/
 * - https://www.stroustrup.com/bs_faq.html
 * - Linux   <features.h>
 * - FreeBSD <features.h>
 * - Extensive compiler flag testing
 */

/*! <!-- Standard C {{{ -->
 * This  section  safely  assumes and  initializes  the
 * below constant to a minimum of C89 if the `__STDC__`
 * predefined macro is available.
 */
#ifdef __STDC__

#  define AMPLIFY_PREPROCESSOR_STANDARD_C 1989
#  define AMPLIFY_PREPROCESSOR_STANDARD_C_1989        /*!< ANSI X3.159-1989 */

#endif /* <!-- }}} Standard C --> */

#endif /* __AMPLIFY_PREPROCESSOR_ENVIRONMENT_STANDARD_H__ */

/* vim: set ft=c et sw=3 fdm=marker fmr={{{,}}} fdl=0: */
