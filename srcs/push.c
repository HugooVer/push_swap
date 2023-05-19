/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:13:45 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/19 10:46:47 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *stack)
{
	stack->idx_a = stack->idx_a - 1;
	ft_printf("pa\n");
}

void	push_b(t_stack *stack)
{
	stack->idx_a = stack->idx_a + 1;
	ft_printf("pb\n");
}
