#include"main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */
char *_strcat(char *dest, char *src)
{
  int i=0, n1, n2;
   while(dest(i++))
       n1++;
 
  while(src(i++))
       n2++;  

      while(i<n1+n2){
        if(i>n1)
            dest[i]=src[i-n1];
      }

  return(dest);
}
