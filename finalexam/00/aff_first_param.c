/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:05:57 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/23 14:14:04 by jcampagn         ###   ########.fr       */
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

int main (int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < 2)
		{
			ft_putstr(argv[i]);
			write(1,"\n" , 1);
			i++;
		}
	}
	else
		write(1,"\n" , 1);
	return (0);
}
