/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:12:12 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/18 17:35:39 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_maxint(const char *nptr, int *nb)
{
	long	ret;
	int		signe;
	int		i;

	ret = 0;
	signe = 1;
	i = 0;
	while (ft_isspace(nptr[i]) != false)
		++i;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			signe *= (-1);
		++i;
	}
	while (ft_isdigit(nptr[i]) != 0)
	{
		ret = ret * 10 + (nptr[i] - '0');
		if (ret - (signe == -1) > INT_MAX)
			return (1);
		++i;
	}
	return (*nb = ret * signe, 0);
}

char	*char_to_int(char **argv, t_stack *stack)
{
	int	idx;

	idx = 1;
	while (argv[idx] != NULL)
	{
		not_digit(argv[idx]);
		++idx;
	}
	stack->data = malloc(sizeof(int) * stack->size);
	if (stack->data == NULL)
		return (NULL);
	idx = 1;
	while (argv[idx] != NULL)
	{
		if (ft_atoi_maxint(argv[idx], &stack->data[idx - 1]) == 1)
		{
			ft_printf("Error\n");
			free(stack->data);
			exit(EXIT_FAILURE);
		}
		++idx;
	}
	return ("0");
}

void	duplicate(t_stack *stack)
{
	int	idx;
	int	jdx;

	idx = 0;
	while (idx < stack->size)
	{
		jdx = idx + 1;
		while (jdx < stack->size)
		{
			if (stack->data[idx] == stack->data[jdx])
			{
				ft_printf("%i == %i\nError\n", stack->data[idx], stack->data[jdx]);
				free(stack->data);
				exit(EXIT_FAILURE);
			}
			++jdx;
		}
		++idx;
	}
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

void	pre_sort(t_stack *stack)
{
	int	idx;
	int	jdx;
	int	*tmp_stack;
	int	*tmp_stack0;

	duplicate(stack);
	tmp_stack = stack_copy(stack->data, stack);
	tmp_stack0 = stack_copy(stack->data, stack);
	ft_bubble_sort(tmp_stack, stack->size);
	idx = 0;
	jdx = 0;
	while (idx < stack->size)
	{
		while (jdx < stack->size)
		{
			if (tmp_stack[idx] == tmp_stack0[jdx])
				stack->data[jdx] = idx;
			++jdx;
		}
		jdx = 0;
		++idx;
	}
	free(tmp_stack);
	free(tmp_stack0);
}
