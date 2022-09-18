/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 19:21:20 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 12:52:18 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/

int max(int *tab, unsigned int len)
{
	int result;
	unsigned int i;
    
    i = 0;
	result = tab[i];
	if (!tab || len == 0)
		return (0);
	while(i < len)
	{
		if (tab[i] > result)
		{
			result = tab[i];
		}
		i++;
	}
	return (result);
}

/*#include <stdio.h>
int main (void)
{
	int maxnum;
	int array[] = {5,6,3,2,9,55,34,199,7,3,40,1};
	maxnum = max(array, 12);
	printf("maxnum is:%d\n", maxnum);
	return (0);
}*/
