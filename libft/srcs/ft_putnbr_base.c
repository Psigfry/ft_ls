/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:19:51 by psigfry           #+#    #+#             */
/*   Updated: 2019/08/15 15:19:52 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base(int n, int b)
{
	long	l;

	l = n;
	if (l < 0)
	{
		write(1, "-", 1);
		l *= -1;
	}
	if (l >= b)
		ft_putnbr_base(l / b, b);
	n = l % b;
	n += n < 10 ? '0' : 'a' - 10;
	write(1, &n, 1);
}