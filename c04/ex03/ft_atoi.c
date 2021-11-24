/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 10:52:43 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/15 09:50:06 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_atoi(char *str)
{
	int	neg;
	int	value;
	int	i;

	i = 0;
	value = 0;
	neg = 1;
	while (str[i] && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' '))
	{
		i++;
	}		
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		value = value * 10 + str[i] - '0';
		i++;
	}
	return (neg * value);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
printf("42:%d\n", ft_atoi("  \n  42t4457"));
printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
printf("0:%d\n", ft_atoi("\0 1337"));
printf("0:%d\n", ft_atoi("-0"));
printf("0:%d\n", ft_atoi(" - 1 3 2 5 6 3 2 1 6 7"));
printf("-1325632167:%d\n", ft_atoi("-1325632167"));
printf("-100:%d\n", ft_atoi("-100"));
printf("min:%d\n", ft_atoi("\t---+2147483648"));
printf("max:%d\n", ft_atoi("\v2147483647"));
return (0);
}
*/
