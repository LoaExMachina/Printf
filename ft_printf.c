/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:28:21 by spitte            #+#    #+#             */
/*   Updated: 2026/11/19 15:12:24 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_printf.h"

int	inset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

void	printptr(int ptr)
{
	if (!ptr)
		ft_putstr_fd("(nil)", 1);
	else
	{
		ft_putstr_fd("0x", 1);
		ft_putnbr_base(ptr, "0123456789abcdef");
	}
}

void	dispatch(char c, va_list *ap)
{
	if (c == 'c')
		ft_putchar_fd((char)va_arg (*ap, int), 1);
	if (c == 's')
		ft_putstr_fd(va_arg (*ap, char *), 1);
	if (c == 'p')
		printptr(va_arg (*ap, int));
	if (c == 'd' || c == 'i')
		ft_putnbr_base((long int)va_arg(*ap, int), "0123456789");
	if (c == 'u')
		ft_unsg_putnbr(va_arg(*ap, unsigned int), "0123456789");
	if (c == 'x')
		ft_unsg_putnbr(va_arg(*ap, int), "0123456789abcdef");
	if (c == 'X')
		ft_unsg_putnbr(va_arg(*ap, int), "0123456789ABCDEF");
	if (c == '%')
		ft_putchar_fd('%', 1);
}

void	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	size_t	i;

	i = 0;
	va_start (ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1] && inset(fmt[i + 1], "cspdiuxX%"))
		{
			i++;
			dispatch(fmt[i], &ap);
		}
		else
			ft_putchar_fd(fmt[i], 1);
		i++;
	}
}

//#include <stdio.h>
//#include <limits.h>
//int main()
//{
//	unsigned char *a = malloc(2);
//	ft_printf("FT: %s %c %i %%", "Deter", 'a',100);
//	ft_printf("\n %p \n %p \n %u \n %i %&", NULL, a, -5, INT_MAX); 
//	printf("\nOG: %s %c %i %%", "Deter", 'a',100);
//	printf("\n %p \n %p \n %u \n %i %&", NULL, a, -5, INT_MAX);
//	free(a);
//}
