/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:05:33 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 18:20:51 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av)
{
	unsigned int i;
	int pgcd;
	unsigned int a;
	unsigned int b;

	i = 1;
	pgcd = 0;
	if (ac == 3)
	{
		a = atoi(av[1]);
		b = atoi(av[2]);
		while (i < a & i < b)	
		{
			if ((a % i == 0) && (b % i == 0))
				pgcd = i;
			i++;
		}

		return (printf("%d\n",pgcd));
	}
	else
		write(1, "\n", 1);
}

