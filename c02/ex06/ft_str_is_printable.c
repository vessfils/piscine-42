/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:23:02 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/10 15:34:00 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}

/*
void	ft_putstr(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		write(1, &src[i], 1);
		i++;
	}
}

#include <stdio.h>
int main()
{
	char alphabet[256] ="abcd";
	char mixte[256] ="\177";
	char chiffre[256] ="Abcd\n";
	ft_putstr(alphabet);
	printf("\n");
	printf(" %d\n",ft_str_is_printable(alphabet));
	printf("\n");
	ft_putstr(chiffre);
	printf("\n");
	printf(" %d\n",ft_str_is_printable(chiffre));
	printf("\n");
	ft_putstr(mixte);
	printf("\n");
	printf(" %d\n",ft_str_is_printable(mixte));
	printf("\n");

	return(0);
}
*/
