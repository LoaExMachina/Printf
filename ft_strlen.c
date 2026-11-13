/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 13:46:28 by spitte            #+#    #+#             */
/*   Updated: 2026/11/13 15:22:16 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//int main()
//{
//#include <stdio.h>
//	printf("rien:%zu\n1:%zu\n",ft_strlen(""),ft_strlen("1"));
//	printf("123456789:%zu",ft_strlen("123456789"));
//}
