/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.6.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "attack_parser.y"


/*
 * Copyright (c) 2007,2008,2009,2010 Mij <mij@sshguard.net>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

/*
 * SSHGuard. See http://www.sshguard.net
 */

#include <string.h>

#include "parser.h"

#define DEFAULT_ATTACKS_DANGEROUSNESS           10

 /* stuff exported by the scanner */
extern void scanner_init();
extern void scanner_fin();
extern int yylex();

static void yyerror(attack_t *, const char *);


#line 108 "attack_parser.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_ATTACK_PARSER_H_INCLUDED
# define YY_YY_ATTACK_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IPv4 = 258,                    /* IPv4  */
    IPv6 = 259,                    /* IPv6  */
    HOSTADDR = 260,                /* HOSTADDR  */
    WORD = 261,                    /* WORD  */
    INTEGER = 262,                 /* INTEGER  */
    SYSLOG_BANNER_PID = 263,       /* SYSLOG_BANNER_PID  */
    SOCKLOG_BANNER_PID = 264,      /* SOCKLOG_BANNER_PID  */
    BUSYBOX_SYSLOG_BANNER_PID = 265, /* BUSYBOX_SYSLOG_BANNER_PID  */
    SYSLOG_BANNER = 266,           /* SYSLOG_BANNER  */
    TIMESTAMP_SYSLOG = 267,        /* TIMESTAMP_SYSLOG  */
    TIMESTAMP_ISO8601 = 268,       /* TIMESTAMP_ISO8601  */
    TIMESTAMP_TAI64 = 269,         /* TIMESTAMP_TAI64  */
    AT_TIMESTAMP_TAI64 = 270,      /* AT_TIMESTAMP_TAI64  */
    RFC_5234_BANNER = 271,         /* RFC_5234_BANNER  */
    METALOG_BANNER = 272,          /* METALOG_BANNER  */
    SOCKLOG_BANNER = 273,          /* SOCKLOG_BANNER  */
    REPETITIONS = 274,             /* REPETITIONS  */
    HTTP_REQUEST = 275,            /* HTTP_REQUEST  */
    HTTP_VERSION = 276,            /* HTTP_VERSION  */
    HTTP_REDIRECT = 277,           /* HTTP_REDIRECT  */
    HTTP_AUTHFAIL = 278,           /* HTTP_AUTHFAIL  */
    HTTP_CLIERROR = 279,           /* HTTP_CLIERROR  */
    HTTP_BOTSEARCH_WEBMAIL = 280,  /* HTTP_BOTSEARCH_WEBMAIL  */
    HTTP_BOTSEARCH_PHPMYADMIN = 281, /* HTTP_BOTSEARCH_PHPMYADMIN  */
    HTTP_BOTSEARCH_WORDPRESS = 282, /* HTTP_BOTSEARCH_WORDPRESS  */
    HTTP_BOTSEARCH_JOOMLA = 283,   /* HTTP_BOTSEARCH_JOOMLA  */
    HTTP_BOTSEARCH = 284,          /* HTTP_BOTSEARCH  */
    SSH_INVALUSERPREF = 285,       /* SSH_INVALUSERPREF  */
    SSH_NOTALLOWEDPREF = 286,      /* SSH_NOTALLOWEDPREF  */
    SSH_NOTALLOWEDSUFF = 287,      /* SSH_NOTALLOWEDSUFF  */
    SSH_LOGINERR_PREF = 288,       /* SSH_LOGINERR_PREF  */
    SSH_LOGINERR_PAM = 289,        /* SSH_LOGINERR_PAM  */
    SSH_VIA = 290,                 /* SSH_VIA  */
    SSH_MAXAUTH = 291,             /* SSH_MAXAUTH  */
    SSH_ADDR_SUFF = 292,           /* SSH_ADDR_SUFF  */
    SSH_NOIDENTIFSTR = 293,        /* SSH_NOIDENTIFSTR  */
    SSH_BADPROTOCOLIDENTIF = 294,  /* SSH_BADPROTOCOLIDENTIF  */
    SSH_BADPROTOCOLIDENTIF_SUFF = 295, /* SSH_BADPROTOCOLIDENTIF_SUFF  */
    SSH_BADKEX_PREF = 296,         /* SSH_BADKEX_PREF  */
    SSH_BADKEX_SUFF = 297,         /* SSH_BADKEX_SUFF  */
    SSH_DISCONNECT_PREF = 298,     /* SSH_DISCONNECT_PREF  */
    SSH_CONNECTION_CLOSED = 299,   /* SSH_CONNECTION_CLOSED  */
    SSH_PREAUTH_SUFF = 300,        /* SSH_PREAUTH_SUFF  */
    SSHGUARD_ATTACK_PREF = 301,    /* SSHGUARD_ATTACK_PREF  */
    SSHGUARD_ATTACK_SUFF = 302,    /* SSHGUARD_ATTACK_SUFF  */
    SSHGUARD_BLOCK_PREF = 303,     /* SSHGUARD_BLOCK_PREF  */
    SSHGUARD_BLOCK_SUFF = 304,     /* SSHGUARD_BLOCK_SUFF  */
    DOVECOT_IMAP_LOGINERR_PREF = 305, /* DOVECOT_IMAP_LOGINERR_PREF  */
    DOVECOT_IMAP_LOGINERR_SUFF = 306, /* DOVECOT_IMAP_LOGINERR_SUFF  */
    UWIMAP_LOGINERR = 307,         /* UWIMAP_LOGINERR  */
    CYRUSIMAP_SASL_LOGINERR_PREF = 308, /* CYRUSIMAP_SASL_LOGINERR_PREF  */
    CYRUSIMAP_SASL_LOGINERR_SUFF = 309, /* CYRUSIMAP_SASL_LOGINERR_SUFF  */
    CUCIPOP_AUTHFAIL = 310,        /* CUCIPOP_AUTHFAIL  */
    EXIM_ESMTP_AUTHFAIL_PREF = 311, /* EXIM_ESMTP_AUTHFAIL_PREF  */
    EXIM_ESMTP_AUTHFAIL_SUFF = 312, /* EXIM_ESMTP_AUTHFAIL_SUFF  */
    EXIM_ESMTP_LOGINFAIL_PREF = 313, /* EXIM_ESMTP_LOGINFAIL_PREF  */
    EXIM_ESMTP_LOGINFAIL_SUFF = 314, /* EXIM_ESMTP_LOGINFAIL_SUFF  */
    SENDMAIL_RELAYDENIED_PREF = 315, /* SENDMAIL_RELAYDENIED_PREF  */
    SENDMAIL_RELAYDENIED_SUFF = 316, /* SENDMAIL_RELAYDENIED_SUFF  */
    SENDMAIL_AUTHFAILURE_PREF = 317, /* SENDMAIL_AUTHFAILURE_PREF  */
    SENDMAIL_AUTHFAILURE_SUFF = 318, /* SENDMAIL_AUTHFAILURE_SUFF  */
    POSTFIX_NO_AUTH_PREF = 319,    /* POSTFIX_NO_AUTH_PREF  */
    POSTFIX_SASL_LOGINERR_PREF = 320, /* POSTFIX_SASL_LOGINERR_PREF  */
    POSTFIX_SASL_LOGINERR_SUFF = 321, /* POSTFIX_SASL_LOGINERR_SUFF  */
    POSTFIX_GREYLIST = 322,        /* POSTFIX_GREYLIST  */
    POSTFIX_GREYLIST_SUFF = 323,   /* POSTFIX_GREYLIST_SUFF  */
    POSTSCREEN_PREF = 324,         /* POSTSCREEN_PREF  */
    POSTSCREEN_SUFF = 325,         /* POSTSCREEN_SUFF  */
    FREEBSDFTPD_LOGINERR_PREF = 326, /* FREEBSDFTPD_LOGINERR_PREF  */
    FREEBSDFTPD_LOGINERR_SUFF = 327, /* FREEBSDFTPD_LOGINERR_SUFF  */
    PROFTPD_LOGINERR_PREF = 328,   /* PROFTPD_LOGINERR_PREF  */
    PROFTPD_LOGINERR_SUFF = 329,   /* PROFTPD_LOGINERR_SUFF  */
    PUREFTPD_LOGINERR_PREF = 330,  /* PUREFTPD_LOGINERR_PREF  */
    PUREFTPD_LOGINERR_SUFF = 331,  /* PUREFTPD_LOGINERR_SUFF  */
    VSFTPD_LOGINERR_PREF = 332,    /* VSFTPD_LOGINERR_PREF  */
    VSFTPD_LOGINERR_SUFF = 333,    /* VSFTPD_LOGINERR_SUFF  */
    COCKPIT_AUTHFAIL_PREF = 334,   /* COCKPIT_AUTHFAIL_PREF  */
    COCKPIT_AUTHFAIL_SUFF = 335,   /* COCKPIT_AUTHFAIL_SUFF  */
    CLF_REQUEST_PREF = 336,        /* CLF_REQUEST_PREF  */
    CLF_UNAUTHOIRIZED_PREF = 337,  /* CLF_UNAUTHOIRIZED_PREF  */
    CLF_UNAUTHOIRIZED_SUFF = 338,  /* CLF_UNAUTHOIRIZED_SUFF  */
    CLFWEBPROBES_BOTSEARCH_SUFF = 339, /* CLFWEBPROBES_BOTSEARCH_SUFF  */
    CLF_LOGIN_URL_SUFF = 340,      /* CLF_LOGIN_URL_SUFF  */
    OPENSMTPD_FAILED_CMD_PREF = 341, /* OPENSMTPD_FAILED_CMD_PREF  */
    OPENSMTPD_AUTHFAIL_SUFF = 342, /* OPENSMTPD_AUTHFAIL_SUFF  */
    OPENSMTPD_UNSUPPORTED_CMD_SUFF = 343, /* OPENSMTPD_UNSUPPORTED_CMD_SUFF  */
    COURIER_AUTHFAIL_PREF = 344,   /* COURIER_AUTHFAIL_PREF  */
    OPENVPN_TLS_ERR_SUFF = 345,    /* OPENVPN_TLS_ERR_SUFF  */
    GITEA_ERR_PREF = 346,          /* GITEA_ERR_PREF  */
    GITEA_ERR_SUFF = 347           /* GITEA_ERR_SUFF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "attack_parser.y"

    char *str;
    int num;

#line 255 "attack_parser.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (attack_t *attack);

#endif /* !YY_YY_ATTACK_PARSER_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IPv4 = 3,                       /* IPv4  */
  YYSYMBOL_IPv6 = 4,                       /* IPv6  */
  YYSYMBOL_HOSTADDR = 5,                   /* HOSTADDR  */
  YYSYMBOL_WORD = 6,                       /* WORD  */
  YYSYMBOL_INTEGER = 7,                    /* INTEGER  */
  YYSYMBOL_SYSLOG_BANNER_PID = 8,          /* SYSLOG_BANNER_PID  */
  YYSYMBOL_SOCKLOG_BANNER_PID = 9,         /* SOCKLOG_BANNER_PID  */
  YYSYMBOL_BUSYBOX_SYSLOG_BANNER_PID = 10, /* BUSYBOX_SYSLOG_BANNER_PID  */
  YYSYMBOL_SYSLOG_BANNER = 11,             /* SYSLOG_BANNER  */
  YYSYMBOL_TIMESTAMP_SYSLOG = 12,          /* TIMESTAMP_SYSLOG  */
  YYSYMBOL_TIMESTAMP_ISO8601 = 13,         /* TIMESTAMP_ISO8601  */
  YYSYMBOL_TIMESTAMP_TAI64 = 14,           /* TIMESTAMP_TAI64  */
  YYSYMBOL_AT_TIMESTAMP_TAI64 = 15,        /* AT_TIMESTAMP_TAI64  */
  YYSYMBOL_RFC_5234_BANNER = 16,           /* RFC_5234_BANNER  */
  YYSYMBOL_METALOG_BANNER = 17,            /* METALOG_BANNER  */
  YYSYMBOL_SOCKLOG_BANNER = 18,            /* SOCKLOG_BANNER  */
  YYSYMBOL_REPETITIONS = 19,               /* REPETITIONS  */
  YYSYMBOL_HTTP_REQUEST = 20,              /* HTTP_REQUEST  */
  YYSYMBOL_HTTP_VERSION = 21,              /* HTTP_VERSION  */
  YYSYMBOL_HTTP_REDIRECT = 22,             /* HTTP_REDIRECT  */
  YYSYMBOL_HTTP_AUTHFAIL = 23,             /* HTTP_AUTHFAIL  */
  YYSYMBOL_HTTP_CLIERROR = 24,             /* HTTP_CLIERROR  */
  YYSYMBOL_HTTP_BOTSEARCH_WEBMAIL = 25,    /* HTTP_BOTSEARCH_WEBMAIL  */
  YYSYMBOL_HTTP_BOTSEARCH_PHPMYADMIN = 26, /* HTTP_BOTSEARCH_PHPMYADMIN  */
  YYSYMBOL_HTTP_BOTSEARCH_WORDPRESS = 27,  /* HTTP_BOTSEARCH_WORDPRESS  */
  YYSYMBOL_HTTP_BOTSEARCH_JOOMLA = 28,     /* HTTP_BOTSEARCH_JOOMLA  */
  YYSYMBOL_HTTP_BOTSEARCH = 29,            /* HTTP_BOTSEARCH  */
  YYSYMBOL_SSH_INVALUSERPREF = 30,         /* SSH_INVALUSERPREF  */
  YYSYMBOL_SSH_NOTALLOWEDPREF = 31,        /* SSH_NOTALLOWEDPREF  */
  YYSYMBOL_SSH_NOTALLOWEDSUFF = 32,        /* SSH_NOTALLOWEDSUFF  */
  YYSYMBOL_SSH_LOGINERR_PREF = 33,         /* SSH_LOGINERR_PREF  */
  YYSYMBOL_SSH_LOGINERR_PAM = 34,          /* SSH_LOGINERR_PAM  */
  YYSYMBOL_SSH_VIA = 35,                   /* SSH_VIA  */
  YYSYMBOL_SSH_MAXAUTH = 36,               /* SSH_MAXAUTH  */
  YYSYMBOL_SSH_ADDR_SUFF = 37,             /* SSH_ADDR_SUFF  */
  YYSYMBOL_SSH_NOIDENTIFSTR = 38,          /* SSH_NOIDENTIFSTR  */
  YYSYMBOL_SSH_BADPROTOCOLIDENTIF = 39,    /* SSH_BADPROTOCOLIDENTIF  */
  YYSYMBOL_SSH_BADPROTOCOLIDENTIF_SUFF = 40, /* SSH_BADPROTOCOLIDENTIF_SUFF  */
  YYSYMBOL_SSH_BADKEX_PREF = 41,           /* SSH_BADKEX_PREF  */
  YYSYMBOL_SSH_BADKEX_SUFF = 42,           /* SSH_BADKEX_SUFF  */
  YYSYMBOL_SSH_DISCONNECT_PREF = 43,       /* SSH_DISCONNECT_PREF  */
  YYSYMBOL_SSH_CONNECTION_CLOSED = 44,     /* SSH_CONNECTION_CLOSED  */
  YYSYMBOL_SSH_PREAUTH_SUFF = 45,          /* SSH_PREAUTH_SUFF  */
  YYSYMBOL_SSHGUARD_ATTACK_PREF = 46,      /* SSHGUARD_ATTACK_PREF  */
  YYSYMBOL_SSHGUARD_ATTACK_SUFF = 47,      /* SSHGUARD_ATTACK_SUFF  */
  YYSYMBOL_SSHGUARD_BLOCK_PREF = 48,       /* SSHGUARD_BLOCK_PREF  */
  YYSYMBOL_SSHGUARD_BLOCK_SUFF = 49,       /* SSHGUARD_BLOCK_SUFF  */
  YYSYMBOL_DOVECOT_IMAP_LOGINERR_PREF = 50, /* DOVECOT_IMAP_LOGINERR_PREF  */
  YYSYMBOL_DOVECOT_IMAP_LOGINERR_SUFF = 51, /* DOVECOT_IMAP_LOGINERR_SUFF  */
  YYSYMBOL_UWIMAP_LOGINERR = 52,           /* UWIMAP_LOGINERR  */
  YYSYMBOL_CYRUSIMAP_SASL_LOGINERR_PREF = 53, /* CYRUSIMAP_SASL_LOGINERR_PREF  */
  YYSYMBOL_CYRUSIMAP_SASL_LOGINERR_SUFF = 54, /* CYRUSIMAP_SASL_LOGINERR_SUFF  */
  YYSYMBOL_CUCIPOP_AUTHFAIL = 55,          /* CUCIPOP_AUTHFAIL  */
  YYSYMBOL_EXIM_ESMTP_AUTHFAIL_PREF = 56,  /* EXIM_ESMTP_AUTHFAIL_PREF  */
  YYSYMBOL_EXIM_ESMTP_AUTHFAIL_SUFF = 57,  /* EXIM_ESMTP_AUTHFAIL_SUFF  */
  YYSYMBOL_EXIM_ESMTP_LOGINFAIL_PREF = 58, /* EXIM_ESMTP_LOGINFAIL_PREF  */
  YYSYMBOL_EXIM_ESMTP_LOGINFAIL_SUFF = 59, /* EXIM_ESMTP_LOGINFAIL_SUFF  */
  YYSYMBOL_SENDMAIL_RELAYDENIED_PREF = 60, /* SENDMAIL_RELAYDENIED_PREF  */
  YYSYMBOL_SENDMAIL_RELAYDENIED_SUFF = 61, /* SENDMAIL_RELAYDENIED_SUFF  */
  YYSYMBOL_SENDMAIL_AUTHFAILURE_PREF = 62, /* SENDMAIL_AUTHFAILURE_PREF  */
  YYSYMBOL_SENDMAIL_AUTHFAILURE_SUFF = 63, /* SENDMAIL_AUTHFAILURE_SUFF  */
  YYSYMBOL_POSTFIX_NO_AUTH_PREF = 64,      /* POSTFIX_NO_AUTH_PREF  */
  YYSYMBOL_POSTFIX_SASL_LOGINERR_PREF = 65, /* POSTFIX_SASL_LOGINERR_PREF  */
  YYSYMBOL_POSTFIX_SASL_LOGINERR_SUFF = 66, /* POSTFIX_SASL_LOGINERR_SUFF  */
  YYSYMBOL_POSTFIX_GREYLIST = 67,          /* POSTFIX_GREYLIST  */
  YYSYMBOL_POSTFIX_GREYLIST_SUFF = 68,     /* POSTFIX_GREYLIST_SUFF  */
  YYSYMBOL_POSTSCREEN_PREF = 69,           /* POSTSCREEN_PREF  */
  YYSYMBOL_POSTSCREEN_SUFF = 70,           /* POSTSCREEN_SUFF  */
  YYSYMBOL_FREEBSDFTPD_LOGINERR_PREF = 71, /* FREEBSDFTPD_LOGINERR_PREF  */
  YYSYMBOL_FREEBSDFTPD_LOGINERR_SUFF = 72, /* FREEBSDFTPD_LOGINERR_SUFF  */
  YYSYMBOL_PROFTPD_LOGINERR_PREF = 73,     /* PROFTPD_LOGINERR_PREF  */
  YYSYMBOL_PROFTPD_LOGINERR_SUFF = 74,     /* PROFTPD_LOGINERR_SUFF  */
  YYSYMBOL_PUREFTPD_LOGINERR_PREF = 75,    /* PUREFTPD_LOGINERR_PREF  */
  YYSYMBOL_PUREFTPD_LOGINERR_SUFF = 76,    /* PUREFTPD_LOGINERR_SUFF  */
  YYSYMBOL_VSFTPD_LOGINERR_PREF = 77,      /* VSFTPD_LOGINERR_PREF  */
  YYSYMBOL_VSFTPD_LOGINERR_SUFF = 78,      /* VSFTPD_LOGINERR_SUFF  */
  YYSYMBOL_COCKPIT_AUTHFAIL_PREF = 79,     /* COCKPIT_AUTHFAIL_PREF  */
  YYSYMBOL_COCKPIT_AUTHFAIL_SUFF = 80,     /* COCKPIT_AUTHFAIL_SUFF  */
  YYSYMBOL_CLF_REQUEST_PREF = 81,          /* CLF_REQUEST_PREF  */
  YYSYMBOL_CLF_UNAUTHOIRIZED_PREF = 82,    /* CLF_UNAUTHOIRIZED_PREF  */
  YYSYMBOL_CLF_UNAUTHOIRIZED_SUFF = 83,    /* CLF_UNAUTHOIRIZED_SUFF  */
  YYSYMBOL_CLFWEBPROBES_BOTSEARCH_SUFF = 84, /* CLFWEBPROBES_BOTSEARCH_SUFF  */
  YYSYMBOL_CLF_LOGIN_URL_SUFF = 85,        /* CLF_LOGIN_URL_SUFF  */
  YYSYMBOL_OPENSMTPD_FAILED_CMD_PREF = 86, /* OPENSMTPD_FAILED_CMD_PREF  */
  YYSYMBOL_OPENSMTPD_AUTHFAIL_SUFF = 87,   /* OPENSMTPD_AUTHFAIL_SUFF  */
  YYSYMBOL_OPENSMTPD_UNSUPPORTED_CMD_SUFF = 88, /* OPENSMTPD_UNSUPPORTED_CMD_SUFF  */
  YYSYMBOL_COURIER_AUTHFAIL_PREF = 89,     /* COURIER_AUTHFAIL_PREF  */
  YYSYMBOL_OPENVPN_TLS_ERR_SUFF = 90,      /* OPENVPN_TLS_ERR_SUFF  */
  YYSYMBOL_GITEA_ERR_PREF = 91,            /* GITEA_ERR_PREF  */
  YYSYMBOL_GITEA_ERR_SUFF = 92,            /* GITEA_ERR_SUFF  */
  YYSYMBOL_93_ = 93,                       /* '%'  */
  YYSYMBOL_94_ = 94,                       /* '['  */
  YYSYMBOL_95_ = 95,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 96,                  /* $accept  */
  YYSYMBOL_text = 97,                      /* text  */
  YYSYMBOL_log_prefix = 98,                /* log_prefix  */
  YYSYMBOL_syslogent = 99,                 /* syslogent  */
  YYSYMBOL_multilogent = 100,              /* multilogent  */
  YYSYMBOL_metalogent = 101,               /* metalogent  */
  YYSYMBOL_socklogent = 102,               /* socklogent  */
  YYSYMBOL_busyboxent = 103,               /* busyboxent  */
  YYSYMBOL_repetition_suffix = 104,        /* repetition_suffix  */
  YYSYMBOL_msg_single = 105,               /* msg_single  */
  YYSYMBOL_addr = 106,                     /* addr  */
  YYSYMBOL_sshmsg = 107,                   /* sshmsg  */
  YYSYMBOL_ssh_illegaluser = 108,          /* ssh_illegaluser  */
  YYSYMBOL_ssh_authfail = 109,             /* ssh_authfail  */
  YYSYMBOL_ssh_noidentifstring = 110,      /* ssh_noidentifstring  */
  YYSYMBOL_ssh_badprotocol = 111,          /* ssh_badprotocol  */
  YYSYMBOL_ssh_badkex = 112,               /* ssh_badkex  */
  YYSYMBOL_sshguardmsg = 113,              /* sshguardmsg  */
  YYSYMBOL_dovecotmsg = 114,               /* dovecotmsg  */
  YYSYMBOL_uwimapmsg = 115,                /* uwimapmsg  */
  YYSYMBOL_cyrusimapmsg = 116,             /* cyrusimapmsg  */
  YYSYMBOL_cucipopmsg = 117,               /* cucipopmsg  */
  YYSYMBOL_eximmsg = 118,                  /* eximmsg  */
  YYSYMBOL_sendmailmsg = 119,              /* sendmailmsg  */
  YYSYMBOL_postfixmsg = 120,               /* postfixmsg  */
  YYSYMBOL_freebsdftpdmsg = 121,           /* freebsdftpdmsg  */
  YYSYMBOL_proftpdmsg = 122,               /* proftpdmsg  */
  YYSYMBOL_pureftpdmsg = 123,              /* pureftpdmsg  */
  YYSYMBOL_vsftpdmsg = 124,                /* vsftpdmsg  */
  YYSYMBOL_cockpitmsg = 125,               /* cockpitmsg  */
  YYSYMBOL_clfunauhtdmsg = 126,            /* clfunauhtdmsg  */
  YYSYMBOL_clfwebprobesmsg = 127,          /* clfwebprobesmsg  */
  YYSYMBOL_clfcmsmsg = 128,                /* clfcmsmsg  */
  YYSYMBOL_opensmtpdmsg = 129,             /* opensmtpdmsg  */
  YYSYMBOL_couriermsg = 130,               /* couriermsg  */
  YYSYMBOL_openvpnmsg = 131,               /* openvpnmsg  */
  YYSYMBOL_giteamsg = 132                  /* giteamsg  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  117
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   247

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  167

#define YYMAXUTOK   347


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    93,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   118,   118,   119,   123,   124,   125,   126,   127,   128,
     133,   134,   135,   136,   141,   145,   150,   151,   156,   159,
     161,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   190,   194,   198,   202,   212,   214,   215,   216,
     217,   222,   223,   225,   229,   230,   231,   232,   236,   237,
     238,   239,   243,   247,   252,   253,   258,   263,   267,   272,
     277,   278,   282,   283,   287,   288,   289,   290,   295,   300,
     305,   310,   315,   316,   321,   326,   331,   336,   337,   342,
     347,   348,   353,   354,   355,   356
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IPv4", "IPv6",
  "HOSTADDR", "WORD", "INTEGER", "SYSLOG_BANNER_PID", "SOCKLOG_BANNER_PID",
  "BUSYBOX_SYSLOG_BANNER_PID", "SYSLOG_BANNER", "TIMESTAMP_SYSLOG",
  "TIMESTAMP_ISO8601", "TIMESTAMP_TAI64", "AT_TIMESTAMP_TAI64",
  "RFC_5234_BANNER", "METALOG_BANNER", "SOCKLOG_BANNER", "REPETITIONS",
  "HTTP_REQUEST", "HTTP_VERSION", "HTTP_REDIRECT", "HTTP_AUTHFAIL",
  "HTTP_CLIERROR", "HTTP_BOTSEARCH_WEBMAIL", "HTTP_BOTSEARCH_PHPMYADMIN",
  "HTTP_BOTSEARCH_WORDPRESS", "HTTP_BOTSEARCH_JOOMLA", "HTTP_BOTSEARCH",
  "SSH_INVALUSERPREF", "SSH_NOTALLOWEDPREF", "SSH_NOTALLOWEDSUFF",
  "SSH_LOGINERR_PREF", "SSH_LOGINERR_PAM", "SSH_VIA", "SSH_MAXAUTH",
  "SSH_ADDR_SUFF", "SSH_NOIDENTIFSTR", "SSH_BADPROTOCOLIDENTIF",
  "SSH_BADPROTOCOLIDENTIF_SUFF", "SSH_BADKEX_PREF", "SSH_BADKEX_SUFF",
  "SSH_DISCONNECT_PREF", "SSH_CONNECTION_CLOSED", "SSH_PREAUTH_SUFF",
  "SSHGUARD_ATTACK_PREF", "SSHGUARD_ATTACK_SUFF", "SSHGUARD_BLOCK_PREF",
  "SSHGUARD_BLOCK_SUFF", "DOVECOT_IMAP_LOGINERR_PREF",
  "DOVECOT_IMAP_LOGINERR_SUFF", "UWIMAP_LOGINERR",
  "CYRUSIMAP_SASL_LOGINERR_PREF", "CYRUSIMAP_SASL_LOGINERR_SUFF",
  "CUCIPOP_AUTHFAIL", "EXIM_ESMTP_AUTHFAIL_PREF",
  "EXIM_ESMTP_AUTHFAIL_SUFF", "EXIM_ESMTP_LOGINFAIL_PREF",
  "EXIM_ESMTP_LOGINFAIL_SUFF", "SENDMAIL_RELAYDENIED_PREF",
  "SENDMAIL_RELAYDENIED_SUFF", "SENDMAIL_AUTHFAILURE_PREF",
  "SENDMAIL_AUTHFAILURE_SUFF", "POSTFIX_NO_AUTH_PREF",
  "POSTFIX_SASL_LOGINERR_PREF", "POSTFIX_SASL_LOGINERR_SUFF",
  "POSTFIX_GREYLIST", "POSTFIX_GREYLIST_SUFF", "POSTSCREEN_PREF",
  "POSTSCREEN_SUFF", "FREEBSDFTPD_LOGINERR_PREF",
  "FREEBSDFTPD_LOGINERR_SUFF", "PROFTPD_LOGINERR_PREF",
  "PROFTPD_LOGINERR_SUFF", "PUREFTPD_LOGINERR_PREF",
  "PUREFTPD_LOGINERR_SUFF", "VSFTPD_LOGINERR_PREF", "VSFTPD_LOGINERR_SUFF",
  "COCKPIT_AUTHFAIL_PREF", "COCKPIT_AUTHFAIL_SUFF", "CLF_REQUEST_PREF",
  "CLF_UNAUTHOIRIZED_PREF", "CLF_UNAUTHOIRIZED_SUFF",
  "CLFWEBPROBES_BOTSEARCH_SUFF", "CLF_LOGIN_URL_SUFF",
  "OPENSMTPD_FAILED_CMD_PREF", "OPENSMTPD_AUTHFAIL_SUFF",
  "OPENSMTPD_UNSUPPORTED_CMD_SUFF", "COURIER_AUTHFAIL_PREF",
  "OPENVPN_TLS_ERR_SUFF", "GITEA_ERR_PREF", "GITEA_ERR_SUFF", "'%'", "'['",
  "']'", "$accept", "text", "log_prefix", "syslogent", "multilogent",
  "metalogent", "socklogent", "busyboxent", "repetition_suffix",
  "msg_single", "addr", "sshmsg", "ssh_illegaluser", "ssh_authfail",
  "ssh_noidentifstring", "ssh_badprotocol", "ssh_badkex", "sshguardmsg",
  "dovecotmsg", "uwimapmsg", "cyrusimapmsg", "cucipopmsg", "eximmsg",
  "sendmailmsg", "postfixmsg", "freebsdftpdmsg", "proftpdmsg",
  "pureftpdmsg", "vsftpdmsg", "cockpitmsg", "clfunauhtdmsg",
  "clfwebprobesmsg", "clfcmsmsg", "opensmtpdmsg", "couriermsg",
  "openvpnmsg", "giteamsg", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,    37,    91,    93
};
#endif

#define YYPACT_NINF (-81)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      76,   -81,   -80,   -81,   -81,   -81,   -81,   -81,    24,   -81,
     -81,   -81,   -81,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,    36,    36,    36,   -61,    36,    36,    36,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
      36,    36,    36,   -47,    31,    36,    48,   153,   -81,   -81,
     -81,   -81,   -81,   -81,   -44,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,    43,   -81,    13,    19,    15,    18,    17,    20,    16,
      21,    10,    14,    11,    12,     9,    36,     8,   -81,     7,
       6,     5,     4,   -27,     3,     2,     1,     0,    -1,    -2,
      -3,    -4,   -45,    36,    36,   -15,   -17,   -81,    63,   -40,
      22,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,    -7,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,    -5,    23,   -81,    26,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,    29,   -81,   -81
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    42,    43,    45,    11,    17,    18,    10,    12,    14,
       6,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       7,     8,     9,     3,     0,    21,    46,    47,    48,    49,
      50,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,    13,    51,     0,     0,    55,     0,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,    92,     0,     1,    19,     0,
       0,    90,    44,    52,    53,    54,    56,    57,    59,    62,
      63,    60,    61,    64,    65,    66,     0,    68,    70,    71,
      72,    73,    75,    74,    76,    77,    78,    79,    80,    81,
      82,    87,    88,     0,     0,    93,     0,    20,     2,    85,
      86,    84,    67,    89,    94,    91,    95
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,    49,
     -13,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    46,    47,    48,    49,    50,    51,    52,   158,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    81,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      82,   115,   116,    96,     1,     2,     3,   119,   120,     1,
       2,     3,   151,   152,   159,   160,   121,   113,   117,   122,
     123,   124,   125,   126,   127,   131,   129,   128,   133,   132,
     135,   134,   137,   130,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   155,   156,     1,
       2,     3,   157,   136,     4,     5,     6,     7,   162,     8,
     163,     9,    10,    11,    12,     0,   118,     0,     0,     0,
     153,   154,     0,     0,     0,   161,    13,    14,     0,    15,
      16,     0,    17,     0,    18,    19,   165,    20,   164,    21,
      22,   166,    23,     0,    24,   114,    25,     0,    26,    27,
       0,    28,    29,     0,    30,     0,    31,     0,    32,     0,
      33,    34,     0,    35,     0,    36,     0,    37,     0,    38,
       0,    39,     0,    40,     0,    41,     1,     2,     3,     0,
       0,     0,    42,     0,     0,    43,     0,    44,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,     0,    15,    16,     0,    17,
       0,    18,    19,     0,    20,     0,    21,    22,     0,    23,
       0,    24,     0,    25,     0,    26,    27,     0,    28,    29,
       0,    30,     0,    31,     0,    32,     0,    33,    34,     0,
      35,     0,    36,     0,    37,     0,    38,     0,    39,     0,
      40,     0,    41,     0,     0,     0,     0,     0,     0,    42,
       0,     0,    43,     0,    44,     0,     0,    45
};

static const yytype_int8 yycheck[] =
{
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    93,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
       6,    44,    45,    94,     3,     4,     5,    81,    82,     3,
       4,     5,    87,    88,    84,    85,    90,    94,     0,     6,
      37,    32,    37,    35,    37,    45,    40,    37,    47,    45,
      51,    49,    54,    42,    57,    59,    61,    63,    95,    66,
      68,    70,    72,    74,    76,    78,    80,    92,    95,     3,
       4,     5,    19,    96,     8,     9,    10,    11,    95,    13,
      95,    15,    16,    17,    18,    -1,    47,    -1,    -1,    -1,
     113,   114,    -1,    -1,    -1,    83,    30,    31,    -1,    33,
      34,    -1,    36,    -1,    38,    39,    90,    41,    95,    43,
      44,    92,    46,    -1,    48,    94,    50,    -1,    52,    53,
      -1,    55,    56,    -1,    58,    -1,    60,    -1,    62,    -1,
      64,    65,    -1,    67,    -1,    69,    -1,    71,    -1,    73,
      -1,    75,    -1,    77,    -1,    79,     3,     4,     5,    -1,
      -1,    -1,    86,    -1,    -1,    89,    -1,    91,    -1,    -1,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    33,    34,    -1,    36,
      -1,    38,    39,    -1,    41,    -1,    43,    44,    -1,    46,
      -1,    48,    -1,    50,    -1,    52,    53,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    62,    -1,    64,    65,    -1,
      67,    -1,    69,    -1,    71,    -1,    73,    -1,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    89,    -1,    91,    -1,    -1,    94
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     8,     9,    10,    11,    13,    15,
      16,    17,    18,    30,    31,    33,    34,    36,    38,    39,
      41,    43,    44,    46,    48,    50,    52,    53,    55,    56,
      58,    60,    62,    64,    65,    67,    69,    71,    73,    75,
      77,    79,    86,    89,    91,    94,    97,    98,    99,   100,
     101,   102,   103,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,    93,     6,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,    94,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,    94,    94,   106,   106,     0,   105,    81,
      82,    90,     6,    37,    32,    37,    35,    37,    37,    40,
      42,    45,    45,    47,    49,    51,   106,    54,    57,    59,
      61,    63,    95,    66,    68,    70,    72,    74,    76,    78,
      80,    87,    88,   106,   106,    92,    95,    19,   104,    84,
      85,    83,    95,    95,    95,    90,    92
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    98,    98,    98,    98,    98,    98,
      99,    99,    99,    99,   100,   101,   102,   102,   103,   104,
     104,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   106,   106,   106,   106,   107,   107,   107,   107,
     107,   108,   108,   108,   109,   109,   109,   109,   110,   110,
     110,   110,   111,   112,   113,   113,   114,   115,   116,   117,
     118,   118,   119,   119,   120,   120,   120,   120,   121,   122,
     123,   124,   125,   125,   126,   127,   128,   129,   129,   130,
     131,   131,   132,   132,   132,   132
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     3,     2,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     3,     4,
       2,     4,     2,     3,     4,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (attack, YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, attack); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, attack_t *attack)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (attack);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, attack_t *attack)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, attack);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule, attack_t *attack)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)], attack);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, attack); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, attack_t *attack)
{
  YYUSE (yyvaluep);
  YYUSE (attack);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (attack_t *attack)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize;

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yynerrs = 0;
  yystate = 0;
  yyerrstatus = 0;

  yystacksize = YYINITDEPTH;
  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;


  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 21:
#line 165 "attack_parser.y"
                      { attack->service = SERVICES_SSH; }
#line 1547 "attack_parser.c"
    break;

  case 22:
#line 166 "attack_parser.y"
                      { attack->service = SERVICES_SSHGUARD; }
#line 1553 "attack_parser.c"
    break;

  case 23:
#line 167 "attack_parser.y"
                      { attack->service = SERVICES_DOVECOT; }
#line 1559 "attack_parser.c"
    break;

  case 24:
#line 168 "attack_parser.y"
                      { attack->service = SERVICES_UWIMAP; }
#line 1565 "attack_parser.c"
    break;

  case 25:
#line 169 "attack_parser.y"
                      { attack->service = SERVICES_CYRUSIMAP; }
#line 1571 "attack_parser.c"
    break;

  case 26:
#line 170 "attack_parser.y"
                      { attack->service = SERVICES_CUCIPOP; }
#line 1577 "attack_parser.c"
    break;

  case 27:
#line 171 "attack_parser.y"
                      { attack->service = SERVICES_EXIM; }
#line 1583 "attack_parser.c"
    break;

  case 28:
#line 172 "attack_parser.y"
                      { attack->service = SERVICES_SENDMAIL; }
#line 1589 "attack_parser.c"
    break;

  case 29:
#line 173 "attack_parser.y"
                      { attack->service = SERVICES_POSTFIX; }
#line 1595 "attack_parser.c"
    break;

  case 30:
#line 174 "attack_parser.y"
                      { attack->service = SERVICES_FREEBSDFTPD; }
#line 1601 "attack_parser.c"
    break;

  case 31:
#line 175 "attack_parser.y"
                      { attack->service = SERVICES_PROFTPD; }
#line 1607 "attack_parser.c"
    break;

  case 32:
#line 176 "attack_parser.y"
                      { attack->service = SERVICES_PUREFTPD; }
#line 1613 "attack_parser.c"
    break;

  case 33:
#line 177 "attack_parser.y"
                      { attack->service = SERVICES_VSFTPD; }
#line 1619 "attack_parser.c"
    break;

  case 34:
#line 178 "attack_parser.y"
                      { attack->service = SERVICES_COCKPIT; }
#line 1625 "attack_parser.c"
    break;

  case 35:
#line 179 "attack_parser.y"
                      { attack->service = SERVICES_CLF_UNAUTH; }
#line 1631 "attack_parser.c"
    break;

  case 36:
#line 180 "attack_parser.y"
                      { attack->service = SERVICES_CLF_PROBES; }
#line 1637 "attack_parser.c"
    break;

  case 37:
#line 181 "attack_parser.y"
                      { attack->service = SERVICES_CLF_LOGIN_URL; }
#line 1643 "attack_parser.c"
    break;

  case 38:
#line 182 "attack_parser.y"
                      { attack->service = SERVICES_OPENSMTPD; }
#line 1649 "attack_parser.c"
    break;

  case 39:
#line 183 "attack_parser.y"
                      { attack->service = SERVICES_COURIER; }
#line 1655 "attack_parser.c"
    break;

  case 40:
#line 184 "attack_parser.y"
                      { attack->service = SERVICES_OPENVPN; }
#line 1661 "attack_parser.c"
    break;

  case 41:
#line 185 "attack_parser.y"
                      { attack->service = SERVICES_GITEA; }
#line 1667 "attack_parser.c"
    break;

  case 42:
#line 190 "attack_parser.y"
                    {
                        attack->address.kind = ADDRKIND_IPv4;
                        strcpy(attack->address.value, (yyvsp[0].str));
                    }
#line 1676 "attack_parser.c"
    break;

  case 43:
#line 194 "attack_parser.y"
                    {
                        attack->address.kind = ADDRKIND_IPv6;
                        strcpy(attack->address.value, (yyvsp[0].str));
                    }
#line 1685 "attack_parser.c"
    break;

  case 44:
#line 198 "attack_parser.y"
                    {   /* IPv6 address with interface name */
                        attack->address.kind = ADDRKIND_IPv6;
                        strcpy(attack->address.value, (yyvsp[-2].str));
                    }
#line 1694 "attack_parser.c"
    break;

  case 45:
#line 202 "attack_parser.y"
                    {
                        if (!attack_from_hostname(attack, (yyvsp[0].str))) {
                            YYABORT;
                        }
                    }
#line 1704 "attack_parser.c"
    break;

  case 61:
#line 239 "attack_parser.y"
                                                { attack->dangerousness = 2; }
#line 1710 "attack_parser.c"
    break;


#line 1714 "attack_parser.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (attack, YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, attack);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, attack);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (attack, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, attack);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, attack);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 359 "attack_parser.y"


static void yyerror(__attribute__((unused)) attack_t *a,
    __attribute__((unused)) const char *s) { /* do nothing */ }

int parse_line(char *str, attack_t *attack) {

    /* TODO: reduce danger for SERVICES_CLF_PROBES */
    attack->dangerousness = DEFAULT_ATTACKS_DANGEROUSNESS;

    scanner_init(str);
    int ret = yyparse(attack);
    scanner_fin();

    return ret;
}
