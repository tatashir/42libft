/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatashir <tatashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:49:39 by tatashir          #+#    #+#             */
/*   Updated: 2022/10/14 14:27:08 by tatashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find_trimmed(char const *c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == *c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*ptr;

	start = 0;
	while (s1[start] && ft_find_trimmed(&s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (start < end && ft_find_trimmed(&s1[end - 1], set))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (0 < end - start)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return (ptr);
}
