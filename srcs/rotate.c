/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 15:42:33 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/20 15:36:51 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stack *s)
{
	int	a;
	int	b;

	a = s->idx_a;
	b = a + 1;
	while (b < s->size)
	{
		s->data[b] ^= s->data[a];
		s->data[a] ^= s->data[b];
		s->data[b] ^= s->data[a];
		++a;
		++b;
	}
	ft_printf("ra\n");
}

void	rotate_b(t_stack *s)
{
	int	a;
	int	b;

	a = s->idx_a - 1;
	b = a - 1;
	while (b >= 0)
	{
		s->data[a] ^= s->data[b];
		s->data[b] ^= s->data[a];
		s->data[a] ^= s->data[b];
		--a;
		--b;
	}
	ft_printf("rb\n");
}

void	rotate_a_b(t_stack *s)
{
	rotate_a(s);
	rotate_b(s);
	ft_printf("rr\n");
}
