/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 12:32:56 by bdurst            #+#    #+#             */
/*   Updated: 2020/01/04 17:17:33 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	p = s;
	while (n--)
		*p++ = 0;
}
