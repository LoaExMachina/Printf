/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:46:15 by spitte            #+#    #+#             */
/*   Updated: 2026/11/20 17:27:58 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	ft_putnbr_base(long int nbr, char *base)
{
	char	digit;
	int		sign;
	int		nblen;

	sign = 1;
	nblen = findpower_base(nbr, ft_strlen(base)) + 1 + (nbr < 0);
	if (nbr == 0)
		write(1, &base[0], 1);
	else
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			sign = -1;
		}
		if (nbr != 0)
		{
			if (nbr / ft_strlen(base) != 0)
				ft_putnbr_base(sign * (nbr / ft_strlen(base)), base);
			digit = base[(sign * nbr) % ft_strlen(base)];
			write(1, &digit, 1);
		}
	}
	return (nblen);
}
//#include <stdio.h>
//int main()
//{
//	int a = ft_putnbr_base(3,"01");
//	printf("\n %d",a);
//	//write(1,"\n",1);
////	ft_putnbr_base(-42,"po-eyvif");
////	write(1,"\n",1);
////	ft_putnbr_base(0,"0123456789");
////	write(1,"\n",1);
////	ft_putnbr_base(2147483647,"0123456789ABCDEF");
////	write(1,"\n",1);
////	ft_putnbr_base(-2147483648,"poneyvif");
//}
