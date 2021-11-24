/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:13:29 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/08 18:06:28 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str != '\0')
	{	
		str++;
		size++;
	}
	return (size);
}
/*
#include <stdio.h>
int	main()
{
	char tab[]= "Hello";

	printf("%d\n",ft_strlen(tab));
}
*/
