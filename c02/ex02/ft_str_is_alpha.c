/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 10:37:49 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/11 10:23:04 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
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
char alphabet[256] ="ABCDabcd";
char mixte[256] ="a123a";
char chiffre[256] ="123";
ft_putstr(alphabet);
printf("\n");
printf(" %d\n",ft_str_is_alpha(alphabet));
printf("\n");
ft_putstr(chiffre);
printf("\n");
printf(" %d\n",ft_str_is_alpha(chiffre));
printf("\n");
ft_putstr(mixte);
printf("\n");
printf(" %d\n",ft_str_is_alpha(mixte));
printf("\n");

return(0);
}
*/
