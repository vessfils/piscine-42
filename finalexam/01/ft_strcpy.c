/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 20:18:00 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/24 15:00:38 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char *ft_strcpy(char *s1, char *s2)
{
	int i ;

	i = 0;
	while (s1[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = 0;

	return (s1);

}

int main (int ac, char **av)
{
	if (ac > 1)
	{
		ft_putstr(ft_strcpy(av[1], av[2]));
		write(1, "\n", 1);
	}
	return (0);
}

