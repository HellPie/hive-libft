/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drossi <drossi@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 21:57:36 by drossi            #+#    #+#             */
/*   Updated: 2021/11/19 22:09:56 by drossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_extra.h"

void	ft_putstr(char const *s)
{
	ft_putstr_fd(s, 1);
}
