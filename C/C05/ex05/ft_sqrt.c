/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:26:02 by acouture          #+#    #+#             */
/*   Updated: 2022/12/06 10:43:55 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb > 0)
	{
		while (i < (nb / i))
			i++;
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}

/* #include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(0));  // 4
	printf("%d\n", ft_sqrt(25)); // 5
	printf("%d\n", ft_sqrt(22 * 22));
	printf("%d\n", ft_sqrt(22 * 23));
	printf("%d\n", ft_sqrt(-3294));
	printf("%i\n", ft_sqrt(2147483646)); // pas entier
} */