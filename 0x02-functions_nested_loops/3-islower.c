#include "main.h"

/**
 * _islower - checks if char is lowercase
 * @alp: is char in question
 * Return: 1 if char is lowercase, else it returns 0.
 */

char _islower(char alp)
{
	if (alp >= 'a' && alp <= 'z')
		return (1);
	else
		return (0);
}
