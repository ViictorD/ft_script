/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdarmaya <vdarmaya@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/12 16:49:04 by bdurst            #+#    #+#             */
/*   Updated: 2020/01/04 17:15:55 by vdarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IO_H
# define IO_H

# include <unistd.h>
# include <string.h>
# include "gnl.h"

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(long n);
void				ft_fputchar(char c, int fd);
void				ft_fputstr(char const *s, int fd);
void				ft_fputendl(char const *s, int fd);
void				ft_fputnbr(long n, int fd);

#endif