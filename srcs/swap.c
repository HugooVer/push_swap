/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:45:52 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/20 15:37:25 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *s)
{
	int	tmp;

	tmp = s->data[s->idx_a];
	s->data[s->idx_a] = s->data[s->idx_a + 1];
	s->data[s->idx_a + 1] = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_stack *s)
{
	int	tmp;

	tmp = s->data[s->idx_a - 1];
	s->data[s->idx_a - 1] = s->data[s->idx_a];
	s->data[s->idx_a] = tmp;
	ft_printf("sb\n");
}

void	swap_a_b(t_stack *s)
{
	swap_a(s);
	swap_b(s);
	ft_printf("ss\n");
}
