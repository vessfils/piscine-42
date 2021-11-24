/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vess <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 15:18:15 by vess              #+#    #+#             */
/*   Updated: 2021/11/15 23:35:15 by vess             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 
#include <stdio.h> 

void ft_putchar(char a) 
{ 
	write(1, &a, 1); 
} 

void ft_print_combn(int n) 
{
	int	combn[n];
	int	p;
/* gere les deux cas ou n pas ok*/
	if (n <= 0 || n >= 10)
		return ;
	else
	{
		p = 0;
/* Set first combination. */
		while (p < n)
		{
			combn[p] = p;
			p++;
		}
		while (p > 0)
		{
			int maxdigit = 10;
/* Print current combination. */
			p = 0;
			while (p < n)
			{
				ft_putchar(combn[p] + '0');
				p++;
			}
/*
* Work out next combination, if any. 
* Search from right to left looking for a digit that can be 
* incremented. E.g. rightmost digit can be incremented if 
* less than 9, otherwise the digit to its left can be incremented 
* if less than 8, etc.
*/
			p = n;
			while (p--)
			{
				int digit = combn[p];
/*
* Maximum digit value decreases during search from
* right to left.
*/
				if (digit < --maxdigit) 
				{ 
/* 
* Found a digit that can be incremented. 
* Increment that digit and reset all the digits to its 
* right to their minimum allowed value. 
*/ 
					do 
					{ 
						combn[p++] = ++digit; 
					} 
					while (p < n); 
/* Print separator. */ 
					ft_putchar(','); 
					ft_putchar(' '); 
/* Break out of search. */ 
					break; 
				} 
			}
		}  
		ft_putchar('\n'); 
	} 
} 

#include <stdlib.h>
int main() 
{
	
		ft_print_combn(2);
	return (0);
} 

