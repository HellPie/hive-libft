/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 15:24:44 by drossi            #+#    #+#             */
/*   Updated: 2021/11/18 23:49:40 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

/**
 * WARN: This is inefficient, it lacks overlap fail-fast checks, but it works.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*from;
	unsigned char		*to;

	if (n <= 0)
		return (dest);
	from = (unsigned char *)src;
	to = (unsigned char *)dest;
	if (from == to)
		return (dest);
	while (n--)
		*to++ = *from++;
	return (dest);
}
