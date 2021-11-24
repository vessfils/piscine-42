/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:17:43 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/22 20:31:44 by jcampagn         ###   ########.fr       */
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

#include <stdio.h>
#include <string.h>
int main()
{
	char src[255] = "Hellovqojvoiqqqqkfqmfq";
	char dest[255] = "Bonjour";

	char src1[255] = "Hello";
	char dest1[255] = "Bonjour";

printf("%s\n",dest);
ft_strcat(dest, src);
printf("\n");
strcat( dest1, src1);
printf("%s\n",dest);
printf("%s\n",dest1);
	
}

