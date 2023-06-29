#include "main.h"

/**
 * _isalpha - checks for any alphabetic characters
 * @alp: the char in question
 * Return: 1 if alp is a letter, 0 otherwise
 */
int _isalpha(int alp)
{
	return ((alp >= 'a' && alp <= 'z') || (alp >= 'A' && alp <= 'Z'));
}
