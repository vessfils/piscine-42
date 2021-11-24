/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 19:19:55 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/19 12:10:30 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	i = 0;
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*
#include <stdio.h>
int	main()
{
	int *tab1;
	int i;
	
	i = 0;
	tab1 = ft_range(4,2);
	while (i < 4)
	{
		printf("%p\n", &tab1[i]);
		printf("%d\n", tab1[i]);
		i++;
	}
}
*/
