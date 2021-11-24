/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcampagn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 19:55:36 by jcampagn          #+#    #+#             */
/*   Updated: 2021/08/24 11:42:12 by jcampagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
int	ft_word(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strndup(char *src, int n)
{
	int		LEN;
	int		i;
	char	*str;

	LEN = 0;
	LEN = n;
	str = malloc(sizeof(*str) * (LEN + 1));
	i = 0;
	while (i < LEN)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*ft_put_word(int *debutmot, char *str, char *charset)
{
	int		wordlen;
	char	*mot;

	while (str[*debutmot])
	{
		while (ft_word(str[*debutmot], charset) == 0)
			(*debutmot)++;
		if (ft_word(str[*debutmot], charset) == 1 && str[*debutmot])
		{
			wordlen = 0;
			while (ft_word(str[*debutmot + wordlen], charset) == 1
				&& str[*debutmot + wordlen])
				wordlen++;
			mot = ft_strndup(&str[*debutmot], wordlen);
			*debutmot += wordlen;
			return (mot);
		}
	}
	return (NULL);
}

int	ft_count_word(char *str, char *charset)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (ft_word(str[i], charset) == 0)
			i++;
		if (ft_word(str[i], charset) == 1 && str[i])
		{
			count++;
			while (ft_word(str[i], charset) == 1 && str[i])
				i++;
		}
	}
	return (count);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		debutmot;
	int		i_word;
	int		count;

	i_word = 0;
	debutmot = 0;
	count = ft_count_word(str, charset);
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	while (i_word < count)
	{
		result[i_word] = ft_put_word(&debutmot, str, charset);
		if (result[i_word] == NULL)
			return (NULL);
		i_word++;
	}
	result[i_word] = 0;
	return (result);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
			char **tab;

			(void)argc;
			tab = ft_split(argv[1], argv[2]);
			for (;*tab;tab++)
				printf("%s\n", *tab);
}
*/
