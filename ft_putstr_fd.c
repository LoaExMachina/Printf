/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:56:53 by spitte            #+#    #+#             */
/*   Updated: 2026/11/16 13:57:50 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_printf.h"

void	ft_putstr_fd(char *str, int fd)
{
	write (fd, str, ft_strlen(str));
}

//#include <fcntl.h>
//int	main()
//{
//	char a[13] = "Hello world!";
//	int fd = open("output.txt", O_RDWR | O_CREAT);
//	ft_putstr_fd(a,fd);
//}
