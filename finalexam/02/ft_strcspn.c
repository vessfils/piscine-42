/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 09:04:15 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 09:14:01 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
size_t ft_strcspn(const char *s, const char *reject)
{
	
	size_t i;

	size_t i2;

	i = 0;

	i2 = 0;

	while (s[i])
	{
		i2= 0;

		while (reject[i2])
		{
			if (s[i] == reject[i2])
				return (i);
			i2++;
		}

		i++;
	}
	i = 0;

	while (s[i])
	{
		i++;
	}
	
	return (i);

}

#include <stdio.h>
int main ()
{
	char *str;

	char *reject;


	str = "Hello";

	reject = "l";


printf("%zu\n",ft_strcspn(str, reject));


}
