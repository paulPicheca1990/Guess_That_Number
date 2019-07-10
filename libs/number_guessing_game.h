#ifndef __NUMBER_GUESSING_GAME_H__
#define __NUMBER_GUESSING_GAME_H__

#include <stdio.h>
#include "display_strings.h"

static const int GUESS_LIMIT = 5;
static const int ANSWER_MAX = 20;

void print_title();

void start_game( int answer );

#endif