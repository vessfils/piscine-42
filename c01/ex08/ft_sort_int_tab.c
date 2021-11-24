/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 20:21:29 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/08 16:22:45 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)

{
	int	i;
	int	tmp;

	while (size--)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
			}
			i++;
		}
	}
}

/*
#include <stdio.h>
int main()
{
	int i;

	i = 0;

	int tab[] = {5,4,4,4,1,0,1};

	ft_sort_int_tab(tab, 7);

	for (i = 0; i< 7; i++)
	{
		printf("%d", tab[i]);
	}
}
*/
