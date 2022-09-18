/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:21:19 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:41:21 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_rrange(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/

#include <stddef.h>
#include <stdlib.h>

int	*start_small(int start, int end, int length, int *ptr)
{
	int	i;
	int	finish;

	i = 0;
	finish = end + 1;
	while (finish-- > start && i <= length)
	{
		ptr[i] = finish;
		i++;
	}
	return (ptr);
}

int	*start_big(int start, int end, int length, int *ptr)
{
	int	i;
	int	finish;

	i = 0;
	finish = end - 1;
	while (finish++ < start && i <= length)
	{
		ptr[i] = finish;
		i++;
	}
	return (ptr);
}

int	*ft_range(int start, int end)
{
	int	length;
	int	*ptr;

	if (end > start)
		length = end - start;
	else if (start == end)
		length = start - end;
	else
		length = start - end;
	ptr = (int *)malloc((length + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	if (start < end)
		ptr = start_small(start, end, length, ptr);
	if (start > end)
		ptr = start_big(start, end, length, ptr);
	return (ptr);
}

#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int	i;
	int	*ptr;

	start = -1;
	end = 2;
	i = 0;
	ptr = ft_range(start, end);
	while (i < 4)                   // hier immer die Länge von start bis end angeben
	{
		printf("%d, ", ptr[i]);
		i++;
	}
	return (0);
}
