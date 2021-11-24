/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 09:14:35 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 09:24:17 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char *ft_strdup(char *src)
{
	int i;
	int len;
	char *str;

	i = 0;
	len = ft_strlen(src);

	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);

	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

#include <stdio.h>
int main ()
{
	char * src = "Hello";

printf("%s\n", ft_strdup(src));



}
