/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinda-si <vinda-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:12:00 by vinda-si          #+#    #+#             */
/*   Updated: 2024/10/28 15:08:38 by vinda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c);

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (8);
	if (c >= 'a' && c <= 'z')
		return (8);
	if (c >= 'A' && c <= 'Z')
		return (8);
	return (0);
}