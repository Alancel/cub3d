/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alancel <alancel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 14:05:08 by alancel           #+#    #+#             */
/*   Updated: 2020/10/30 19:59:48 by alancel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int sym)
{
	return ((sym >= 'A' && sym <= 'Z') || (sym >= '0' && sym <= '9') ||
	(sym >= 'a' && sym <= 'z'));
}