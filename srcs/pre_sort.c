/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:12:12 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/16 17:30:47 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*char_to_int(char **argv, t_stack *stack)
{
	int	idx;
	int	*out_stack;

	idx = 1;
	out_stack = malloc(sizeof(int) * stack->size);
	if (out_stack == NULL)
		return (NULL);
	while (argv[idx] != NULL)
	{
		out_stack[idx - 1] = ft_atoi(argv[idx]);
		++idx;
	}
	return (out_stack);
}

int	duplicate(int *in_stack, t_stack *stack)
{
	int	idx;
	int	jdx;

	idx = 0;
	while (idx < stack->size)
	{
		jdx = idx + 1;
		while (jdx < stack->size)
		{
			if (in_stack[idx] == in_stack[jdx])
				return (1);
			++jdx;
		}
		++idx;
	}
	return (0);
}

int	*stack_copy(int *in_stack, t_stack *stack)
{
	int	idx;
	int	*out_stack;

	out_stack = malloc(sizeof(int) * stack->size);
	if (out_stack == NULL)
		return (NULL);
	idx = 0;
	while (idx < stack->size)
	{
		out_stack[idx] = in_stack[idx];
		++idx;
	}
	return (out_stack);
}

int	*pre_sort(int *in_stack, t_stack *stack)
{
	int	idx;
	int	jdx;
	int	*out_stack;
	int	*tmp_stack;

	tmp_stack = stack_copy(in_stack, stack);
	out_stack = stack_copy(in_stack, stack);
	ft_bubble_sort(tmp_stack, stack->size);
	idx = 0;
	while (idx < stack->size)
	{
		while (jdx < stack->size)
		{
			if (tmp_stack[idx] == in_stack[jdx])
				out_stack[jdx] = idx;
			++jdx;
		}
		jdx = 0;
		++idx;
	}
	return (free(tmp_stack), out_stack);
}
