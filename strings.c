#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *str)
{
  int counter = 0;
  while (*str)
    {
      counter +=1;
      str += 1;
    }
  return counter;
}

char * mystrcpy(char *dest, char *source)
{
  while (*source)
    {
      
      source += 1;
    }
}

