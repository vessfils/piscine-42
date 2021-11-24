/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:00:08 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/08 16:14:56 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main()
{
int	a = 6;
int b = 2;
int* o = &a;
int* p = &b;
	printf("a = %d b = %d\n", a, b);
	ft_div_mod(6, 2, o, p);
	printf(" *o = %d *p = %d\n", *o, *p);

}
*/
