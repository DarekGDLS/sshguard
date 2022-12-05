/* A Bison parser, made by GNU Bison 3.6.4.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 161 "attack_parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (attack_t *attack);

#endif /* !YY_YY_ATTACK_PARSER_H_INCLUDED  */
