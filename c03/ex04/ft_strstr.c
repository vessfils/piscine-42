/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 12:44:51 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/12 12:04:29 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == 0)
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
 
int main()
{
	char str[] = "jBonjour";

	ft_strstr(str,"jour");
	printf("\n");
	printf("%s\n",str);

	strstr(str,"jour");
	printf("%s\n",ft_strstr(str,"jour"));

	printf("%s\n",strstr(str,"jour"));
}
*/
