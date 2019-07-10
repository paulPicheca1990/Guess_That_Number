#include "../libs/display_strings.h"

const char *_bar_string = "=======================================================================";
const char *_number_of_tries_string = "You have %d tries left.\nPlease enter a guess (0 to %d): ";
const char *_GUESS_OUTCOME_MESSAGES[] = {     
  "\nSorry %d is wrong. My number is less than that\n",
  "\nCongratulations! You guessed the right number.\n",
  "\nSorry %d is wrong. My number is greater than that\n",
  "\nThe answer was %d\n"
};

const char **get_outcome_messages() {
  return _GUESS_OUTCOME_MESSAGES;
}

int get_outcome_messages_size() {
  return (sizeof(_GUESS_OUTCOME_MESSAGES) / sizeof(_GUESS_OUTCOME_MESSAGES[0]) );
}
            
const char *get_number_of_tries_string() {
  return _number_of_tries_string;
}

const char *get_dividing_bar_string() {
  return _bar_string;
}

int get_outcome_index( int answer, int number ) {
  int index = 1;

  if( (answer - number) < 0 )
    index = 0;
  else if ( (answer - number) > 0 )
    index = 2;  

  return index;
}