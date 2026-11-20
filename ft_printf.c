/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 09:28:21 by spitte            #+#    #+#             */
/*   Updated: 2026/11/20 16:45:17 by spitte           ###   ########.fr       */
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

int	printptr(int ptr)
{
	if (!ptr)
	{
		ft_putstr("(nil)");
		return (5);
	}
	else
	{
		ft_putstr("0x");
		ft_unsg_putnbr((unsigned int)ptr, "0123456789abcdef");
		return (3 + findpower_unsgn_base((unsigned int)ptr, 16)); 
	}
}

int	dispatch(char c, va_list *ap)
{
	int		i;

	i = 1;
	if (c == 'c')
		return (ft_putchar((char)va_arg (*ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg (*ap, char *)));
	if (c == 'p')
		return (printptr(va_arg (*ap, int)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr_base((long int)va_arg(*ap, int), "0123456789"));
	if (c == 'u')
		return (ft_unsg_putnbr(va_arg(*ap, unsigned int), "0123456789"));
	if (c == 'x')
		return (ft_unsg_putnbr(va_arg(*ap, int), "0123456789abcdef"));
	if (c == 'X')
		return (ft_unsg_putnbr(va_arg(*ap, int), "0123456789ABCDEF"));
	if (c == '%')
		return (ft_putchar('%'));
	else
	{
		return (-1);
	}
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	size_t	i;
	int		s;

	s = 0;
	i = 0;
	va_start (ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%' && fmt[i + 1] && inset(fmt[i + 1], "cspdiuxX%"))
		{
			i++;
			s = s + dispatch(fmt[i], &ap);
		}
		else
		{
			ft_putchar(fmt[i]);
			s ++;
		}
		i++;
	}
	return (s);
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
