#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "strings.h"

int main()
{
  printf("\n#################################\n\n");

  printf("str1[] = 'hello world'\n");
  printf("*str2 = 'sup people'\n");

  printf("\n#################################\n\n");

  printf("Testing the length function:\n");

  char str1[] = "hello world";
  printf("Finding length of str1 wtih Fabiha's length function: %d\n", mystrlen(str1));
  printf("Finding length of str1 with standard: [%ld]\n",strlen(str1));

  printf("\n#################################\n\n");

  printf("Testing the strcpy function:\n");

  char *str2 = "sup people";
  printf("Copying str2 into str1\n");
  printf("Printing str1: [%s]\n", mystrcpy(str1, str2));
  printf("Comparing to standard version:\n");
  char str10[] = "hello world";
  char *str11 = "sup people";
  printf("str10: [%s] str11: [%s] ",str10,str11);
  printf("Copied: [%s]",strcpy(str10,str11));

  printf("\n#################################\n\n");

  printf("Finding the first p in str2\n");
  printf("Printing str2: [%s]\n", str2);
  printf("Printing string from p in str2: [%s]\n", mystrchr(str2, 'p'));

  printf("\n#################################\n\n");

  printf("Finding the first f in str2\n");
  printf("Printing str2: [%s]\n", str2);
  printf("Printing string from f in str2: [%s]\n", mystrchr(str2, 'f'));

  printf("\n#################################\n\n");
  printf("Testing strcat\n");
  char str101[500] = "Roses are red,\nThis program might halt,\n";
  char *str111 = "I forgot a NULL pointer,\n Segmentation fault\n";
  printf("Mer's version: [%s]",mystrcat(str101,str111));
  char str201[500] = "Roses are red,\nThis program might halt,\n";
  char *str211 = "I forgot a NULL pointer,\n Segmentation fault\n";
  printf("std version: [%s]\n",strcat(str201,str211));
  
  printf("\n#################################\n\n");
  printf("\nTesting strncat\n");
  char str100[100] = "Rick";
  char *str1000 = " and Morty";
  printf("mer's version: [%s]\n",mystrncat(str100,str1000,5));
  char str200[100]="Rick";
  char *str2000 = " and Morty";
  printf("std version: [%s]\n",strncat(str200,str2000,5));

  printf("\n#################################\n\n");
  printf("\nTesting strcmp\n");
  char str6[100] = "Coding is fun";
  char *str3 = "Coding sucks";
  printf("mer's version: [%d]\n",mystrcmp(str6,str3));
  char str4[100] = "Coding is fun";
  char *str5 = "Coding sucks";
  printf("std version: [%d]\n",strcmp(str4,str5));
  
  return 0;
}
