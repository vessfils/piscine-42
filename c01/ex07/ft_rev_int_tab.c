/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 19:34:53 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/08 16:21:06 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
/*
#include <stdio.h>
int	main()
{
	int i;

	i = 0;

	int tab[] = {1,2,3,4,5};

	ft_rev_int_tab(tab, 5);

	for (i = 0; i< 5 ; i++)
	{
	printf("%d",tab[i]);
	}
}
*/
