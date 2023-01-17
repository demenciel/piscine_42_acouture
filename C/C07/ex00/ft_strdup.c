/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:29:04 by acouture          #+#    #+#             */
/*   Updated: 2022/12/12 10:05:39 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*cpy;
	int		i;

	src_len = 0;
	i = 0;
	while (src[src_len] != '\0')
		src_len++;
	cpy = malloc(src_len + 1);
	while (i < src_len)
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

/* #include <stdio.h>
#include <string.h>
int	main(void)
{
    char src[] = "Hello mannn";
    char src2[] = "Hello mannn udoing good";

	printf("%s\n", ft_strdup(src));
    printf("%s\n", strdup(src));
    printf("\n");
    printf("%s\n", ft_strdup(src2));
    printf("%s\n", strdup(src2));
} */
