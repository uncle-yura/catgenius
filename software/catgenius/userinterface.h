/******************************************************************************/
/* File    :	userinterface.h						      */
/* Function:	Definition of ports, pins and their functions.		      */
/* Author  :	Robert Delien						      */
/*		Copyright (C) 2010, Clockwork Engineering		      */
/******************************************************************************/

#ifndef USERINTERFACE_H				/* Include file already compiled? */
#define USERINTERFACE_H


/* Generic */
void		userinterface_init	(unsigned char	flags) ;
void		userinterface_work	(void) ;
unsigned char get_error         (void);
unsigned char get_mode          (void);
void          set_mode		    (unsigned char mode);

#endif /* USERINTERFACE_H */
