/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 07:23:02 by tatashir          #+#    #+#             */
/*   Updated: 2022/10/25 14:06:52 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptr_dst;
	char	*ptr_src;
	size_t	i;

	ptr_dst = (char *)dst;
	ptr_src = (char *)src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		*(ptr_dst + i) = *(ptr_src + i);
		i++;
	}
	return (dst);
}

// void	*ft_memcpy(void *dst, const void *src, size_t n)
// {
// 	size_t	i;
// 	char	*dst1;
// 	char	*src1;

// 	if (dst == NULL || src == NULL)
// 		return (0);
// 	dst1 = (char *)dst;
// 	src1 = (char *)src;
// 	i = 0;
// 	while (i < n)
// 	{
// 		dst1[i] = src1[i];
// 		i++;
// 	}
// 	return (dst1);
// }
