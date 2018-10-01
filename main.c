#include <stdio.h>
#include <stdlib.h>

#include "strings.h"

int main()
{
  printf("\n#################################\n\n");

  printf("str1[] = 'hello world'\n");
  printf("*str2 = 'sup people'\n");

  printf("\n#################################\n\n");

  printf("Testing the length function:\n");

  char str1[] = "hello world";
  printf("Finding length of str1: %d'\n", mystrlen(str1));

  printf("\n#################################\n\n");

  printf("Testing the strcpy function:\n");

  char *str2 = "sup people";
  printf("Copying str2 into str1\n");
  printf("Printing str1: [%s]\n", mystrcpy(str1, str2));

  printf("\n#################################\n\n");

  printf("Finding the first p in str2\n");
  printf("Printing str2: [%s]\n", str2);
  printf("Printing string from p in str2: [%s]\n", mystrchr(str2, 'p'));

  printf("\n#################################\n\n");

  return 0;
}
