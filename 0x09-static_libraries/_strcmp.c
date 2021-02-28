#include "holberton.h"

/**
 *  *_strcmp - compare 2 string
 *   *@s1: the string from parameter
 *    *@s2: the string from parameter
 *     * Return: success
 *      **/

int _strcmp(char *s1, char *s2)
{
		int res = 0, i = 0, j = 0;

			while ((res == 0) && ((s1[i] != '\0') || (s2[j] != '\0')))
					{
								if (s1[i] < s2[j])
												res = s1[i] - s2[j];
										else if (s1[i] > s2[j])
														res = s1[i] - s2[j];
												else
																res = 0;
															i++;
																		j++;
																			}

				return (res);
}
