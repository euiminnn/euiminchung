/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 14:53:21 by echung            #+#    #+#             */
/*   Updated: 2020/10/22 21:18:10 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int rarr[size];
	int i;

	i = 0;
	while (i < size)
	{
		rarr[size - i - 1] = tab[i];
		i++;
	}
}
