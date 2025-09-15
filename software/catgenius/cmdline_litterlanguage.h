/* 
 * File:   cmdline_litterlanguage.h
 */

#ifndef CMDLINE_LITTERLANGUAGE_H
#define	CMDLINE_LITTERLANGUAGE_H

/* Command implementations */
int		dry_wash			(int argc,	char* argv[]);
int		wet_wash			(int argc,	char* argv[]);
int		dry_cleanup			(int argc,	char* argv[]);
int		wet_cleanup			(int argc,	char* argv[]);
int     pause_wash          (int argc, char* argv[]);
int     stop_wash           (int argc, char* argv[]);
int     status              (int argc, char* argv[]);
int     set_auto_mode       (int argc, char* argv[]);

#endif	/* CMDLINE_LITTERLANGUAGE_H */

