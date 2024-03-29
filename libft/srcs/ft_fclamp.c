/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fclamp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psigfry <psigfry@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:09:28 by psigfry           #+#    #+#             */
/*   Updated: 2019/08/15 15:09:29 by psigfry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_fclamp(float n, float min, float max)
{
	if (n < min)
		return (min);
	return (n > max ? max : n);
}
