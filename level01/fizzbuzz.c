/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 11:40:09 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:03:30 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.
If the number is a multiple of 3, it prints 'fizz' instead.
If the number is a multiple of 5, it prints 'buzz' instead.
If the number is both a multiple of 3 and a multiple of 5,
	it prints 'fizzbuzz' instead.

Example:
$>./fizzbuzz
1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz
[...]
97
98
fizz
buzz
$>*/

#include <unistd.h>

void	ft_write_number(int number)
{
	char	str[10];

	str[10] = "0123456789";
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &str[number % 10], 1);
}

int	main(void)
{
	int	number;

	number = 0;
	while (number < 100)
	{
		number++;
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_write_number(number);
		write(1, "\n", 1);
	}
	return (0);
}
