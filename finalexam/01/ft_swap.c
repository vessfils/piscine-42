/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 15:09:43 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/24 19:56:04 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}

#include <stdio.h>
int main(int ac, char **av)
{
	int a = atoi(av[1]);
	int b = atoi(av[2]);

	int *p = &a;

	int *o = &b;
		printf("%d || %d\n", a, b);
		ft_swap(p, o);
		printf("%d || %d\n", a, b);

	return (0);	
}

