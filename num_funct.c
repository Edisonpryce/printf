#include "main.h"

int num_function()
{
	found = 1;
	int str[40];
	int j = 0;
	int nprinted;

	num = va_arg(valist, int);
	int temp = num;
	if ( num < 0 )
		num = -num;

	while ( num != 0 )
	{
		str[j++] = (num % 10);
		num /= 10;
	}

	if ( temp < 0 )
		str[j++] = '-';

	nprinted += j;
	j--;

	while ( j >= 0 )
	{
		if ( str[j] != '-' )
			_putchar(str[j--] + '0');
		else
			_putchar(str[j--]);
	}
}
