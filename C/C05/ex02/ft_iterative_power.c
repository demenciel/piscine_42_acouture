/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:11:00 by acouture          #+#    #+#             */
/*   Updated: 2022/12/06 10:41:29 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	if (power < 0)
		return (0);
	else if (nb == 0 && power == 0)
		return (result);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(0, 2));
    printf("%d\n", ft_iterative_power(-2, 3));
	printf("%d\n", ft_iterative_power(2, 3));
	printf("%d\n", ft_iterative_power(5, 2));
	printf("%d\n", ft_iterative_power(5, 3));
} */