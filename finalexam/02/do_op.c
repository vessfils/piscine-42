/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:49:28 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/25 21:31:36 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main (int ac, char **av)
{
	char op;
	int res;

	res = 0;

	if (ac == 4)
	{

	op = av[2][0];
		if (op == '+')
			res = atoi(av[1]) + atoi(av[3]);
		else if (op == '-')
			res = atoi(av[1]) - atoi(av[3]);
		else if (op == '/')
			res = atoi(av[1]) / atoi(av[3]);
		else if (op == '%')
			res = atoi(av[1]) % atoi(av[3]);
		else if (op == '*')
			res = atoi(av[1]) * atoi(av[3]);
	printf("%d", res);
	}
	printf("\n");
	return (0);
}
