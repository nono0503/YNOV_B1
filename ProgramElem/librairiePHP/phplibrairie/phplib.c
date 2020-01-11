#include <stdio.h>
#include <string.h>
#include <time.h>
#include <math.h>


void explode(int delimiter, char* phrase, char* mot, char* mot2)
{
int i = 0;
int j = 0;
while(phrase[i] != delimiter)
{
  mot[i] = phrase[i];
  i++;
}
mot[i] = '\0';

while(phrase[i] != '\0')
{
  mot2[j] = phrase[i+1];
  i++;
  j++;
}
mot2[j] = '\0';

}

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

char* number_format(int chiffre, char* format)
{
    sprintf(format, "%d", chiffre);
    char format2[20];
/*    char format3[20];
    char decimal[5];
    char centaine[5];
    char centaine1[5];
    int i = 0;
    int j = 0;
    int h = 0;

    while(format[i] != '\0')
    {
        i++;
    }

    while(format[i] != format[0])
    {
        format2[j] = format[i];
        i--;
        j++;
    }

    for(i = 0 ; i != 2 ; i++)
    {
        decimal[i] = format2[i];
    }
    decimal[i] = '.';

    for(i = 3 ; i != 5 || i != j ; i++)
    {
        centaine[h] = format2[i];
        h++;
    }
    centaine[h] = ' ';

    h = 0;
    for(i = 5 ; i != 8 || i != j ; i++)
    {
        centaine1[h] = format2[i];
        h++;
    }

    strcpy(format3, decimal);
    strcat(format3, centaine);
    strcat(format3, centaine1);


    for(j = 0 ; format3[j] != '\0' ; j++)
    {}

    for(i = 0 ; format3[j] != format3[0] ; i++)
    {
        format[i] = format3[j];
        j--;
    }
    */

    int i = 0, j = 0;
    while(format[i] != '\0')
    {
        i++;
    }

    while(format[i] != format[0])
    {
        format2[j] = format[i];
        i--;
        j++;
    }

    for(i = 0 ; format2[i] != '\0' ; i++)
    {
        if(i==2)
        {
           format2[i] = '.';
        }
        else if(i==5)
        {
            format2[i] = ' ';
        }
    }

    for(j = 0 ; format2[j] != '\0' ; j++)
    {
        format[i] = format2[j];
        i--;
    }


    return format;
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


void str_split(char* split, char* split1, char* split2, int length)
{
int i = 0;
int j = 0;
for(i = 0 ; i < length ; i++)
{
  split1[i] = split[i];
} split1[i] = '\0';
for(; i< (length * 2) ; i++)
{
  split2[j] = split[i];
  j++;
} split2[j] = '\0';

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


void str_casecmp(char* chaud, char* chaude)
{
for(int i = 0 ; chaud[i] != '\0' ; i++)
{
  if(chaud[i] >= 'A' && chaud[i] <= 'Z')
  {
    chaud[i] = chaud[i] + 32;
  }
}

for(int j = 0 ; chaude[j] != '\0' ; j++)
{
  if(chaude[j] >= 'A' && chaude[j] <= 'Z')
  {
    chaude[j] = chaude[j] + 32;
  }
}

}


int* stripos(char* phrase, char* find, int* pos)
{
int i = 0, h = 0, l = 0;
for(int v = 0 ; phrase[v] != '\0' ; v++)
{
  if(phrase[v] >= 'A' && phrase[v] <= 'Z')
  {
    phrase[v] = phrase[v] + 32;
  }
}
for(int v = 0 ; find[v] != '\0' ; v++)
{
  if(find[v] >= 'A' && find[v] <= 'Z')
  {
    find[v] = find[v] + 32;
  }
}

while(phrase[i] != '\0')
{
  if(phrase[i] == find[0])
  {
    int j = 0;
    l = i;
    while(phrase[h] == find[j] && find[j] != '\0')
    {
      h++;
      j++;
    }
  }
  i++;
}
*pos = l;

return pos;
}


char* str_rchr(char* phrase, char* phrase2, int find)
{
int i = strlen(phrase);
int j = 0;
while(phrase[i] != find){
  i--;
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


int* strripos(char* phrase, char* find, int* pos)
{
int i = strlen(phrase);
//int h = 0, l = 0;
for(int v = 0 ; phrase[v] != '\0' ; v++)
{
  if(phrase[v] >= 'A' && phrase[v] <= 'Z')
  {
    phrase[v] = phrase[v] + 32;
  }
}
for(int v = 0 ; find[v] != '\0' ; v++)
{
  if(find[v] >= 'A' && find[v] <= 'Z')
  {
    find[v] = find[v] + 32;
  }
}

/*
while(phrase[i] != phrase[0])
{
  if(phrase[i] == find[0])
  {
    int j = 0;
     l = i;
    while(phrase[h] == find[j] && find[j] != '\0')
    {
      h++;
      j++;

    }
  }
  i--;
}
*pos = l;
*/
int j = 0;
int l = 0;
char phrase2[20];
while(phrase[i] != phrase[0])
{
  phrase2[j] = phrase[i];
  j++;
  i--;
}

while(phrase2[i] != '\0')
{
  if(phrase2[i] == find[0])
  {
    int j = 0;
    int h = i;
    l = i;
    while(phrase2[h] == find[j] && find[j] != '\0')
    {
      h--;
      j++;
    }
  }
  i++;
}
*pos = strlen(phrase) - l;

  return pos;
}

int* str_rpos(char* phrase, char* find, int* pos)
{
int i = strlen(phrase);
int j = 0;
int l = 0;
char phrase2[20];
while(phrase[i] != phrase[0])
{
  phrase2[j] = phrase[i];
  j++;
  i--;
}

while(phrase2[i] != '\0')
{
  if(phrase2[i] == find[0])
  {
    int j = 0;
    int h = i;
    l = i;
    while(phrase2[h] == find[j] && find[j] != '\0')
    {
      h--;
      j++;
    }
  }
  i++;
}
*pos = strlen(phrase) - l;

  return pos;
}


char* str_tok(char* phrase, char* phrase2, int* symbole)
{
int i = 0;
while(phrase[i] != *symbole)
 {
  phrase2[i] = phrase[i];
  i++;
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


int* substr_count(char* phrase, char* phrase2, int* nb)
{
int a = 0;
for(int i = 0 ; phrase[i] != '\0' ; i++)
{
  if(phrase[i] == phrase2[0])
  {
    int j = 0;
    int h = i;
    while(phrase[h] == phrase2[j])
    {
      h++;
      j++;
      if(phrase2[j+1] == '\0')
      {
        a++;
      }
    }
  }
}
*nb = a;

  return nb;
}

char* substr_replace(char* phrase)
{
char maudit[13] = "Hell";
char phrase2[20] = "Paradis";
char origine[200] = "";
int h = 0;

for (int i = 0 ; phrase[i] != '\0' ; i++)
{
  if(phrase[i] == maudit[0])
  {
    int j = 0;
    while(phrase[i] == maudit[j])
    {
      if(maudit[j+1] == '\0')
      {
        strcat(origine, phrase2);
      }
      j++;
      i++;
    }
    strcat(origine, &phrase[i]);
  }
  if(phrase[i] != maudit[0])
  {
    strcat(origine, &phrase[i]);
  }
}
strcpy(phrase, origine);

return phrase;
}

char* sub_str(char* phrase, char* phrase2, int* start, int* taille)
{
int j = 0;
int i = *start;
while(phrase[i] != phrase[(*start + *taille )])
{
  phrase2[j] = phrase[i];
  j++;
  i++;
}
phrase2[j] = '\0';

return phrase2;
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
