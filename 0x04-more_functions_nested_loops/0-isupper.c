#include <unistd.h>
#include "main.h"
/**
*main - checks for upper case
*Returns: 1 if 'c' is upper case
*Returns: 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
return (0);
}
