/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:59:44 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:25:00 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right. (0 and 1 are no prime numbers!!!)

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/

#include <unistd.h>

int	ft_atoi_pos(const char *str)
{
	long int	convert;

	convert = 0;
	if (*str == '-')
		return (0);
	while (*str && *str > 47 && *str < 58)
	{
		convert = (convert * 10) + *str - '0';
		str++;
		if (convert > 2147483647)
			return (0);
	}
	return (convert);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1 || nb > 2147483647)
	{
		return (0);
	}
	i = 2;
	while (i < nb)
	{
		if (nb % i != 0)
			i++;
		else
			return (0);
	}
	return (nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_pos(int n)
{
	if (n < 10)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr_pos(n / 10);
		ft_putnbr_pos(n % 10);
	}
}

int	main(int argc, char **argv)
{
	long int	convert;
	int			nb;
	int			prime;

	if (argc == 2)
	{
		convert = ft_atoi_pos(argv[1]);
		nb = 2;
		prime = 0;
		while (nb <= convert)
		{
			if (ft_is_prime(nb) != 0)
				prime = prime + (ft_is_prime(nb));
			nb++;
		}
		ft_putnbr_pos(prime);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
