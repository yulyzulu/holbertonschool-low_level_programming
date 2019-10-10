#include "holberton.h"
/**
*is_palindrome- function that returns if a string is palindrome
*@s: string
*Return: integer
*/
int is_palindrome(char *s)
{
	return (value_palindrome(s, 1, 1));
}
/**
*value_palindrome- return if a sstring is a polindrome
*@s: string
*@x: integer
*@y: integer
*Return: 0 or 1
*/
int value_palindrome(char *s, int x, int y)
{
	if (s == 0)
	{
		return (1);
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	if (x < y + 1)
	{
		return (value_palindrome(s, x  + 1, y - 1));
		return (1);
	}
return (0);
}
