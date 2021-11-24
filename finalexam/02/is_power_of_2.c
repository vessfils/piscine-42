/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 10:48:29 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 11:00:27 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_power_2(unsigned int n)
{
	if (n == 0)
		return (0);
	else if (n % 2 == 0)
		return (1);

	else
		return(0);
}

#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av)
{
	if (ac > 1)
	{
		printf("%d\n", is_power_2(atoi(av[1])));

	}
	return (0);
}
