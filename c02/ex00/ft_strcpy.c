/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 09:22:06 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/11 10:18:58 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

#include <stdio.h> 
int main(void) {

char dest [] = ""; 
char src [] = "oui"; 

ft_putstr(dest);
printf("\n"); 
ft_putstr(src);
printf("\n"); 
ft_strcpy(dest, src); 
ft_putstr(dest);
printf("\n"); 
ft_putstr(src);

return 0; 
} 
*/
