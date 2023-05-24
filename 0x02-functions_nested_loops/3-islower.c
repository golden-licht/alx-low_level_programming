#include "main.h"

/**
 * _islower - lowercase alphabet checker 
 *
 * Return: 1, if input is lowercase, 0 otherwise
 */

int _islower(int c){
	if (c > 96 && c < 123)
		return (1);
	return (0);
}
