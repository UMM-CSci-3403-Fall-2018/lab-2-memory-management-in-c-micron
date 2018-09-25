#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

char *disemvowel(char *str) {
  char *result;
  int size;
  int len, i, j;

  size = 100;
  result = (char*) calloc (size + 1, sizeof(char));
  len = strlen(str);
  i = 0;
  j = 0;
  while(i < len){
	if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u'||
	   str[i] == 'A'||str[i] == 'E'||str[i] == 'I'||str[i] == 'O'||str[i] == 'U'
	   ){
	i++;
	}else{
	result[j] = str[i];
	i++;
	j++;
	}
  }
  result[len] = '\0';
  return (char*) result;
}
