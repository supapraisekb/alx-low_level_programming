#include "main.h"

/**
* jack_bauer - prints out every minute of the day
*
*/
void jack_bauer(void)
{
int H1, H2, M1, M2;

for (H1 = 0; H1 <= 2; H1++)
{
for (H2 = 0; H2 <= 9; H2++)
{
for (M1 = 0; M1 < 6; M1++)
{
for (M2 = 0; M2 <= 9; M2++)
{
if ((H1 == 2) && (H2 >= 4))
{
continue;
}
else
{
_putchar (H1 + '0');
_putchar (H2 + '0');
_putchar (':');
_putchar (M1 + '0');
_putchar (M2 + '0');
_putchar ('\n');
}
}
}
}
}
}
