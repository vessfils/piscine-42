/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 14:48:09 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/23 14:59:54 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putstr(char *str)
{
	int i;

	i = 0;

	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;

	i = argc - 1 ;
	if (argc > 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
