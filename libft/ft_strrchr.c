/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:27:41 by dmoetana          #+#    #+#             */
/*   Updated: 2018/06/11 11:44:43 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*string;

	i = 0;
	string = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			string = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		string = (char *)&s[i];
	return (string);
}
