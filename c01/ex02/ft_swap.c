/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 20:28:22 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/08 16:27:29 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int 	main()
{
	int	a;
	int	b;
	int	*p;
	int	*c;

	a = 2;
	b = 3;
	p = &a;
	c = &b;
	printf("a = %d | b = %d\n",a,b);
	printf("\n");
	ft_swap(p, c);
	printf("a = %d | b = %d\n",a,b);
}
*/
