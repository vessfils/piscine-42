/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 20:05:03 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/19 12:21:25 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	*range = 0;
	if (min >= max)
		return (0);
	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	if (*range == 0)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int	main()
{
	int *tab1;

	int i;
	
	int len;

	i = 0;
	len  = ft_ultimate_range(&tab1, 2, 4);
	while (i < len)
	{
		printf("%p\n", &tab1[i]);
		printf("%d\n", tab1[i]);
		i++;
	}
}
*/
