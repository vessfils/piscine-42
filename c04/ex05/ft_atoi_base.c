/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 19:23:57 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/20 12:00:31 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	checkbase(char *base)
{
	int	i;
	int	n;
	int	j;

	i = 0;
	j = 0;
	n = ft_strlen(base);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 127)
			return (0);
		i++;
	}
	while (base[j])
	{
		if (base[i] == base[j])
			return (0);
		j++;
	}
	if (n == 0 || n == 1)
		return (0);
	return (1);
}

int	is_in_base(char tofind, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (tofind == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	neg;
	int	value;
	int	i;

	i = 0;
	value = 0;
	neg = 1;
	if (checkbase(base) == 0)
		return (0);
	while (str[i] && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (is_in_base(str[i], base) != -1)
	{
		value = (value * ft_strlen(base)) + is_in_base(str[i], base);
		i++;
	}
	return (neg * value);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));	
	return (0);
}
*/
