#include "../libs/random_number.h"

int get_random_number( int max ) {
  time_t t;
  srand((unsigned)time(&t));      
  return( rand() % max + 1 );
}