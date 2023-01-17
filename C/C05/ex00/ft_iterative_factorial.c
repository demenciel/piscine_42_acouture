/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:25:18 by acouture          #+#    #+#             */
/*   Updated: 2022/12/05 08:35:03 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	f = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		f *= i;
		i++;
	}
	return (f);
}
/* #include <stdio.h>
int	main(void)
{
    printf("%d\n", ft_iterative_factorial(-1));
	printf("%d\n", ft_iterative_factorial(1));
	printf("%d\n", ft_iterative_factorial(2));
	printf("%d\n", ft_iterative_factorial(3));
	printf("%d\n", ft_iterative_factorial(6));
	printf("%d\n", ft_iterative_factorial(8));
} */