#ifndef __DISPLAY_STRINGS_H__
#define __DISPLAY_STRING_H__

extern const char *_bar_string;
extern const char *_number_of_tries_string;
extern const char *_GUESS_OUTCOME_MESSAGES[];



const char *get_dividing_bar_string();
const char *get_number_of_tries_string();
const char **get_outcome_messages();

int get_outcome_messages_size();
int get_outcome_index( int answer, int number );

#endif