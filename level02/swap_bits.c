/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 08:50:29 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:17:02 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : swap_bits
Expected files   : swap_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, swaps its halves (like the example) and
returns the result.

Your function must be declared as follows:

unsigned char	swap_bits(unsigned char octet);

Example:

  1 byte
_____________
 0100 | 0001
     \ /
     / \
 0001 | 0100
 */

/*
<</>> left/right shift operator
 1 << 4 ==2^4 == 16 == binary 00010000
 */
unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));                 //because there are 8 positions in binary?
}

/*#include <stdio.h>

int main(void)
{
	unsigned char chr;
	
	chr = 2;
	printf("%d\n", swap_bits(chr));
	return (0);
}*/
