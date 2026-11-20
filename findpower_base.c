/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findpower_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 13:36:07 by spitte            #+#    #+#             */
/*   Updated: 2026/11/20 17:51:11 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int findpower_base(int n, int base)
{
    int     power;
    long int	nb;

    nb = (long int)n;
    power = 0;
    while ((nb > 0 && nb >= base) || (nb < 0 && nb <= -base))
    {
        nb = nb / base;
        power++;
    }
    return (power);
}

int findpower_unsgn_base(unsigned int  n,unsigned int base)
{
    int     power;

    power = 0;
    while (n > 0 && n >= base)
    {
        n = n / base;
        power++;
    }
    return (power);
}

