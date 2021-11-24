/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:10:36 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/08 16:16:50 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpa;

	tmpa = *a;
	*a = *a / *b;
	*b = tmpa % *b;
}
/*
#include <stdio.h>
int	main()
{
	int a = 6;
	int b = 2;

printf("a = %d b =%d \n",a, b);
ft_ultimate_div_mod(&a, &b);
printf("a / b = %d a modulo  b =%d \n",a, b);

}
*/
