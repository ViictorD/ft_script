/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fputendl.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/27 12:32:55 by bdurst            #+#    #+#             */
/*   Updated: 2020/02/18 15:01:06 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	ft_fputendl(char const *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
