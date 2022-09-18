/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:08:39 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:22:23 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strcmp
Expected files   : ft_strcmp.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcmp (man strcmp).

Your function must be declared as follows:

int    ft_strcmp(char *s1, char *s2);*/

int ft_strcmp(char *s1, char *s2)
{
	int	diff;

	while (*s1 == *s2 && *s1 != 0)
	{
		s1++;
        s2++;
	}
	diff = (unsigned char)*s1 - (unsigned char)*s2;
	return (diff);

}

/*#include <stdio.h>

int main(void)
{
    char string1[5] = "Hallo";
    char string2[5] = "Pallo";
    char    *str1;
    char    *str2;

    str1 = &string1[0];
    str2 = &string2[0];
    printf("%d\n", ft_strcmp(str1, str2));
}*/
