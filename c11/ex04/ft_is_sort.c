/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 16:07:44 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/25 18:46:02 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sortdsc(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sortasc(int *tab, int length, int(*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if ((ft_is_sortdsc(tab, length, f) == 1)
		|| (ft_is_sortasc(tab, length, f) == 1))
		return (1);
	else
		return (0);
}
/*
int bb(int a, int b)
{
	return (a - b);
}
#include <stdio.h>

int main()
{
	int tab[3] = {0, 0, 0};
	printf("%d\n", ft_is_sort(tab, 3, bb));
}
*/
