/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adben-mc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 21:07:14 by adben-mc          #+#    #+#             */
/*   Updated: 2021/08/08 21:18:21 by adben-mc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first(int l)
{
	int	j;

	j = 0;
	while (j < l)
	{
		if (j == 0)
			ft_putchar('A');
		if (l > 1)
		{
			if (j > 0 && j < l - 1)
				ft_putchar('B');
			if (j == l - 1)
				ft_putchar('C');
		}
		j++;
	}
	ft_putchar('\n');
}

void	middle(int l, int h)
{
	int	i;
	int	j;

	i = 0;
	while (i < h - 2)
	{
		j = 0;
		while (j < l)
		{
			if (j == 0 || j == l - 1)
				ft_putchar('B');
			if (j > 0 && j < l - 1)
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}

void	last(int l)
{
	int	j;

	j = 0;
	while (j < l)
	{
		if (j == 0)
			ft_putchar('A');
		if (l > 1)
		{
			if (j > 0 && j < l - 1)
				ft_putchar('B');
			if (j == l - 1)
				ft_putchar('C');
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int l, int h)
{
	if (l <= 0 || h <= 0)
		return ;
	else
	{
		first(l);
		if (h > 1)
		{
			middle(l, h);
			last(l);
		}
	}
}
