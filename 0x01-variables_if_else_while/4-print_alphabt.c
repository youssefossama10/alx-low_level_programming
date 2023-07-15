#include <stdio.h>
/**
 * main - print alphabets except p and e
 * Return: Always (0)
 */
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
if (alphabet != 'q' && alphabet != 'e')
{
putchar(alphabet);
}
alphabet++;
}
putchar('\n');
return (0);
}
