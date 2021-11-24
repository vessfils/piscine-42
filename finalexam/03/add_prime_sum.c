/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 18:55:18 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 20:04:38 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if ( nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);	
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}
int ft_atoi (char *str)
{
	int neg;
	int value;
	int i;

	value = 0;
	neg = 1;
	i = 0;

	while(str[i] <= 32)
	{
		i++;
	}
	if (str[i] && (str[i] == '+' || str[i] == '-'))
		if (str[i] == '-')
		{
			neg = neg * -1;
			i++;
		}

	while(str[i] >= '0' && str[i] <= '9')
	{
		value = value * 10 + str[i] -'0';
		i++;
	}
	return (neg * value);
}

int prime (int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d", prime(3));

	return (0);

}
