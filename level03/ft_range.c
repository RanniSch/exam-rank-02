/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 22:07:49 by rschlott          #+#    #+#             */
/*   Updated: 2022/09/18 15:41:04 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int	*ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/

#include <stddef.h>
#include <stdlib.h>

int	*start_small(int start, int end, int length, int *ptr)
{
	int	i;
	int	begin;

	i = 0;
	begin = start - 1;
	while (begin++ < end && i <= length)
	{
		ptr[i] = begin;
		i++;
	}
	return (ptr);
}

int	*start_big(int start, int end, int length, int *ptr)
{
	int	i;
	int	begin;

	i = 0;
	begin = start + 1;
	while (begin-- > end && i <= length)
	{
		ptr[i] = begin;
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

/*#include <stdio.h>

int	main(void)
{
	int	start;
	int	end;
	int	i;
	int	*ptr;

	start = -1;
	end = 3;
	i = 0;
	ptr = ft_range(start, end);
	while (i < 5)
	{
		printf("%d, ", ptr[i]);
		i++;
	}
	return (0);
}*/

/*int main()
{
	int	start;
	int	end;
    int i;
	int	*ptr;

    start = 0;
    end = -3;
	i = 0;
	ptr = ft_range(start, end);
	while (ptr[i] != end)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
    printf("%d\n", ptr[i]);
	return (0);
}*/
