/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:42:04 by acouture          #+#    #+#             */
/*   Updated: 2022/12/14 09:37:59 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);
int		ft_strlen(char *str);
int		final_str_len(char **strs, int size, char *sep);
char	*empty_array(void);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*final_str;

	if (size == 0)
		empty_array();
	final_str_len(strs, size, sep);
	final_str = malloc(final_str_len(strs, size, sep) + 1);
	i = 0;
	j = 0;
	while (i < size)
	{
		ft_strcpy(final_str + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(final_str + j, sep);
			j += ft_strlen(sep);
		}
		i++;
	}
	final_str[final_str_len(strs, size, sep)] = '\0';
	return (final_str);
}

char	*empty_array(void)
{
	char	*final_str;

	final_str = (char *)malloc(sizeof(char) * 1);
	final_str[0] = '\0';
	return (final_str);
}

int	final_str_len(char **strs, int size, char *sep)
{
	int	i;
	int	final_str_len;

	i = 0;
	final_str_len = 0;
	while (i < size)
	{
		final_str_len += ft_strlen(strs[i]);
		if (i < size - 1)
			final_str_len += ft_strlen(sep);
		i++;
	}
	return (final_str_len);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	int size = 3;
	char *sep = ",";
	char *strs[] = {"hello", "world", "123"};
	char *result = ft_strjoin(size, strs, sep);
	printf("%s", result);
} */