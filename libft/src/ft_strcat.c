/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:42:09 by doriani           #+#    #+#             */
/*   Updated: 2023/03/25 09:38:16 by doriani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*idx;

	idx = dest;
	while (*idx)
		idx++;
	while (*src)
		*idx++ = *src++;
	*idx = '\0';
	return (dest);
}
