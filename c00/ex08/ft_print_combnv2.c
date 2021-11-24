/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combnv2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:36:15 by vess              #+#    #+#             */
/*   Updated: 2021/11/16 23:23:38 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int	tab[9];
	int	p;
	int	maxdigit;
	int	digit;

	p = 0;
	digit = 0;
	while (p < n)
	{
		tab[p] = p;
		p++;
	}
	while (p > 0)
	{
		p = 0;
		maxdigit = 10;
		while (p < n)
		{
			ft_putchar(tab[p] + '0');
			p++;
		}
		p = n;
		while (p)
		{
			p--;
			digit = tab[p];
			if (digit < --maxdigit)
			{
				while (p < n)
				{
					tab[p++] = ++digit;
				}
				ft_putchar(',');
				ft_putchar(' ');
				break ;
			}
		}
	}
	ft_putchar('\n');
}

int main ()
{
	ft_print_combn(2);
	return (0);
}

