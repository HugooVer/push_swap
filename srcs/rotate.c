/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:42:33 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/17 15:55:02 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *stack)
{
	int	tmp;
	int	idx;

	tmp = stack->data[stack->idx_a];
	idx = stack->idx_a + 1;
	while (idx < stack->size)
	{
		stack->data[idx - 1] = stack->data[idx];
		++idx;
	}
	stack->data[stack->size] = tmp;
}

void	rotate_b(t_stack *stack)
{
	int	tmp;
	int	idx;

	tmp = stack->data[stack->idx_a - 1];
	idx = stack->idx_a - 2;
	while (idx > 0)
	{
		stack->data[idx - 1] = stack->data[idx];
		--idx;
	}
	stack->data[0] = tmp;
}

void	rotate_a_b(t_stack *stack)
{
	rotate_a(stack);
	rotate_b(stack);
}
