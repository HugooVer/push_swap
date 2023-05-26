/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:06:39 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/26 10:06:40 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	el(t_stack *s)
{
	if (s->data[s->idx_a + 1] > s->data[s->idx_a + 2])
	{
		if (s->data[s->idx_a] > s->data[s->idx_a + 2])
			reverse_rotate_a(s);
		else
		{
			swap_a(s);
			rotate_a(s);
		}
	}
}

void	sort_3(t_stack *s)
{
	if (s->data[s->idx_a] > s->data[s->idx_a + 1])
	{
		if (s->data[s->idx_a] > s->data[s->idx_a + 2])
		{
			if (s->data[s->idx_a + 2] > s->data[s->idx_a + 1])
				rotate_a(s);
			else
			{
				swap_a(s);
				reverse_rotate_a(s);
			}
		}
		else
			swap_a(s);
	}
	else
	{
		el(s);
	}
}

void	after_split_sort(t_stack *s)
{
	int	tab[3];

	tab[0] = 0;
	tab[1] = s->size - 1;
	tab[2] = s->size - 1;
	while (tab[1] >= 0)
	{
		while (s->data[tab[0]] != tab[2] && tab[0] < s->idx_a - 1)
			++tab[0];
		if (s->data[tab[0]] == tab[2])
		{
			while (s->data[s->idx_a - 1] != tab[2])
			{
				if ((s->idx_a - 1) - tab[0] < tab[0] - 0)
					rotate_b(s);
				else
					reverse_rotate_b(s);
			}
			push_a(s);
		}
		--tab[2];
		--tab[1];
		tab[0] = 0;
	}
}

void	split_sort(t_stack *s, int split, int len, double oui)
{
	int	i;

	i = 0;
	while (i < len + 1)
	{
		if (!(s->idx_a < s->size - 3))
			return ;
		if (s->data[s->idx_a] > s->size - 4)
			rotate_a(s);
		if (s->data[s->idx_a] > s->size - 4)
			rotate_a(s);
		if (s->data[s->idx_a] > s->size - 4)
			rotate_a(s);
		if (s->data[s->idx_a] > split)
			rotate_a(s);
		else
		{
			if (s->idx_a - 1 > 0 && s->data[s->idx_a - 1] <= s->size * oui)
				rotate_b(s);
			push_b(s);
		}
		++i;
	}
	if (s->idx_a - 1 > 0 && s->data[s->idx_a - 1] <= s->size * oui)
		rotate_b(s);
}

void	sort(t_stack *s)
{
	if (s->size > 3)
	{
		if (s->size < 110)
		{
			split_sort(s, s->size / 2, s->size - s->idx_a, 0.25);
			split_sort(s, s->size - 1, s->size - s->idx_a, 0.75);
		}
		else
		{
			split_sort(s, s->size / 4, s->size - s->idx_a, 0.125);
			split_sort(s, s->size / 2.7, s->size - s->idx_a, 0.25);
			split_sort(s, s->size / 2.1, s->size - s->idx_a, 0.375);
			split_sort(s, s->size / 1.7, s->size - s->idx_a, 0.375);
			split_sort(s, s->size / 1.4, s->size - s->idx_a, 0.375);
			split_sort(s, s->size / 1.15, s->size - s->idx_a, 0.375);
			split_sort(s, s->size - 1, s->size - s->idx_a, 0.75);
		}
		sort_3(s);
		after_split_sort(s);
	}
	else
		sort_3(s);
}
