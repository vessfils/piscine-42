/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 11:16:33 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/25 12:03:18 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
	int i ;

	i = 0;
	while (str[i])
	{
		i++;
	}

	return (i);
}
int main(int ac, char **av)
{
	int i ;


	i = ft_strlen(av[1]);
	if (ac > 1)
	{
		while (i >= 0)
		{
			write(1, &av[1][i], 1);
			i--;
		}
	}
	return (0);
}
