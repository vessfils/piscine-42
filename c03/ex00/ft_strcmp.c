/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 17:47:55 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/20 11:46:29 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{		
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
char s1[] = "Hellooooolllqoqoqoq";

char s2[] = "Hellnolqlqoqqlqoqoq";

printf("%d\n",ft_strcmp(s1, s2));

printf("%d\n",strcmp(s1, s2));
}
*/

