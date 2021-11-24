/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 19:00:43 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/25 18:46:56 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*ret;

	i = 0;
	ret = malloc(sizeof(int) * length + 1);
	if (!ret || length < 1)
		return (NULL);
	while (i < length)
	{
		ret[i] = (*f)(tab[i]);
		i++;
	}
	return (ret);
}
