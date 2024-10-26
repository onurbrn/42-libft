/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odalkili <odalkili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:54:23 by odalkili          #+#    #+#             */
/*   Updated: 2024/10/26 20:41:04 by odalkili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_isascii(int c)
{
    if (c >=0 && c <= 127)
        return (1);
    return (0);
}