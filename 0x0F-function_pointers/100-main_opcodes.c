#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 *  * main - main
 *   * description: adv
 *    * @argc: argc
 *     * @argv: argv
 *      * Return: 0
 *       */

int main(int argc, char **argv)
{
		if (argc != 2)
				{
							printf("Error\n");
									exit(1);
										}
			if (atoi(argv[1]) < 0)
					{
								printf("Error\n");
										exit(2);
											}
				return (0);
}
