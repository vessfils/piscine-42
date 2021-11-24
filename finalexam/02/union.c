/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:35:58 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 17:18:51 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int checkdouble2(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);

		i++;
	}
	return(1);
}

int checkdouble1(char *str, char c, int pos)
{
	int i;

	i = 0;


	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	
	return (1);
}

int main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 3)
	{	while (av[1][i])
		{
			if (checkdouble1(av[1], av[1][i], i) == 1)//look si pas doubln av1
				write(1, &av[1][i],1);
	
			i++;
		}
		i = 0;
		while (av[2][i])
		{
			if (checkdouble2(av[1], av[2][i]) == 1)//look si pas doublon ente av1 et av2
				if (checkdouble1(av[2], av[2][i], i) == 1)//look si pas doublon entre av2 et av2
				write(1, &av[2][i],1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
