/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 18:45:52 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/17 16:20:02 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stack *stack)
{
	int	tmp;

	tmp = stack->data[stack->idx_a];
	stack->data[stack->idx_a] = stack->data[stack->idx_a + 1];
	stack->data[stack->idx_a + 1] = tmp;
	ft_printf("sa\n");
}

void	swap_b(t_stack *stack)
{
	int	tmp;

	tmp = stack->data[stack->idx_a - 1];
	stack->data[stack->idx_a - 1] = stack->data[stack->idx_a];
	stack->data[stack->idx_a] = tmp;
	ft_printf("sb\n");
}

void	swap_a_b(t_stack *stack)
{
	swap_a(stack);
	swap_b(stack);
	ft_printf("ss\n");
}
