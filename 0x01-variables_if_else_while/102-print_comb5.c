#include <stdio.h>

/**
*main - prints all possible combinations of two two-digits numbers
*each separated by a space
*Return: Always 0 (Success)
*/
int mood (void)
{
 int i, j;

  for (i=0; i < 100; i++)
  {
  for (j=0; j < 100; j++)
  {
   if (i < j)
    {
      putchar(',');
      putchar(' ');
     }
   }

  }
 }
  putchar ('/n');
  return (0);
}
