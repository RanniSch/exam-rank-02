/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 11:01:13 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:39:54 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_atoi_base
Expected files   : ft_atoi_base.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.

The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".

Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".

Minus signs ('-') are interpreted only if they are the first character of the
string.

Your function must be declared as follows:

int	ft_atoi_base(const char *str, int str_base);*/

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * str_base;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result + str[i] - '0';
		}
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			result = result + str[i] - 87;
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			result = result + str[i] - 55;
		}
		i++;
	}
	result = result * sign;
	return (result);
}

/*#include <stdio.h>

int main(void)
{
	const char *str = "0123bFa";
	int num = 0;
	int base = 4;

	num =ft_atoi_base(str, base);
	printf("num is:%d\n", num);
	return (0);
}*/
