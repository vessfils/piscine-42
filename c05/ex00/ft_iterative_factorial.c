/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 20:56:57 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/15 11:50:29 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_iterative_factorial(int nb)
{
	int	facto;

	facto = 1;
	if (nb == 0)
		return (1);
	if (nb < 0 )
		return (0);
	while (nb)
	{
		facto = facto * nb;
		nb--;
	}
	return (facto);
}
/*
#include <stdio.h>
int	main()
{
	printf("0:%d\n", ft_iterative_factorial(-10));
	printf("0:%d\n", ft_iterative_factorial(-1));
	printf("1:%d\n", ft_iterative_factorial(0));
	printf("1:%d\n", ft_iterative_factorial(1));
	printf("3628800:%d\n", ft_iterative_factorial(10));
	printf("6:%d\n", ft_iterative_factorial(3));
}
*/
