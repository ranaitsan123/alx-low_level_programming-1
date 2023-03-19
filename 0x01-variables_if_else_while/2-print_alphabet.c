#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
*/
int main(void)
{
char ch='a';

printf("Lowercase English Alphabets:\n");
while(ch <= 'z')
{
printf("%c", ch);
ch++;
}
printf("\n");

return 0;
}
