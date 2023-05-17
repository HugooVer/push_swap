/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:55:49 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/17 16:15:13 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stack *stack)
{
	int	tmp;
	int	idx;

	tmp = stack->data[stack->size];
	idx = stack->size - 1;
	while (idx > stack->idx_a)
	{
		stack->data[idx + 1] = stack->data[idx];
		--idx;
	}
	stack->data[stack->idx_a] = tmp;
}

void	reverse_rotate_b(t_stack *stack)
{
	int	tmp;
	int	idx;

	tmp = stack->data[0];
	idx = 1;
	while (idx < stack->idx_a)
	{
		stack->data[idx - 1] = stack->data[idx];
		++idx;
	}
	stack->data[stack->idx_a - 1] = tmp;
}

void	reverse_rotate_a_b(t_stack *stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_a(stack);
}
