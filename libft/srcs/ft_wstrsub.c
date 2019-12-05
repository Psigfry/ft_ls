/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrsub.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:59:29 by psigfry           #+#    #+#             */
/*   Updated: 2019/08/15 15:59:30 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wstrsub(wchar_t *s, unsigned start, unsigned len)
{
	wchar_t		*str;
	unsigned	i;

	if (!(str = ft_memalloc(sizeof(wchar_t) * (len + 1))))
		return (NULL);
	i = 0;
	while (ft_wcharlen(s[i + start]) < len)
	{
		str[i] = s[i + start];
		i += ft_wcharlen(str[i]);
	}
	str[i] = '\0';
	return (str);
}
