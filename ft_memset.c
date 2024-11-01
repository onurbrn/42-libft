/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: onur <onur@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:09:15 by odalkili          #+#    #+#             */
/*   Updated: 2024/10/29 18:47:28 by onur             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_ptr;

	tmp_ptr = (unsigned char *) b;
	while (len > 0)
	{
		*(tmp_ptr++) = (unsigned char) c; //1 byte atama yaptığı için char türüne değiştiriyoruz
		len--;
	}
	return (b);
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9};
	int c = 255;
	int len = 8;

	ft_memset(a,c,len);
	ft_memset(a,127,1);

	int i =0;
	while (i < len)
	{
		printf("%d\n", a[i]);
		i++;
	}
}
