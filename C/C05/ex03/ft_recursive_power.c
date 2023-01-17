/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 16:57:40 by acouture          #+#    #+#             */
/*   Updated: 2022/12/05 08:52:14 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power == 0 && nb == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>
int	main(void)
{
    printf("%d\n", ft_recursive_power(0, -2));
    printf("%d\n", ft_recursive_power(3, 0));
    printf("%d\n", ft_recursive_power(-2, 3));
    printf("%d\n", ft_recursive_power(2, 2));
    printf("%d\n", ft_recursive_power(2, 3));
    printf("%d\n", ft_recursive_power(5, 2));
    printf("%d\n", ft_recursive_power(5, 3));
} */