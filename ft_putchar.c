/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:30:46 by spitte            #+#    #+#             */
/*   Updated: 2026/11/20 15:19:39 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

//#include <fcntl.h>
//int main()
//{
//	int fd = open("output.txt", O_RDWR | O_CREAT);
//	ft_putchar_fd('a',fd);
//}
