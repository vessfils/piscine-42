/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 15:06:40 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 16:24:49 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	tamere(unsigned char oc, int n)
{
	if (n <= 0)
		return (ft_putchar(oc + '0'));
	tamere(oc / 2, n - 1);
	tamere(oc % 2, -1);
}
void	print_bits(unsigned char octet)
{
	tamere(octet, 7);
}

#include <stdio.h>
int		main(void)
{
	int n = 2;
	print_bits(n);
}

