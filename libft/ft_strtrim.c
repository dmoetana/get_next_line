/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmoetana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 14:40:53 by dmoetana          #+#    #+#             */
/*   Updated: 2018/06/12 09:58:05 by dmoetana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	if (c == '\t' || c == ' ' || c == '\n' || c == '\f')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	unsigned int	i;
	size_t			len;
	char			*trimmed;

	if (!s)
		return (0);
	i = 0;
	while (is_whitespace(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && is_whitespace(s[len]))
		len--;
	if (len < i)
		return (trimmed = ft_strdup(""));
	return (trimmed = ft_strsub(s, i, len - (size_t)i + 1));
}
