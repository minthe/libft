/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfuhlenb <vfuhlenb@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 15:22:15 by vfuhlenb          #+#    #+#             */
/*   Updated: 2021/08/15 11:30:10 by vfuhlenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap. */

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t    i;
    char    *csrc;
    char    *cdest;

    csrc = (char *) src;
    cdest = (char *) dest;
    i = 0;
    if ((!csrc) && (!cdest))
    	return (0);
    while (i < n)
        {
            cdest[i] = csrc[i];
            i++;
        }
    return (dest);
}
