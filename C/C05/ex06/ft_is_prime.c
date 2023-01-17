/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 13:35:54 by acouture          #+#    #+#             */
/*   Updated: 2022/12/07 10:17:15 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(5));
	printf("%d\n", ft_is_prime(3));
	printf("%d\n", ft_is_prime(7));
	printf("%d\n", ft_is_prime(10));
	printf("%d\n", ft_is_prime(8));
} */