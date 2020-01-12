#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>

char* implode(char* result, char* phrase)
{
    int i = 0;
    int j = 0;

    while(result[i] != 0)
    {
        i++;
    }
    result[i] = ' ';
    while(phrase[j] != 0)
    {
        result[i+1] = phrase[j];
        i++;
        j++;
    }

    return result;
}

char* lcfirst(char* str)
{
    *str = *str + ('a' - 'A');
    return str;
}

char* ltrim(char* phrase, char* phrase2)
{
    int j = 0;
    int i = 0;
    while(phrase[i] == ' ')
    {
        i++;
    }

    while(phrase[i] != '\0')
    {
        phrase2[j] = phrase[i];
        i++;
        j++;
    }
    phrase2[j] = '\0';

    return phrase2;
}

char* nl2br(char* phrase)
{
    strcat(phrase, "\n");

    return phrase;
}


char* rtrim(char* phrase, char* phrase2)
{
int j = 0;
int i = 0;
int h = strlen(phrase) - 1;
while(phrase[h] == ' ')
{
  h--;
}
while(phrase[i] != phrase[h])
{
  phrase2[j] = phrase[i];
  i++;
  j++;
}
phrase2[j] = phrase[h];
phrase2[j+1] = '\0';

return phrase2;
}


char* str_pad(char* phrase, char* full)
{
    int i = 0;
    char blanc[] = "=";
    strcpy(full, phrase);
    while(phrase[i] != '\0')
    {
        i++;
    }
    while(i != 10)
    {
        full[i] = blanc[0];
        i++;
    }

    return full;
}

char* str_repeat(char* jacko)
{
    char repeat[20];
    strcpy(repeat, jacko);
    for(int i = 0 ; i != 2 ; i++)
    {
        strcat(jacko, repeat);
    }

    return jacko;
}


char* str_rto13(char* code)
{
for(int i = 0 ; code[i] != '\0' ; i++){
    if(code[i] >= 'a' && code[i] <= 'm')
    {
        code[i] = code[i] + 13;
    }else{
    code[i] = code[i] - 13;
    }
}

return code;
}


char* str_shuffle(char* phrase)
{
    int i = 0;
    int j = 0;
while(phrase[i] != '\0')
{
    i++;
}
while(phrase[j] != '\0')
{
    phrase[j] = phrase[rand()%i];
    j++;
}

return phrase;
}


int* str_word_count(char* phrase, int* count)
{
int j = 1;
for (int i = 0; i != strlen(phrase); i++){
 if (phrase[i] == ' ' || phrase[i] == '\t' || phrase[i] == '\n' || phrase[i] == '\x0B')
 {
   j++;
 }
}

*count = j;

return count;
}


char* str_rev(char* phrase, char* phrase2)
{
  int j = 0;
  int i = 0;
  while(phrase[j] != '\0')
  {
    j++;
  }
while(phrase[i] != '\0')
{
  phrase2[j-1] = phrase[i];
  i++;
  j--;
}
phrase2[i] = '\0';

  return phrase2;
}


char* str_tolower(char* caps)
{
for(int i = 0 ; caps[i] != '\0' ; i++)
{
  if(caps[i] >= 'A' && caps[i] <= 'Z')
  {
    caps[i] = caps[i] + 32;
  }
}

  return caps;
}


char* str_toupper(char* lock)
{
for(int i = 0 ; lock[i] != '\0' ; i++)
{
  if(lock[i] >= 'a' && lock[i] <= 'z')
  {
    lock[i] = lock[i] - 32;
  }
}

  return lock;
}


char*str_str(char* phrase)
{
for(int i = 0 ; phrase[i] != '\0' ; i++)
{
  if(phrase[i] == 'H')
  {
    phrase[i] = 'B';
  }
  if(phrase[i] == 'o')
  {
    phrase[i] = 'a';
  }
}

  return phrase;
}


char* trim(char* phrase, char* phrase2)
{
int j = 0;
int i = 0;
int h = strlen(phrase) - 1;
while(phrase[i] == ' ')
{
  i++;
}
while(phrase[h] == ' ')
{
  h--;
}
while(phrase[i] != phrase[h])
{
  phrase2[j] = phrase[i];
  i++;
  j++;
}
phrase2[j] = phrase[h];
phrase2[j+1] = '\0';

  return phrase2;
}


char* ucfirst(char* phrase)
{
*phrase = *phrase - 32;

  return phrase;
}


char* ucwords(char* phrase)
{
phrase[0] = phrase[0] - 32;
for(int i = 0 ; phrase[i] != '\0' ; i++)
{
  if(phrase[i] == ' ')
  {
    phrase[i+1] = phrase[i+1] -32;
  }
}

  return phrase;
}


void wordwrap(char* phrase, char* phrase1, char* phrase2)
{
int i = 0;
int j = 0;
while(phrase[i] != ' ')
{
  phrase1[i] = phrase[i];
  i++;
}
phrase1[i] = '\0';

while(phrase[i] != '\0')
{
  phrase2[j] = phrase[i+1];
  i++;
  j++;
}
phrase2[j] = '\0';

}
