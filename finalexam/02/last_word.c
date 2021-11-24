/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 11:01:20 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 11:37:37 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_strlen(char *str)
{
	int i;

	i = 0;

	while (str[i])
		i++;
	return (i);

}
int main(int ac, char **av)
{
	int i;

	i = ft_strlen(av[1]) - 1;
	if (ac == 2)
	{

		while (av[1][i] == ' ' || av[1][i] == '\t')
		{
			i--;
		}
		while (av[1][i] != ' ' && av[1][i] != '\t')
		{
			i--;
		}
		i++;
		while (av[1][i] != ' ' && av[1][i] != '\t' && i < ft_strlen(av[1]))
		{
			write(1, &av[1][i],1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
