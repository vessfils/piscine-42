/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:44:51 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/13 14:20:09 by jcampagn         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	n;

	i = 0;
	n = ft_strlen(dest);
	while (src[i] && i < nb)
	{
		dest[i + n] = src[i];
		i++;
	}
	dest[i + n] = 0;
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char src[] = "Hello";
	char dest[256] = "Bonjour";
	char src1[] = "Hello";
	char dest1[256] = "Bonjour";

ft_strncat(dest, src, 2);
strncat(dest1, src1, 2);
	printf("%s\n",dest);
	printf("%s\n",dest1);
	
	
}
*/
