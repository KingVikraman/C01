/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 22:09:23 by rvikrama          #+#    #+#             */
/*   Updated: 2024/05/02 22:00:28 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result_div;
	int	result_rem;

	result_div = *a;
	result_rem = *b;
	*a = result_div / result_rem;
	*b = result_div % result_rem;
}
