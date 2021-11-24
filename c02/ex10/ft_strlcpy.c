/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 18:45:54 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/17 13:05:17 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
unsigned int	ft_strlen(char *str)
{
	unsigned int	size;

	size = 0;
	while (*str != '\0')
	{
		str++;
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	dest[i] = '\0';
	if (size == 0)
		return (ft_strlen(src));
	while (*(src + i) != '\0' && i < size - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

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
/*
#include <stdio.h>
#include <string.h> 
int main(void)
{
	char src1a[] = "abcde";
	char dest1a[] = "1234567";
	char src1b[] = "abcde";
	char dest1b[] = "1234567";

	char src2a[] = "abcd";

	char dest2a[] = "123";
	char src2b[] = "abcd";
	char dest2b[] = "123";
	char src3a[] = "";
	char dest3a[] = "";
	char src3b[] = "";
	char dest3b[] = "";
	char src4a[] = "12345";
	char dest4a[] = "abc";
	char src4b[] = "12345";
	char dest4b[] = "abc";
	
printf("%lu %u\n", strlcpy(dest1a, src1a, 4), ft_strlcpy(dest1b, src1b, 4));
}
*/
