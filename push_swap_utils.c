/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayprokop <ayprokop@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 12:35:04 by ayprokop          #+#    #+#             */
/*   Updated: 2024/06/15 21:58:03 by ayprokop         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_detector(char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argv[i] == NULL)
		return (1);
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != ' ' && argv[i][j] != '-')		
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_count_arg(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		i++;
	}
	return (i);
}
