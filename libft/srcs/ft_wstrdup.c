/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:59:13 by psigfry           #+#    #+#             */
/*   Updated: 2019/08/15 15:59:14 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

wchar_t	*ft_wstrdup(wchar_t const *s1)
{
	wchar_t	*s2;
	size_t	len;

	len = ft_wstrlen((unsigned *)s1) * sizeof(wchar_t);
	if (!s1 || !(s2 = (wchar_t *)ft_memalloc((sizeof(wchar_t) + len))))
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}
