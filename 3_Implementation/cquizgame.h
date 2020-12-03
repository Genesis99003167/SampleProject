/**
* @file cquizgame.h
* playing quiz game
*
*/
#ifndef __CQUIZGAME_H__
#define __CQUIZGAME_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


void show_record();

/**
*  shows the highest score
*/
void reset_score();

/**
*  resets the score
*/
void help();


/**
* rules of the game is there
*/
void edit_score(float score, char plnm[20]);
/**
*  edits the final score
* @param[in] score
* @param[in] plnm
*/

#endif  /* #define __CQUIZGAME_H__ */
