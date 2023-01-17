/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 10:50:38 by acouture          #+#    #+#             */
/*   Updated: 2022/12/14 09:30:55 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len_range;
	int	*result;

	i = 0;
	len_range = 0;
	result = NULL;
	if (range == NULL)
		return (-1);
	if (min >= max)
	{
		result = NULL;
		return (len_range);
	}
	len_range = max - min;
	result = malloc(len_range * sizeof(int));
	if (result == NULL)
		return (-1);
	while (i < len_range)
	{
		result[i] = min + i;
		i++;
	}
	*range = result;
	return (len_range);
}

/* #include <stdio.h>
int	main(void)
{
	int *arr;

	printf("%d\n", ft_ultimate_range(NULL, 0, 10));
	printf("%d\n", ft_ultimate_range(&arr, 0, 10));
	printf("%d\n", ft_ultimate_range(&arr, 5, 5));
	printf("%d\n", ft_ultimate_range(&arr, 10, 0));
} */