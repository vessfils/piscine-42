/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 13:10:43 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/10 15:33:23 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
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
	char mixte[256] ="@123a";
	char chiffre[256] ="Abcd";
	ft_putstr(alphabet);
	printf("\n");
	printf(" %d\n",ft_str_is_lowercase(alphabet));
	printf("\n");
	ft_putstr(chiffre);
	printf("\n");
	printf(" %d\n",ft_str_is_lowercase(chiffre));
	printf("\n");
	ft_putstr(mixte);
	printf("\n");
	printf(" %d\n",ft_str_is_lowercase(mixte));
	printf("\n");

	return(0);
}
*/
