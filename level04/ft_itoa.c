/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:24:13 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/17 21:32:08 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);
*/

#include <stddef.h>
#include <stdlib.h>

int	ft_lengthcal(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_positive(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;

	len = ft_lengthcal(n);
	dest = malloc(1 * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (n < 0)
		dest[0] = '-';
	if (n == 0)
		dest[0] = '0';
	while (n != 0)
	{
		len--;
		dest[len] = ft_positive(n % 10) + '0';
		n = n / 10;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void)
{
    int integer;

    integer = 4007;
    printf("%s\n", ft_itoa(integer));
    return(0);
}
*/
