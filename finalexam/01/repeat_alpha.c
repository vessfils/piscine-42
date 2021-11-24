/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:18:28 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/24 22:33:54 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main (int ac, char **av)
{
	int i;

	int count;

	i  = 0;
	if (ac > 1)
	{

		while (av[1][i])
		{
			count = 0;
			if (av[1][i] >= 'A' & av[1][i] <= 'Z')
				count = av[1][i] - 64;

			if (av[1][i] >= 'a' & av[1][i] <= 'z')
				count = av[1][i] - 96;

			else
				count = 1;
			while (count)
			{
				write(1, &av[1][i], 1);
				count --;
			}
			i++;

		}	
	}
	return (0);
}

