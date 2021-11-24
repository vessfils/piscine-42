/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 10:03:47 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/23 16:29:36 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_strlen(char *str);
int		ft_nbrlen(int nb, char *base);

int	checkbase(char *base)
{
	int	i;
	int	n;
	int	j;

	i = 0;
	n = ft_strlen(base);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126
			|| base[i] == ' ')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (n == 0 || n == 1)
		return (0);
	return (1);
}

int	is_in_base(char tofind, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (tofind == base[i])
			return (i);
		i++;
	}
	return (-1);
}

long int	ft_atoi_base(char *str, char *base)
{
	int				neg;
	long int		value;
	int				i;

	i = 0;
	value = 0;
	neg = 1;
	while (str[i] && (str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f'
			|| str[i] == '\r' || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			neg = neg * (-1);
		i++;
	}
	while (is_in_base(str[i], base) != -1)
	{
		value = (value * ft_strlen(base)) + is_in_base(str[i], base);
		i++;
	}
	return (neg * value);
}

char	*ft_reverse(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str);
	while (j > i)
	{
		j--;
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa_base(long int num, char *str, char *base)
{
	int	i;
	int	size;
	int	sizenum;
	int	sign;

	i = 0 ;
	sign = 1;
	size = ft_strlen(base);
	if (num < 0)
	{
		sign = -1;
		num = -num;
	}
	sizenum = ft_nbrlen(num, base);
	if (num == 0)
		str[i++] = base[0];
	while (num > 0)
	{
		str[i++] = base[(num % size)];
		num = num / ft_strlen(base);
	}
	if (sign == -1)
		str[i++] = '-';
	str[i] = 0;
	return (ft_reverse(str));
}
