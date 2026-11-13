/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 17:46:15 by spitte            #+#    #+#             */
/*   Updated: 2026/11/13 16:33:40 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

int	isbasevalid(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}


void	ft_putnbr_base(int nb, char *base)
{
	int		len;
	char	digit;
	int		sign;
	long	nbr;

	nbr = (long)nb;
	sign = 1;
	if (isbasevalid(base) == 0)
		return ;
	len = ft_strlen(base);
	if (nbr == 0)
		write(1, "0", 1);
	else
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			sign = -1;
		}
		if (nbr != 0)
		{
			if (nbr / len != 0)
				ft_putnbr_base(sign * (nbr / len), base);
			digit = base[(sign * nbr) % len];
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
