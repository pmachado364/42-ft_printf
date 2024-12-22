/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmachado <pmachado@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 16:23:42 by pmachado          #+#    #+#             */
/*   Updated: 2024/12/22 16:27:08 by pmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int main()
{
	ft_printf("Hello from ft_printf!\n");
	ft_printf("Testing an int : %d\n", 42);
	ft_printf("And now a string: %s\n", "Seems like ft_printf is working :)");
	return(0);
}