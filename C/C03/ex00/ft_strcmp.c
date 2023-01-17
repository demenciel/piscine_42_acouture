/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 14:20:21 by acouture          #+#    #+#             */
/*   Updated: 2022/12/06 12:40:23 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] == '\0')
		return (0);
	else if (s1[i] == '\0')
	{
		return (-1);
	}
	else if (s2[i] == '\0')
	{
		return (1);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}
/* #include <stdio.h>
#include <string.h>
int	main(void)
{

	char	str[]= "Hello wrkd";
 	char 	str2[] = "Hello Weo2le";
	
	printf("%d\n", ft_strcmp(str, str2));
	printf("%d\n", strcmp(str, str2));
} */
