/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 14:12:51 by acouture          #+#    #+#             */
/*   Updated: 2022/12/14 09:21:51 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len_params;
	int	i;
	int	*array;

	len_params = 0;
	i = 0;
	if (min >= max)
		return (NULL);
	len_params = max - min + 1;
	array = malloc(len_params * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < len_params)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/* #include <stdio.h>
int	main(void)
{
	int min;
	int max;

	min = 1;
	max = 10;
	while (min < max)
	{
		printf("%d\n", *ft_range(min, max));
		min++;
	}
} */