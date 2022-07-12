#include "main.h"
/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */

int _printf(const char *format, ...)
{
	if ( format == NULL )
		return 0;

	va_list valist;
	va_start(valist, format);

	int num = 0;
	char *token = NULL;
	int i = 0;
	int len = _strlen(format);
	int nprinted = 0;
	int found = 0;

	while ( format[i] != '\0' )
	{
		num = 0;
		found = 0;
		token = NULL;

		if ( ( format[i] == '%' ) && ( ( i + 1 ) < len ) )
		{
			switch ( format[i+1] )
			{

				case 's':
					{
						found = 1;

						token = va_arg(valist, char *);
						if ( token != NULL )
						{
							int j = 0;

							while ( token[j] != '\0' )
							{
								nprinted++;
								_putchar(token[j]);
								j++;
							}
						}
					}
					break;

				case 'c':
					{
						found = 1;

						token =(char *)malloc(sizeof(char) * 2);
						token[0] = va_arg(valist, int);
						token[1] = '\0';
						if(token != NULL)
						{
							int j = 0;

							while (token[j] != '\0')
							{
								nprinted++;
								_putchar(token[j]);
								j++;
							}
						}
						free(token);
					}
					break;

				case '%':
					{
						found = 1;

						token = (char *)malloc(sizeof(char)* 2);
						_putchar('%');

						free(token);
					}
					break;
			}
			if ( found != 0 )
			{
				i += 2;
				continue;
			}
		}

		_putchar(format[i]);
		nprinted++;

		i++;
	}
	va_end(valist);

	return nprinted;
}
