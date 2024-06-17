/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 11:31:05 by ayprokop          #+#    #+#             */
/*   Updated: 2024/06/17 11:40:43 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"

typedef struct s_state
{
	long *stack_a;
	long *stack_b;
	int len_a;
	int len_b;
} 				t_state;

void	free_stack(t_state page);
int	string_error_detector(int argc, char **argv);
void	push_swap(int argc, char **argv);
int	error_detector(char **argv);
int	ft_count_arg(char **argv);


#endif