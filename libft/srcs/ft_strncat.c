/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:57:29 by psigfry           #+#    #+#             */
/*   Updated: 2019/08/15 15:57:30 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(dst);
	while (*src && n--)
		dst[i++ + len] = *src++;
	dst[i + len] = '\0';
	return (dst);
}
