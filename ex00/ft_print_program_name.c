/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busras3v3n@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 11:10:45 by busseven          #+#    #+#             */
/*   Updated: 2024/07/24 13:26:45 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int agrc, char **agrv)
{
	int	i;

	(void)agrc;
	i = 0;
	while (agrv[0][i] != '\0')
	{
		write(1, &agrv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
