#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

char *disemvowel(char *str) {
  char *result;
  int size;
  int len, i;

  size = 100;
  result = (char*) calloc (size + 1, sizeof(char));
  len = strlen(str);
 
  for(i=0; i < len; i++){
	if(str[i] != 'a'){
	result[i] = str[i];
	}
  }
  result[len] = '\0';
  return (char*) result;
}
