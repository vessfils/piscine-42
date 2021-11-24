/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 18:42:02 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/18 12:46:00 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
unsigned int	ft_strlen(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	checkbase(char *base)
{
	int	i;
	int	n;
	int	j;

	i = 0;
	j = 0;
	n = ft_strlen(base);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 127)
			return (0);
		i++;
	}
	while (base[j])
	{
		if (base[i] == base[j])
			return (0);
		j++;
	}
	if (n == 0 || n == 1)
		return (0);
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nbr_unsigned;

	if (checkbase(base) == 1)
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			nbr_unsigned = nbr * -1;
		}
		else
			nbr_unsigned = nbr;
		if (nbr_unsigned >= ft_strlen(base))
		{
			ft_putnbr_base(nbr_unsigned / ft_strlen(base), base);
			ft_putnbr_base(nbr_unsigned % ft_strlen(base), base);
		}
		else
			ft_putchar(base[nbr_unsigned]);
	}
}

/*
#include <stdio.h>

int main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(42, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");
	return 0;
} 
*/
