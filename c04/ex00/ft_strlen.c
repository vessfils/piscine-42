/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:21:31 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/15 09:32:19 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(void)
{
	char s1[] = "MyStr";
	char s2[] = "MyTest\nOfSuccess";
	char s3[] = "0123456789abcdef";
	char s4[] = "My\tStr";
	char s5[] = "";
	printf(ft_strlen(s1) == 5 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s2) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s3) == 16 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s4) == 6 ? "Success\n" : "Fail\n");
	printf(ft_strlen(s5) == 0 ? "Success\n" : "Fail\n");
	return (0);
}
*/
