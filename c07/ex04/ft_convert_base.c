/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:36:08 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/24 09:26:49 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
char	checkbase(char *base);
int		is_in_base(char tofind, char *base);
int		ft_atoi_base(char *str, char *base);
char	*ft_reverse(char *str);
char	*ft_itoa_base(long int num, char *str, char *base);

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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	conv_int;
	int			i;
	char		*dest;

	if (checkbase(base_from) == 1 && checkbase(base_to) == 1)
	{
		conv_int = ft_atoi_base(nbr, base_from);
		i = ft_nbrlen(conv_int, base_to);
		dest = malloc(sizeof(char) * (i) + 1);
		dest = ft_itoa_base(conv_int, dest, base_to);
		return (dest);
	}	
	if (checkbase(base_from) == 0 || checkbase(base_to) == 0)
		return (NULL);
	return (NULL);
}
/*
#include <stdio.h>
int main(int argc,char **argv)
{
	if (argc > 1)
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
}
*/
