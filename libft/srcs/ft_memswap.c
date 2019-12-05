/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:18:28 by psigfry           #+#    #+#             */
/*   Updated: 2019/08/15 15:18:29 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memswap(void *a, void *b)
{
	void	*temp;

	temp = a;
	a = b;
	b = temp;
}
