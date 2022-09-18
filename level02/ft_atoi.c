/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 07:57:37 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:21:47 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.
"The atoi() function converts a character string to an integer value. The input string 
is a sequence of characters that can be interpreted as a numeric value of the specified return type."

Your function must be declared as follows:

int	ft_atoi(const char *str);

Allowed functions: None*/

int	ft_atoi(const char *str)
{
	int			sign;
	long int	convert;

	sign = 1;
	convert = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		convert = (convert * 10) + *str - '0';
		str++;
		if (convert > 2147483647 && sign == 1)
			return (-1);
		if (convert > 2147483648 && sign == -1)
			return (0);
	}
	return (convert * sign);
}

/*#include <stdio.h>

int	main(void)
{
	char	string[30];
    char    *str;
    int result;

    string[30] = "  +2345";
    str = &string[0];
    result = ft_atoi(str);
    printf("%d", result);
    return(0);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
    printf("ft_atoi X atoi\n");
	printf("    %d X", ft_atoi("   +342"));
	printf(" %d\n", atoi("         +342"));
	printf("   %d X", ft_atoi("    -342"));
	printf(" %d\n", atoi("         -342"));
	printf("      %d X", ft_atoi(" --342"));
	printf(" %d\n", atoi("         --342"));
	printf("      %d X", ft_atoi(" ++342"));
	printf(" %d\n", atoi("         ++342"));
	printf("      %d X", ft_atoi(" +-342"));
	printf(" %d\n", atoi("         +-342"));
	return (0);
}*/
