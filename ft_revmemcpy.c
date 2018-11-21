/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revmemcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcahill <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:36:05 by fcahill           #+#    #+#             */
/*   Updated: 2018/11/18 16:49:21 by fcahill          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_revmemcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	const char		*str2;

	str1 = dst;
	str2 = src;
	while (n > 0)
	{
		str1[n] = str2[n];
		n--;
	}
	str1[n] = str2[n];
	return (void *)(dst);
}
