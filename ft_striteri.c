/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 01:25:56 by odalkili          #+#    #+#             */
/*   Updated: 2024/11/03 01:25:57 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

void f (unsigned int a, char *b)
{
	*b = *b + a;	
}

#include <stdio.h>
int main()
{
	char s[50] = "abcd"; //aceg

	ft_striteri(s,f);
	printf("%s\n", s);
	
}
