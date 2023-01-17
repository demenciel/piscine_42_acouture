/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 09:31:40 by acouture          #+#    #+#             */
/*   Updated: 2022/12/04 08:35:36 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	unsigned int	n;

    n = 0;
	char	str[]= "Hello Pwrld";
 	char 	str2[] = "Hello Weople";
	
	printf("%d\n", ft_strncmp(str, str2, n));
	printf("%d\n", strncmp(str, str2, n));
} */
