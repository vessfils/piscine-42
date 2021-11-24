/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:12:09 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/23 20:17:25 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;


	while(str[i])
	{
		write(1, &str[i], 1);
		i++;

	}

}

int main (int ac, char **av)
{
	int i;

	i = 1;
	if (ac > 1)
	{
		while(av[i])
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i ++;
		}

	}
	return (0);
}
