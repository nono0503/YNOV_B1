#ifndef PHPLIB_H
#define PHPLIB_H

void explode(int delimiter, char* phrase, char* mot, char* mot2);
char* implode(char* result, char* phrase);
char* lcfirst(char* str);
char* ltrim(char* phrase, char* phrase2);
char* nl2br(char* phrase);
char* number_format(int chiffre, char* format);
char* rtrim(char* phrase, char* phrase2);
char* str_pad(char* phrase, char* full);
char* str_repeat(char* jacko);
char* str_rto13(char* code);
char* str_shuffle(char* phrase);
int* str_word_count(char* phrase, int* count);
void str_split(char* split, char* split1, char* split2, int length);
void str_casecmp(char* chaud, char* chaude);
int* stripos(char* phrase, char* find, int* pos);
char* str_rchr(char* phrase, char* phrase2, int find);
char* str_rev(char* phrase, char* phrase2);
int* strripos(char* phrase, char* find, int* pos);
int* str_rpos(char* phrase, char* find, int* pos);
char* str_tok(char* phrase, char* phrase2, int* symbole);
char* str_tolower(char* caps);
char* str_toupper(char* lock);
char*str_str(char* phrase);
int* substr_count(char* phrase, char* phrase2, int* nb);
char* substr_replace(char* phrase);
char* sub_str(char* phrase, char* phrase2, int* start, int* taille);
char* trim(char* phrase, char* phrase2);
char* ucfirst(char* phrase);
char* ucwords(char* phrase);
void wordwrap(char* phrase, char* phrase1, char* phrase2);

#endif // PHPLIB_H

