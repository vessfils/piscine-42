/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:02:18 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/24 15:08:44 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i ;

	i = 0;

	while (str[i])
	{
		i++;
	}
	return (i);
}

#include <stdio.h>
int main (int ac, char **av)
{
	if (ac > 1)
	{
	printf("%d\n", ft_strlen(av[1]));
	}
	return (0);
}


