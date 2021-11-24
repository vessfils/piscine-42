/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 12:35:06 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/25 14:46:54 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int ac, char **av)
{
	int i ;

	i = 0;
	if (ac > 1)
	{
		while (av[1][i])
		{	
			//av[1][i] = (av[1][i] - 'A' + 1) % 26 + 'A';
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] += 1;

			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] += 1;
			
			if (av[1][i] == 123 || av[1][i] == 91)
				av[1][i] -= 26;

			write(1, &av[1][i], 1);
			i++;
		}

	}
	write(1, "\n", 1);
	return (0);
}
