/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 12:55:10 by acouture          #+#    #+#             */
/*   Updated: 2023/01/07 12:44:33 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[n] != '\0' && n < nb)
	{
		dest[i + n] = src[n];
		n++;
	}
	dest[i + n] = '\0';
	return (dest);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
    unsigned int n;

    n = 4;
    char str1[100] = "Hello";
    char str2[100] = "World";

    printf("%s\n", ft_strncat(str1, str2, n));
	n = 4;
    char str3[100] = "Hello";
    char str4[100] = "World";
	printf("%s\n", strncat(str3, str4, n));
} */