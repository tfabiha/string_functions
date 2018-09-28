#include <stdio.h>
#include <stdlib.h>

#include "strings.h"

int main()
{
  printf("\n#################################\n\n");

  printf("Testing the length function:\n");

  char str1[] = "hello world";
  printf("Finding length of 'hello world: %d'\n", mystrlen(str1));
  
  printf("\n#################################\n");
  return 0;
}

