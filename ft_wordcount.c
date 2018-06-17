/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwolf <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:52:31 by jwolf             #+#    #+#             */
/*   Updated: 2018/05/28 09:31:54 by jwolf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *s, char c)
{
	int		words;
	int		i;

	i = 0;
	words = 0;
	while (s && *(s + i))
	{
		while (s && *(s + i) == c)
			i++;
		while (*(s + i))
			words++;
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (words);
}
