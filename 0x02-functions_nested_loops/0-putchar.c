#include "main.h"
/**
* main - prints _putchar, fllowd by a new linees
* Return: Alwys 0 (Success)
*/
int main(void)
{
char belay[] = "_putchar";
int g;
for (g = 0; g < 8; g++)
{
_putchar(belay[g]);
}
_putchar('\n');
return (0);
}
