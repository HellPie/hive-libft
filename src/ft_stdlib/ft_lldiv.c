/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lldiv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 20:52:40 by drossi            #+#    #+#             */
/*   Updated: 2021/11/07 20:52:57 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

t_lldiv	ft_lldiv(long long num, long long den)
{
	return ((t_lldiv){num / den, num % den});
}