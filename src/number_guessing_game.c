#include "../libs/number_guessing_game.h"

void print_title() {
  printf( "%s\n%s\n%s\n", get_dividing_bar_string(), "Number Guessing Game", get_dividing_bar_string() );
}

void start_game( int answer ) {
  int number = 0, guesses = 0, not_correct = 0; 
  int last_index = get_outcome_messages_size() - 1;

  print_title();
  do {
    printf( get_number_of_tries_string(), (GUESS_LIMIT - guesses), ANSWER_MAX );
    scanf( "%d", &number );
    
    printf( get_outcome_messages()[ get_outcome_index(answer, number) ], number );
    
    not_correct = ( number != answer ) && ( guesses++ < ( GUESS_LIMIT - 1 ) ); 
  } while( not_correct );

  printf( get_outcome_messages()[ last_index ], answer);
}