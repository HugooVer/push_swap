/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:06:39 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/23 18:51:17 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_in_a(t_stack *s)
{
	int	idx;

	idx = 0;
	if (s->idx_a != 0)
		return (0);
	while (idx < s->size)
	{
		if (s->data[idx] != idx)
			return (0);
		++idx;
	}
	return (1);
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
}

void	print_stack(t_stack *s)
{
	int	idx;

	idx = 0;
	while (idx < s->size)
	{
		printf ("%i ", s->data[idx]);
		if (idx == s->idx_a - 1)
			printf ("  ");
		++idx;
	}
	printf("\n");
}

void	split_sort(t_stack *s, int split, int len)
{
	int	idx;

	idx = 0;
	while (idx < len + 1)
	{
		if (!(s->idx_a < s->size - 3))
			return ;
		if (s->data[s->idx_a] >= split)
			rotate_a(s);
		else
		{
			if (s->idx_a - 1 > 0 && s->data[s->idx_a - 1] <= split / 2)
				rotate_b(s);
			push_b(s);
		}
		++idx;
		if (s->data[s->idx_a - 1] < split / 2)
			rotate_b(s);
	}
}

void	sort_100(t_stack *s)
{
	int	split;
	int	loop;

	loop = 3;
	split = 0;
	while (s->idx_a < s->size - 3)
	{
		split = (((s->size - split) / loop) + split) * 2;
		split_sort(s, split, s->size - s->idx_a);
	}
	sort_3(s);
	after_split_sort(s);
}

void	sort(t_stack *s)
{
	sort_100(s);
}
