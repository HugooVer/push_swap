/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 19:13:45 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/20 15:35:56 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_stack *s)
{
	s->idx_a = s->idx_a - 1;
	ft_printf("pa\n");
}

void	push_b(t_stack *s)
{
	s->idx_a = s->idx_a + 1;
	ft_printf("pb\n");
}
