/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:43:34 by tatashir          #+#    #+#             */
/*   Updated: 2022/10/25 14:20:34 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (!len || d == s)
		return (d);
	if (s < d)
	{
		while (len--)
		*(d + len) = *(s + len);
	}
	else
	{
		while (len--)
		*d++ = *s++;
	}
	return (dst);
}
