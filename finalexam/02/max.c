/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 14:22:26 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 15:06:02 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	max(int *tab, unsigned int len)
{
	unsigned int i;
	int tmp;

	tmp = 0;
	i = 1;
	if (!len)
		return (0);
		while (i < len - 1)
		{	
			if	(tab[i] < tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				i = -1;
			}
			i++;
		}
	return (tab[0]);

}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int	tab[] = {42, 88, 5, 64, 2, 68, 1};

	printf("max : %d", max(tab, 7));
	return (0);
}
