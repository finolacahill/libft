/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcahill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:53:30 by fcahill           #+#    #+#             */
/*   Updated: 2018/11/20 19:19:13 by fcahill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char	*str1;
	const char		*str2;

	str1 = dst;
	str2 = src;
	i = 0;
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (void *)(dst);
}
