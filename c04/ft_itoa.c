/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 12:25:42 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/18 17:15:42 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		i++;
	}
	return (i);
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

int	ft_nbrlen(int nb, char *base)
{
	int	i;

	i = 0;
	while (nb / ft_strlen(base) > 0)
	{
		nb = nb / ft_strlen(base);
		i++;
	}
	return (i + 1);
}

char*	ft_itoa_base(int num, char *str, char  *base)
{
	int	i;
	int	size;
	int	sizenum;
	int sign;

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
	{
		str[i] = base[0];
		str[i + 1] = '\0';
	}	
	while (num > 0)
	{
		str[i] = base[(num % size)];
		num = num / ft_strlen(base);
		i++;
	}
	if (sign == -1)
	{
		str[i] = '-';
		i++;
	}
	str[i] = 0;
	return (ft_reverse(str));
}

/*
#include <stdio.h>
int main()
{	
	int value;
	char  *base;
	char buffer; 
	value = 42;
	base = "0123456789abcdef";

	printf("%s\n", ft_itoa_base(value, &buffer, base));
	return (0);
}
*/
