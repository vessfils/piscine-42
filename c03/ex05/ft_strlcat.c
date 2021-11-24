/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 17:49:37 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/13 14:17:52 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	z;

	i = 0;
	n = ft_strlen(dest);
	z = ft_strlen(src);
	if (size < n)
		return (ft_strlen(src) + size);
	while (src[i] && size && i + n < size - 1)
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[i + n] = 0;
	return (n + z);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char src[222] = " Hello";
	char dest[256] = "";
	char dest1[256] = "";

printf("%s\n",dest);

printf("%d\n",ft_strlcat(dest, src, 0));
printf("%s\n",dest);
printf("%lu\n",strlcat(dest1, src, 0));
printf("%s\n",dest1);
}
*/
