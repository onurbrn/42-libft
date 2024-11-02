/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:25:20 by odalkili          #+#    #+#             */
/*   Updated: 2024/11/03 01:25:20 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>    // For open() and file control options
#include <stdio.h> 

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

int main(void)
{
    int fd;

    // Open or create a .txt file to write into
    fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0777);
    if (fd == -1)
    {
        perror("Error opening file");
        return 1;
    }
    // Call ft_putendl_fd with a string and the file descriptor
    ft_putendl_fd("Hello, 42!", fd);

    // Close the file
    close(fd);

    return 0;
}
