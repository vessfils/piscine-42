/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/26 16:26:41 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/26 16:33:43 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int i;

	unsigned char result;

	i = 8;

	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;

		i--;
	}
	return (result);
}
/*
#include <stdio.h>
int main ()
{
	printf("%c\n", reverse_bits("2"));

	return (0);
}
*/
