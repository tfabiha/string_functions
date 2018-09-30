#include <stdio.h>
#include <stdlib.h>

#include "strings.h"

int main()
{
  printf("\n#################################\n\n");

  printf("Testing the length function:\n");

  char str1[] = "hello world";
  printf("Finding length of 'hello world: %d'\n", mystrlen(str1));

  printf("\n#################################\n\n");

  printf("Testing the strcpy function:\n");

  char *str2 = "sup people";
  printf("Copying 'sup people' into 'hello world':\n");
  printf("Printing str1: [%s]\n", mystrcpy(str1, str2));

  printf("\n#################################\n\n");

  return 0;
}
