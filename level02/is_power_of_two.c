/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_two.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:06:26 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:51:29 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : is_power_of_2
Expected files   : is_power_of_2.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that determines if a given number is a power of 2.

This function returns 1 if the given number is a power of 2, otherwise it returns 0.

Your function must be declared as follows:

int	    is_power_of_2(unsigned int n);*/

int is_power_of_2(unsigned int n)       // version 1
{
    if (n == 1)
        return (1);
    while (n != 0 && n % 2 == 0)
    {
        n = n / 2;
        if (n == 1)
            return (1);
    }
    return (0);
}

int is_power_of_2(unsigned int n)       // version 2 EINFACHER
{
	unsigned int number = 1;
	
	while(number <= n)
	{
		if (number == n)
			return (1);
		number = number * 2;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    int n;

    n = 64;
    printf("%d\n", is_power_of_2(n));
}*/
