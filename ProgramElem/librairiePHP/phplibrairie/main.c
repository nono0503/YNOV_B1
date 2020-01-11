#include <stdio.h>
#include <string.h>
#include "php.h"

/*
http://php.net/manual/fr/function.explode.php
http://php.net/manual/fr/function.implode.php
http://php.net/manual/fr/function.lcfirst.php
http://php.net/manual/fr/function.ltrim.php
http://php.net/manual/fr/function.nl2br.php
http://php.net/manual/fr/function.number-format.php
http://php.net/manual/fr/function.rtrim.php
http://php.net/manual/fr/function.str-pad.php
http://php.net/manual/fr/function.str-repeat.php
http://php.net/manual/fr/function.str-rot13.php
http://php.net/manual/fr/function.str-shuffle.php
http://php.net/manual/fr/function.str-split.php
http://php.net/manual/fr/function.str-word-count.php
http://php.net/manual/fr/function.strcasecmp.php
http://php.net/manual/fr/function.stripos.php
http://php.net/manual/fr/function.strrchr.php
http://php.net/manual/fr/function.strrev.php
http://php.net/manual/fr/function.strripos.php
http://php.net/manual/fr/function.strrpos.php
http://php.net/manual/fr/function.strtok.php
http://php.net/manual/fr/function.strtolower.php
http://php.net/manual/fr/function.strtoupper.php
http://php.net/manual/fr/function.strtr.php
http://php.net/manual/fr/function.substr-count.php
http://php.net/manual/fr/function.substr-replace.php
http://php.net/manual/fr/function.substr.php
http://php.net/manual/fr/function.trim.php
http://php.net/manual/fr/function.ucfirst.php
http://php.net/manual/fr/function.ucwords.php
http://php.net/manual/fr/function.wordwrap.php

*/


int main()
{
    printf("Hello World!\n\n");
    printf("===== Fonction de Louis Lecchi =====\n\n");
    int nbPoint = 0;


//http://php.net/manual/fr/function.explode.php
    char phrase[20] = "Hello,World";
    char phrase2[20], phrase3[20];
    explode(',', phrase, phrase2, phrase3);
    if(strcmp(phrase2, "Hello") == 0)
     {
       if(strcmp(phrase3, "World") == 0)
        printf("explode is ok\n");
        nbPoint ++;
     }
     else
    {
        printf("explode Down.. \n");
    }


//http://php.net/manual/fr/function.implode.php
    char faa[50] = "Bonjour";
    char faa2[25] = "monsieur";
    implode(faa, faa2);
    if(strcmp(faa, "Bonjour monsieur") == 0)
    {
        printf("implode is ok\n");
        nbPoint++;
    }
    else
    {
        printf("implode Down..\n");
    }


// http://php.net/manual/fr/function.lcfirst.php
    char foo[20] = "HelloWorld";
    lcfirst(foo);
    if(strcmp(foo, "helloWorld") == 0)
    {
        printf("lcfirst is ok\n");
        nbPoint++;
    }
    else
    {
        printf("lcfirst Down..\n");
    }


//http://php.net/manual/fr/function.ltrim.php
    char fuu[20] = "    hello";
    char fuu2[20];
    ltrim(fuu, fuu2);
    if(strcmp(fuu2, "hello") == 0)
    {
        printf("ltrim is ok\n");
        nbPoint++;
    }
    else
    {
        printf("ltrim Down..\n");
    }


//http://php.net/manual/fr/function.nl2br.php

    char fii[20] = "hello";
    nl2br(fii);
    if(strcmp(fii, "hello\n") == 0)
    {
        printf("nl2br is ok\n");
        nbPoint++;
    }
    else
    {
        printf("nl2br Down..\n");
    }


//http://php.net/manual/fr/function.number-format.php
    int nbFormat = 3643871;
    char fiii [20];
    number_format(nbFormat, fiii);
    printf("%s ",fiii);
    if(strcmp(fiii, "36 438.71") == 0)
    {
        printf("number-format is ok\n");
        nbPoint++;
    }
    else
    {
        printf("number-format Down..\n");
    }



//http://php.net/manual/fr/function.rtrim.php
    char fooo[20] = "Hello  ";
    char fooo2[20];
    rtrim(fooo, fooo2);
    if(strcmp(fooo2, "Hello") == 0)
    {
        printf("rtrim is ok\n");
        nbPoint++;
    }
    else
    {
        printf("rtrim Down..\n");
    }


//http://php.net/manual/fr/function.str-pad.php
    char faaa[20] = "Hello";
    char faaa2[20] = "x";
    str_pad(faaa, faaa2);
    if(strcmp(faaa2, "Hello=====") == 0)
    {
        printf("str-pad is ok\n");
        nbPoint++;
    }
    else
    {
        printf("str-pad Down..\n");
    }


//http://php.net/manual/fr/function.str-repeat.php
    char jacko[20] = "Hello";
    str_repeat(jacko);
    if(strcmp(jacko, "HelloHelloHello") == 0)
    {
        printf("str-repeat is ok\n");
        nbPoint++;
    }
    else
    {
        printf("str-repeat Down..\n");
    }


//http://php.net/manual/fr/function.str-rot13.php
    char code[20] = "hello";
    str_rto13(code);
    if(strcmp(code, "uryyb") == 0)
    {
        printf("str-rot13 is ok\n");
        nbPoint++;
    }
    else
    {
        printf("str-rot13 Down..\n");
    }


//http://php.net/manual/fr/function.str-shuffle.php
    char move[20] = "oui";
    str_shuffle(move);
    printf("%s ",move);
    if(strcmp(move, "oui") == 0)
    {
        printf("str-shuffle is ok\n");
        nbPoint++;
    }
    else if(strcmp(move, "oiu") == 0)
    {
        printf("str-shuffle is ok\n");
        nbPoint++;
    }
    else if(strcmp(move, "uio") == 0)
    {
        printf("str-shuffle is ok\n");
        nbPoint++;
    }
    else if(strcmp(move, "uoi") == 0)
    {
        printf("str-shuffle is ok\n");
        nbPoint++;
    }
    else if(strcmp(move, "iou") == 0)
    {
        printf("str-shuffle is ok\n");
        nbPoint++;
    }
    else if(strcmp(move, "iuo") == 0)
    {
        printf("str-shuffle is ok\n");
        nbPoint++;
    }
    else
    {
        printf("str-shuffle Down..\n");
    }


//https://www.php.net/manual/fr/function.str-split.php
    char split[20] = "hello world";
    char split1[20], split2[20];
    int length = 3;
    str_split(split, split1, split2, length);
    if(strcmp(split1, "hel") == 0)
    {
      if(strcmp(split2, "lo ") == 0)
      {
        printf("str-split is ok\n");
        nbPoint++;
      }
    }
    else
    {
        printf("str-split Down..\n");
    }


//http://php.net/manual/fr/function.str-word-count.php
    char count2[40] = "hello world\nje suis\tbeau";
    int count = 1;
    str_word_count(count2, &count);
    if(count == 5)
    {
        printf("str-word-count is ok\n");
        nbPoint++;
    }
    else
    {
        printf("str-word-count Down..\n");
    }


//http://php.net/manual/fr/function.strcasecmp.php
    char chaud[20] = "HeLlo";
    char chaude[20] = "HElLo";
    str_casecmp(chaud, chaude);
    if(strcmp(chaud, chaude) == 0)
    {
        printf("strcasecmp is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strcasecmp Down..\n");
    }


//http://php.net/manual/fr/function.stripos.php
    char oui[20] = "hellortloEo";
    char find[20] = "lOe";
    int pos = 0;
    stripos(oui, find, &pos);
    if(pos == 7)
    {
        printf("stripos is ok\n");
        nbPoint++;
    }
    else
    {
        printf("stripos Down..\n");
    }


//http://php.net/manual/fr/function.strrchr.php
    char non[20] = "hel.lo";
    char non2[20];
    int non3 = '.';
    str_rchr(non, non2, non3);
    if(strcmp(non2, ".lo") == 0)
    {
        printf("strrchr is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strrchr Down..\n");
    }



//http://php.net/manual/fr/function.strrev.php
    char droit[20] = "Hel.lo Wolrd!";
    char revers[20];
    str_rev(droit, revers);
    if(strcmp(revers, "!drloW ol.leH") == 0)
    {
        printf("strrev is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strrev Down..\n");
    }


//http://php.net/manual/fr/function.strripos.php
    char toto[20] = "HelloELOeLoE";
    char titi[20] = "Loe";
    int position;
    strripos(toto, titi, &position);
    printf("%d ",position);
    if(position == 6)
    {
        printf("strripos is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strripos Down..\n");
    }


//http://php.net/manual/fr/function.strrpos.php
    char tutu[20] = "HelloEloeLoe";
    char tata[20] = "loe";
    int posi;
    str_rpos(tutu, tata, &posi);
    printf("%d ",position);
    if(posi == 6)
    {
        printf("strrpos is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strrpos Down..\n");
    }


//http://php.net/manual/fr/function.strtok.php
    char guu[20] = "Hel/lo";
    char goo[20];
    int cut = '/';
    str_tok(guu, goo, &cut);
    if(strcmp(goo, "Hel") == 0)
    {
        printf("strtok is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strtok Down..\n");
    }


//http://php.net/manual/fr/function.strtolower.php
    char caps[20] = "CAPS LOCK";
    str_tolower(caps);
    if(strcmp(caps, "caps lock") == 0)
    {
        printf("strtolower is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strtolower Down..\n");
    }


//http://php.net/manual/fr/function.strtoupper.php
    char lock[30] = "i need caps lock";
    str_toupper(lock);
    if(strcmp(lock, "I NEED CAPS LOCK") == 0)
    {
        printf("strtoupper is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strtoupper Down..\n");
    }



//http://php.net/manual/fr/function.strtr.php
    char rpl[20] = "Hello";
    str_str(rpl);
    if(strcmp(rpl, "Bella") == 0)
    {
        printf("strstr is ok\n");
        nbPoint++;
    }
    else
    {
        printf("strstr Down..\n");
    }


//http://php.net/manual/fr/function.substr-count.php
    char pro[20] = "Hellollelalill";
    char pru[20] = "ll";
    int pri = 0;
    substr_count(pro, pru, &pri);
    printf("%d ",pri);
    if(pri == 3)
    {
        printf("substr_count is ok\n");
        nbPoint++;
    }
    else
    {
        printf("substr_count Down..\n");
    }


//http://php.net/manual/fr/function.substr-replace.php
    char enf[200] = "leHelloHell";
    substr_replace(enf);
    printf("%s ",enf);
    if(strcmp(enf, "Paradiso") == 0)
    {
        printf("substr_replace is ok\n");
        nbPoint++;
    }
    else
    {
        printf("substr_replace Down..\n");
    }


//http://php.net/manual/fr/function.substr.php
    char pas[30] = "hello";
    char neg[30];
    int start = 1, taille = 3;
    sub_str(pas, neg, &start, &taille);
    printf("%s ",neg);
    if(strcmp(neg, "ell") == 0)
    {
        printf("substr is ok\n");
        nbPoint++;
    }
    else
    {
        printf("substr Down..\n");
    }


//http://php.net/manual/fr/function.trim.php
    char viii[20] = "   hello monsieur  ";
    char voo[20];
    trim(viii, voo);
    if(strcmp(voo, "hello monsieur") == 0)
    {
        printf("trim is ok\n");
        nbPoint++;
    }
    else
    {
        printf("trim Down..\n");
    }


//http://php.net/manual/fr/function.ucfirst.php
    char koo[20] = "hELLOWORLD";
    ucfirst(koo);
    if(strcmp(koo, "HELLOWORLD") == 0)
    {
        printf("ucfirst is ok\n");
        nbPoint++;
    }
    else
    {
        printf("ucfirst Down..\n");
    }


//http://php.net/manual/fr/function.ucwords.php
    char troo[20] = "hello world";
    ucwords(troo);
    if(strcmp(troo, "Hello World") == 0)
    {
        printf("ucwords is ok\n");
        nbPoint++;
    }
    else
    {
        printf("ucwords Down..\n");
    }


//http://php.net/manual/fr/function.wordwrap.php
    char lroo[20] = "Hello world";
    char lroo1[20], lroo2[20];
    wordwrap(lroo, lroo1, lroo2);
    if(strcmp(lroo1, "Hello") == 0)
    {
      if(strcmp(lroo2, "world") == 0)
      {
        printf("wordwrap is ok\n");
        nbPoint++;
      }
    }
    else
    {
        printf("wordwrap Down..\n");
    }


    printf("\nVotre belle note est de: %d sur 30. \n", nbPoint);
    return 0;
}
