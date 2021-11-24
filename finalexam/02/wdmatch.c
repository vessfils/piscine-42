/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 17:19:01 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 17:38:33 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
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

int main(int ac, char **av)
{
	int i;
	int i2;
	int wordlen;

	i = 0;
	i2 = 0;
	wordlen = 0;
	if (ac == 3)
	{

		while (av[1][i])
		{
			i2 = 0;
			while (av[2][i2])
			{
				if (av[2][i2] == av[1][i])
				{
					wordlen++;
					break;
				}
				i2++;
			}
			i++;
		}
	}
	if (wordlen == ft_strlen(av[1]))
		ft_putstr(av[1]);


	write(1, "\n", 1);
	return (0);
}
