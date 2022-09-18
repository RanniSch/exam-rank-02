/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 13:01:06 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:06:58 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strlen
Expected files   : ft_strlen.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);*/

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
		count++;
	return (count);
}

/*#include <stdio.h>
int	main(void)
{
	char string[6] = "PeterW";
	char *str;
	int count;

	str = &string[0];
	count = ft_strlen(str);
	printf("%d", count);
	return (0);
}*/
