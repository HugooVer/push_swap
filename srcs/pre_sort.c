/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:12:12 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/25 20:04:15 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*char_to_int(char **argv, t_stack *s)
{
	int	idx;

	idx = 1;
	while (argv[idx] != NULL)
	{
		not_digit(argv[idx]);
		++idx;
	}
	s->data = malloc(sizeof(int) * s->size);
	if (s->data == NULL)
		exit(EXIT_FAILURE);
	idx = 1;
	while (argv[idx] != NULL)
	{
		if (ft_atoi_maxint(argv[idx], &s->data[idx - 1]) == 1)
		{
			ft_printf("Error\n");
			free(s->data);
			exit(EXIT_FAILURE);
		}
		++idx;
	}
	return ("0");
}

void	duplicate(t_stack *s)
{
	int	idx;
	int	jdx;

	idx = 0;
	while (idx < s->size)
	{
		jdx = idx + 1;
		while (jdx < s->size)
		{
			if (s->data[idx] == s->data[jdx])
			{
				ft_printf("Error\n");
				free(s->data);
				exit(EXIT_FAILURE);
			}
			++jdx;
		}
		++idx;
	}
}

int	*stack_copy(int *in_stack, t_stack *s)
{
	int	idx;
	int	*out_stack;

	out_stack = malloc(sizeof(int) * s->size);
	if (out_stack == NULL)
	{
		free(s->data);
		exit(EXIT_FAILURE);
	}
	idx = 0;
	while (idx < s->size)
	{
		out_stack[idx] = in_stack[idx];
		++idx;
	}
	return (out_stack);
}

void	pre_sort(t_stack *s)
{
	int	idx;
	int	jdx;
	int	*tmp_stack;
	int	*tmp_stack0;

	duplicate(s);
	tmp_stack = stack_copy(s->data, s);
	tmp_stack0 = stack_copy(s->data, s);
	ft_bubble_sort(tmp_stack, s->size);
	idx = 0;
	jdx = 0;
	while (idx < s->size)
	{
		while (jdx < s->size)
		{
			if (tmp_stack[idx] == tmp_stack0[jdx])
				s->data[jdx] = idx;
			++jdx;
		}
		jdx = 0;
		++idx;
	}
	free(tmp_stack);
	free(tmp_stack0);
}
