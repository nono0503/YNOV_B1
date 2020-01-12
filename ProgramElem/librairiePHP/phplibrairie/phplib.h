#ifndef PHPLIB_H
#define PHPLIB_H

char* implode(char* result, char* phrase);
char* lcfirst(char* str);
char* ltrim(char* phrase, char* phrase2);
char* nl2br(char* phrase);
char* rtrim(char* phrase, char* phrase2);
char* str_pad(char* phrase, char* full);
char* str_repeat(char* jacko);
char* str_rto13(char* code);
char* str_shuffle(char* phrase);
int* str_word_count(char* phrase, int* count);
char* str_rev(char* phrase, char* phrase2);
char* str_tolower(char* caps);
char* str_toupper(char* lock);
char*str_str(char* phrase);
char* trim(char* phrase, char* phrase2);
char* ucfirst(char* phrase);
char* ucwords(char* phrase);
void wordwrap(char* phrase, char* phrase1, char* phrase2);

#endif // PHPLIB_H

