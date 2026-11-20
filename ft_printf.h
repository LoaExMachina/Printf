/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 11:24:19 by spitte            #+#    #+#             */
/*   Updated: 2026/11/20 16:43:05 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# include <string.h>
# define FT_PRINTF_H

int	ft_strlen(const char *str);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putnbr_base(long nbr, char *base);
int	ft_unsg_putnbr(unsigned int nbr, char *base);
int	ft_printf(const char *fmt, ...);
int	findpower_base(int nbr, int base);
int	findpower_unsgn_base(unsigned int nbr, unsigned int base);

#endif // FT_PRINTF_H
