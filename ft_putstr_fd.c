/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:25:31 by odalkili          #+#    #+#             */
/*   Updated: 2024/11/03 01:25:31 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h> 

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int main()
{
	char *a = "asd";
	int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
	ft_putstr_fd(a, fd);
}