
/******************************************************************************/
/* File    :	cmdline_litterlanguage.c						      */
/* Function:	Command line module					   */
/******************************************************************************/
#include <htc.h>
#include <stdio.h>
#include <string.h>

#include "cmdline_litterlanguage.h"
#include "../common/hardware.h"				/* Flexible hardware configuration */

#ifdef HAS_COMMANDLINE
#include "../common/cmdline.h"
#include "litterlanguage.h"
#include "userinterface.h"
#endif /* HAS_COMMANDLINE */

#ifdef HAS_COMMANDLINE
int dry_wash (int argc, char* argv[])
{
	if (argc > 1)
		return ERR_SYNTAX;

	printf("Dry Wash\n");
    litterlanguage_start(0);

	return ERR_OK;
}

int wet_wash (int argc, char* argv[])
{
	if (argc > 1)
		return ERR_SYNTAX;

	printf("Wet wash\n");
    litterlanguage_start(1);

	return ERR_OK;
}

int dry_cleanup (int argc, char* argv[])
{
	if (argc > 1)
		return ERR_SYNTAX;

	printf("Dry Cleanup\n");
    litterlanguage_cleanup(0);

	return ERR_OK;
}

int wet_cleanup (int argc, char* argv[])
{
	if (argc > 1)
		return ERR_SYNTAX;

	printf("Wet Cleanup\n");
    litterlanguage_cleanup(1);

	return ERR_OK;
}

int pause_wash (int argc, char* argv[])
{
	if (argc > 1)
		return ERR_SYNTAX;

	printf("Pause wash\n");
    litterlanguage_pause(!litterlanguage_paused());

	return ERR_OK;
}

int stop_wash (int argc, char* argv[])
{
	if (argc > 1)
		return ERR_SYNTAX;

	printf("Stop wash\n");
    litterlanguage_stop();

	return ERR_OK;
}

int set_auto_mode (int argc, char* argv[])
{
    unsigned char	mode  = 0;
	if (argc > 2)
		return ERR_SYNTAX;

    mode = argv[1][0] - '0';
	printf("Set mode: %d\n", mode);
    set_mode(mode);

	return ERR_OK;
}

int status (int argc, char* argv[])
{
	if (argc > 1)
		return ERR_SYNTAX;

	printf("Status:%d,%d,%d\n", litterlanguage_running(), get_error(), get_mode());
    
	return ERR_OK;
}

#endif /* HAS_COMMANDLINE */
