/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsg_putnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:46:15 by spitte            #+#    #+#             */
/*   Updated: 2026/11/14 12:34:35 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_unsg_putnbr(unsigned int nbr, char *base)
{
	int		len;
	char	digit;

	if (isbasevalid(base) == 0)
		return ;
	len = ft_strlen(base);
	if (nbr == 0)
		write(1, "0", 1);
	else
	{
		if (nbr != 0)
		{
			if (nbr / len != 0)
				ft_putnbr_base((nbr / len), base);
			digit = base[(nbr) % len];
			write(1, &digit, 1);
		}
	}
}
//int main()
//{
//	ft_putnbr_base(42,"01");
//	write(1,"\n",1);
//	ft_putnbr_base(-42,"po-eyvif");
//	write(1,"\n",1);
//	ft_putnbr_base(0,"0123456789");
//	write(1,"\n",1);
//	ft_putnbr_base(2147483647,"0123456789ABCDEF");
//	write(1,"\n",1);
//	ft_putnbr_base(-2147483648,"poneyvif");
//}
