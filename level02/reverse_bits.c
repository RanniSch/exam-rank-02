/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:48:11 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:08:15 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100

 128 is a reversed byte!!!
 */

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char result;

	i = 8;
	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (result);
}

/*#include <stdio.h>

int main(void)
{
	unsigned char chr;
	
	chr = 1;
	printf("%d\n", reverse_bits(chr));
	return (0);
}*/
