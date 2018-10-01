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

char *mystrcat(char *dest, char *source){
  int counter = 0;
  int len = mystrlen(dest);
  while(*source){
    *(dest+len+counter)=*source;
    counter++;
    source++;
  }
  return dest;
}

char *mystrncat(char *dest, char *source, int n){
  int counter = 0;
  int len = mystrlen(dest);
  int srclen = mystrlen(source);
  if(n<srclen){
    srclen = n;
  }
  while(srclen>0){
    *(dest+len+counter)=*source;
    counter++;
    source ++;
    srclen--;
  }
  return dest;
}

int mystrcmp(char *s1, char *s2){
  int len = mystrlen(s1);
  int len2 = mystrlen(s2);
  int min = len2;
  if(len<len2){
    min = len;
  }
  for(int i=0;i<min;i++){
    if(*(s1+i)>*(s2+i)){
      return 1;
    }
    if(*(s1+i)<*(s2+i)){
      return -1;
    }
  }
  return 0;
}

/*
char *mystrstr(char *s2, char c){
  int counter = 0;
  int len = mystrlen(s2);
  int len2 = mystrlen(c);
  if(len2>len){
    return NULL;
  }
  while(*s2 && *s2 != *c){
    s2++;
    counter++;
  }
  int first = s2;
  for(int i=counter;i<counter+len2;i++){
    if(*(s2+i)!=*(c+i)){
      return NULL;
    }
  }
  return first;
}
*/
