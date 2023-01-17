/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acouture <acouture@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:09:03 by acouture          #+#    #+#             */
/*   Updated: 2022/12/12 11:45:34 by acouture         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
#define FT_H

#include <unistd.h>
void ft_putchar(char c);
void ft_swap(int *a, int *b);
void ft_putstr(char *str);
int ft_strlen(char *str);
int ft_strcmp(char *s1, char *s2);

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}

void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

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

#endif
