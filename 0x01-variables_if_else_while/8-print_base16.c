#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: main function
* this program prints "Programming is positive, zero, or negative
* Return: 0
*/
int main(void)
{
char c;
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
