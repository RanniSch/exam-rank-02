/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:36:26 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:05:03 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_strcpy
Expected files   : ft_strcpy.c
Allowed functions:
--------------------------------------------------------------------------------

Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char	*ft_strcpy(char *s1, char *s2);*/

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

/*
#include <stdio.h>
int	main(void)
{
    char    str1[20];
	char	str2[6];
    char    *s1;
    char    *s2;

    str2[6] = "Peter";
    s1 = &str1[0];
    s2 = &str2[0];
    s1 = ft_strcpy(s1, s2);
    printf("%s", s1);
    return(0);
}*/
