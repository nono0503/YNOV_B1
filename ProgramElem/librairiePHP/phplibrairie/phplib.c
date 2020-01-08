#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LCFIRST//
char * lcfirst(char * str) {
  if (str[0] == '\0') return "";
  int l = strlen(str);
  char * result = malloc(sizeof(char * ) * l);
  result[0] = str[0] + 32;
  for (int i = 1; i < l; i++)
    result[i] = str[i];
  return result;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//LTRIM//
int monEspace(char espace) {
  if (espace == ' ' ||
    espace == '\f' ||
    espace == '\n' ||
    espace == '\r' ||
    espace == '\t' ||
    espace == '\v')
    return 1;

  return 0;
}

char * ltrim(char * caractereMasque) {
  if (caractereMasque[0] == '\0') return "";
  char * resultat = malloc(sizeof(char * ) * strlen(caractereMasque));
  for (int i = 0; i < strlen(caractereMasque); i++) resultat[i] = caractereMasque[i];
  while (espace( * resultat)) resultat++;
  return resultat;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//STRTOLOWER//
char * strtolower(char * str) {
  if (str[0] == '\0') return "";
  int l = strlen(str);
  char * resultat = malloc(sizeof(char * ) * l);
  for (int i = 0; i < l; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      resultat[i] = str[i] + 32;
    else
      resultat[i] = str[i];
  }
  return resultat;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//STRTOUPPER//
char * strtoupper(char * str) {
  if (str[0] == '\0') return "";
  int l = strlen(str);
  char * resultat = malloc(sizeof(char * ) * l);
  for (int i = 0; i < l; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') resultat[i] = str[i] - 32;
    else resultat[i] = str[i];
  }
  return resultat;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SUBSTR_COUNT//
int substr_count(char * chaine, char * motif) {
  if (chaine[0] == '\0' || motif[0] == '\0') return -1;

  int * resultat = malloc(sizeof(int)),
    chaine1 = strlen(chaine),
    motif1 = strlen(motif),
    flag;

  * resultat = 0;

  for (int i = 0; i < chaine1 - motif1; i++) {
    flag = 0;
    for (int j = 0; j < motif1; j++) {
      if (chaine[i + j] != motif[j]) flag = 1;
    }
    if (flag == 0) * resultat += 1;
  }

  return *resultat;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//STRSTR//MODIFIER F,J,L
char * strstr(char * chaineatraiter, char * depart, char * arrive) {
  if (strlen(depart) != strlen(arrive) || strlen(chaineatraiter) < strlen(depart) || strlen(chaineatraiter) < strlen(arrive)) return "";
  int f, j, l = strlen(chaineatraiter);
  char * resultat = malloc(sizeof(char * ) * l);
  for (int i = 0; i < l; i++) {
    f = 0, j = 0;
    for (; j < strlen(depart); j++) {
      if (source[i] == depart[j]) {
        f = 1;
        break;
      }
    }
    if (f) resultat[i] = arrive[j];
    else resultat[i] = chaineatraiter[i];
  }
  return resultat;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//lcfirst
char * lcfirst(char* str){
    *str = *str + ('a' - 'A');
    return str;
}

//explode
void explode(const char *src, const char *tokens, char ***list, size_t *len)
{
    if(src == NULL || list == NULL || len == NULL)
        return;

    char *str, *copy, **_list = NULL, **tmp;
    *list = NULL;
    *len  = 0;

    copy = strdup(src);
    if(copy == NULL)
        return;

    str = strtok(copy, tokens);
    if(str == NULL)
        goto free_and_exit;

    _list = realloc(NULL, sizeof *_list);
    if(_list == NULL)
        goto free_and_exit;

    _list[*len] = strdup(str);
    if(_list[*len] == NULL)
        goto free_and_exit;
    (*len)++;


    while((str = strtok(NULL, tokens)))
    {
        tmp = realloc(_list, (sizeof *_list) * (*len + 1));
        if(tmp == NULL)
            goto free_and_exit;

        _list = tmp;

        _list[*len] = strdup(str);
        if(_list[*len] == NULL)
            goto free_and_exit;
        (*len)++;
    }


free_and_exit:
    *list = _list;
    free(copy);
}

//implode en js
function implode(symb,array){
	var len = array.length;
	var fin = '';
	for(i = 0; i < len;i++){
		if(i){
			fin += symb;
		}
		fin +=array[i];
	}
	return fin;
}

//lcfirst en java
public class LCFirst extends AbstractTemplateFunction {
	public final static ITemplateFunction CONST = new LCFirst();

	public LCFirst() {

	}

	@Override
	public String parseFunction(List<String> list, IWikiModel model, char[] src, int beginIndex, int endIndex, boolean isSubst) {
		if (list.size() > 0) {
			String word = isSubst ? list.get(0) : parseTrim(list.get(0), model);
			if (word.length() > 0) {
				return Character.toLowerCase(word.charAt(0)) + word.substring(1);
			}
			return "";
		}
		return null;
	}
}

//lcfirst en js
function lcfirst (str) {
    // http://kevin.vanzonneveld.net
    // +   original by: Brett Zamir (http://brett-zamir.me)
    // *     example 1: lcfirst('Kevin Van Zonneveld');
    // *     returns 1: 'kevin Van Zonneveld'
    str += '';
    var f = str.charAt(0).toLowerCase();
    return f + str.substr(1);
}

//ltrim
const char *
ltrim (const char *s)
{
  while (isspace ((unsigned char)*s))
    s++;
  return s;
}

//ltrim en php
function _ltrim($str, $charlist = null)
{
    if (null === $charlist) {
        return ltrim($str);
    }

    if (Utf8::isAscii($charlist)) {
        return ltrim($str, $charlist);
    }

    $charlist = preg_replace('#[-\[\]:\\\\^/]#', '\\\\$0', $charlist);

    return preg_replace('/^['.$charlist.']+/u', '', $str);
}

//rtrim
#include "libutil.h"
char *
rtrim (char *str)
{
  char *endPtr;

  if (str == NULL || *str == '\0')
    return NULL;

  for (endPtr = &str[strlen (str) - 1]; endPtr >= str && isspace((unsigned char)*endPtr); endPtr--)
    ;
  endPtr[1] = 0;
  return endPtr >= str ? endPtr : NULL;
}

//rtrim en js
define(function(){
    /**
    * Remove white-spaces from end of string.
    * @example stringUtils.rtrim('   lorem ipsum   ') -> '   lorem ipsum'
    * @param {string} str
    * @return {string}
    */
    function rtrim(str){
        return (str || '').replace(/\s+$/g, '');
    }
    return rtrim;
});

//trim en js
//trim function for sad ones
if(typeof String.prototype.trim !== 'function') {
  String.prototype.trim = function() {
    return this.replace(/^\s+|\s+$/g, '');
  }
}

//wordwrap en js
function wordwrap (str, int_width, str_break, cut) {
    // http://kevin.vanzonneveld.net
    // +   original by: Jonas Raoni Soares Silva (http://www.jsfromhell.com)
    // +   improved by: Nick Callen
    // +    revised by: Jonas Raoni Soares Silva (http://www.jsfromhell.com)
    // +   improved by: Kevin van Zonneveld (http://kevin.vanzonneveld.net)
    // +   improved by: Sakimori
    // +   bugfixed by: Michael Grier
    // *     example 1: wordwrap('Kevin van Zonneveld', 6, '|', true);
    // *     returns 1: 'Kevin |van |Zonnev|eld'
    // *     example 2: wordwrap('The quick brown fox jumped over the lazy dog.', 20, '<br />\n');
    // *     returns 2: 'The quick brown fox <br />\njumped over the lazy<br />\n dog.'
    // *     example 3: wordwrap('Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat.');
    // *     returns 3: 'Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod \ntempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim \nveniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea \ncommodo consequat.'
    // PHP Defaults
    var m = ((arguments.length >= 2) ? arguments[1] : 75);
    var b = ((arguments.length >= 3) ? arguments[2] : "\n");
    var c = ((arguments.length >= 4) ? arguments[3] : false);

    var i, j, l, s, r;

    str += '';

    if (m < 1) {
        return str;
    }

    for (i = -1, l = (r = str.split(/\r\n|\n|\r/)).length; ++i < l; r[i] += s) {
        for (s = r[i], r[i] = ""; s.length > m; r[i] += s.slice(0, j) + ((s = s.slice(j)).length ? b : "")) {
            j = c == 2 || (j = s.slice(0, m + 1).match(/\S*(\s)?$/))[1] ? m : j.input.length - j[0].length || c == 1 && m || j.input.length + (j = s.slice(m).match(/^\S*/)).input.length;
        }
    }

    return r.join("\n");
}






// Dmitri


char * php_nl2br(char * source) {
  if (source[0] == '\0') return "";
  int counter = 0,
    l_source = strlen(source);
  for (int i = 0; i < l_source; i++)
    if (source[i] == '\n' || source[i] == '\r') counter++;
  char * result = malloc(sizeof(char * ) * l_source + counter * 3);
  int c = 0;
  for (int i = 0; i < l_source; i++) {
    if (source[i] == '\n' || source[i] == '\r') {
      result[i + c] = '<';
      result[i + c + 1] = 'b';
      result[i + c + 2] = 'r';
      result[i + c + 3] = '>';
      c+=3;
      continue;
    }
    result[i + c] = source[i];
  }
  return result;
}


// TODO
//NUMBER_FORMAT//
char * number_format (int nombre, int decimale, char separateur) {
  int nombre1 = 1 + (int)log10(nombre);
  return "";
}

char * php_substr_replace(char * source, char * pattern, int start) {
  int l_source = strlen(source),
    l_pattern = strlen(pattern),
    c = 0;
  if (source[0] == '\0' || pattern[0] == '\0' || start > l_source - l_pattern) return "";
  char * result = malloc(sizeof(char * ) * l_source);

  for (int i = 0; i < l_source; i++) {
    if (i >= start && i < l_pattern + start) {
      result[i] = pattern[c];
      c++;
    } else result[i] = source[i];
  }

  return result;
}

char * php_substr(char * source, int start) {
  if (source[0] == '\0' || start < 0) return "";
  int l_substr = strlen(source) - start;
  char * result = malloc(sizeof(char * ) * l_substr);
  int c = 0;
  for (int i = start; i < start + l_substr; i++) {
    result[c] = source[i];
    c++;
  }
  return result;
}
