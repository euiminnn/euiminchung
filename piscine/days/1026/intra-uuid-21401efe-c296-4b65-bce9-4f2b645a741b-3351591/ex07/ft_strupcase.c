/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:31:16 by echung            #+#    #+#             */
/*   Updated: 2020/10/27 20:37:41 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char *temp;

	temp = str;
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (temp);
}
