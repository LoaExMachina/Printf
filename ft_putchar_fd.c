/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:30:46 by spitte            #+#    #+#             */
/*   Updated: 2026/11/03 17:34:55 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

//#include <fcntl.h>
//int main()
//{
//	int fd = open("output.txt", O_RDWR | O_CREAT);
//	ft_putchar_fd('a',fd);
//}
