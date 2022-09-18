/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:48:49 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:42:47 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : pgcd
Expected files   : pgcd.c
Allowed functions: printf, atoi, malloc, free
--------------------------------------------------------------------------------

Write a program that takes two strings representing two strictly positive
integers that fit in an int.

Display their highest common denominator followed by a newline (It's always a
strictly positive integer).

If the number of parameters is not 2, display a newline.

Examples:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int a;
    int b;
    int gcd;
    int i;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        gcd = 0;
        i = 1;
        if (a > 0 && b > 0)
        {
            while (i < a && i < b)
            {
                if (a % i == 0 && b % i == 0)
                    gcd = i;
                i++;
            }
            printf("%d", gcd);
        } 
    }
    printf("\n");
    return (0);
}

/*int main(int argc, char **argv) // same programm as above but if a or b is smaller than 0 it prints out 0
{
    int a;
    int b;
    int gcd;
    int i;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        gcd = 0;
        i = 1;
        while (i < a && i < b)
        {
            if (a % i == 0 && b % i == 0)
                gcd = i;
            i++;
        }
        printf("%d", gcd); 
    }
    printf("\n");
    return (0);
}*/

/*int main(int argc, char const *argv[])    // different attempt, works as well
{
	int nbr1;
	int nbr2;

	if (argc == 3)
	{
		if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
		{
			while (nbr1 != nbr2)
			{
				if (nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
			printf("%d", nbr1);
		}
	}
	printf("\n");
	return (0);
}*/
