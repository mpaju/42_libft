/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skip_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpaju <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 18:59:13 by mpaju             #+#    #+#             */
/*   Updated: 2017/10/20 18:59:14 by mpaju            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_skip_char(char *str, char c)
{
	if (!str || *str)
		return (str);
	while (*str == c && *str)
		str++;
	*str ? (0) : (str = NULL);
	return (str);
}
