#include <stdio.h>
#include <stdlib.h>

#include "strings.h"

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
  char *iter = dest;

  while (*source)
    {
      *iter = *source;
      iter += 1;
      source += 1;
    }

    *iter = *source;

    return dest;
}

char * mystrncpy(char *dest, char *source, int n)
{
  char *iter = dest;

  while (*source)
  {
    *iter = *source;
    iter += 1;
    source += 1;
  }

  n -= mystrlen(source);
  for (int i = 0; i < n; i++)
  {
    *iter = '\0';
    iter += 1;
  }

  return dest;
}

char * mystrchr(char *s, char c)
{
  char *iter = s;

  while (*iter != c && *iter)
  {
    iter += 1;
  }

  if (*iter)
  {
    return iter;
  }
  
  return NULL;
}
