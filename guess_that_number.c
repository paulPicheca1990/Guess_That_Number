#include <stdio.h>
#include <stdlib.h>

#include "./libs/random_number.h"
#include "./libs/number_guessing_game.h"

int main( int argc, char *argv[] ){  
  start_game( get_random_number(ANSWER_MAX) );
  return 0;
} 