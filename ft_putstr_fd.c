/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spitte <spitte@student.42lehavre.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 16:56:53 by spitte            #+#    #+#             */
/*   Updated: 2026/11/03 17:03:16 by spitte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	int	n;

	n = 0;
	while (str[n] > 0)
	{
		write (fd, &str[n], 1);
		n++;
	}
}

//#include <fcntl.h>
//int	main()
//{
//	char a[13] = "Hello world!";
//	int fd = open("output.txt", O_RDWR | O_CREAT);
//	ft_putstr_fd(a,fd);
//}
