/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 15:58:28 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/19 12:06:06 by jcampagn         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	int		LEN;
	int		i;
	char	*str;

	LEN = 0;
	LEN = ft_strlen(src);
	str = (char *)malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
/*
#include <stdio.h>
int	main()
{
	char src1[] = "1258445588";

	char *src2;

	src2 = ft_strdup(src1);

	printf("%s\n", src1);
	printf("%s\n", src2);

}
*/
