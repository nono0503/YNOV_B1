#include <stdio.h>

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


#include <string.h>
#include "phplib.h"

int main()
{
    printf("Hello World!\n");

    int nb_points = 0;

    // http://php.net/manual/fr/function.lcfirst.php
    char* foo = "HelloWorld";
    lcfirst(foo);
    if(strcmp(foo, "helloWorld") == 0){
        printf("lcfirst ok!\n");
        nb_points++;
    }
    else
        printf("lcfirst KO!\n");






    return 0;
}
