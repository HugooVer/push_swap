/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvercell <hvercell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:05:11 by hvercell          #+#    #+#             */
/*   Updated: 2023/05/19 11:24:19 by hvercell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "get_next_line.h"
# include "ft_printf.h"

typedef struct s_stack	t_stack;

struct s_stack
{
	int	size;
	int	idx_a;
	int	*data;
};

void	first_things(int argc, char **argv, t_stack *stack);
char	*char_to_int(char **argv, t_stack *stack);
void	pre_sort(t_stack *stack);

void	not_digit(char *test);

void	swap_a(t_stack *stack);
void	swap_b(t_stack *stack);
void	swap_a_b(t_stack *stack);

void	push_a(t_stack *stack);
void	push_b(t_stack *stack);

void	rotate_a(t_stack *stack);
void	rotate_b(t_stack *stack);
void	rotate_a_b(t_stack *stack);

void	reverse_rotate_a(t_stack *stack);
void	reverse_rotate_b(t_stack *stack);
void	reverse_rotate_a_b(t_stack *stack);

void	sort(t_stack *stack);

#endif
