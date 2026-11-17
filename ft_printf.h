/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:24:19 by spitte            #+#    #+#             */
/*   Updated: 2026/11/16 13:55:01 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# include <string.h>
# define FT_PRINTF_H

int		ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putnbr_base(long nbr, char *base);
void	ft_unsg_putnbr(unsigned int nbr, char *base);
void	ft_printf(const char *fmt, ...);

#endif // FT_PRINTF_H
