/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 09:29:42 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 10:07:03 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{

	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void ft_putstr(char *str)
{

	int i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *ft_strrev(char *str)
{

	int i;
	int j;
	char tmp;

	i = 0;
	len = ft_strlen(str) - 1;
	while (j > i)
	{
		tmp = str[i];
		str[i] = str[len];
		 str[len] = tmp; 
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>
int main (int ac, char **av)
{
	if (ac > 1)
	{
		printf("%s\n", ft_strrev(av[1]));
	}
	return (0);
}
