/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 12:14:04 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/24 09:27:01 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = ft_strlen(dest);
	while (src[i])
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[i + n] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*tab;
	int		wordlen;

	i = 0;
	wordlen = 0;
	if (size == 0)
		return (malloc(sizeof(char)));
	if (size < 0)
		return (NULL);
	while (i < size)
		wordlen = wordlen + ft_strlen(strs[i++]);
	tab = malloc(sizeof(char) * (wordlen + (size - 1) * ft_strlen(sep) + 1));
	i = 0;
	tab[0] = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i++ < size - 1)
			ft_strcat(tab, sep);
	}
	return (tab);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
    char *dest = ft_strjoin(argc, argv, "454");
    printf("%s\n", dest);
}
*/
