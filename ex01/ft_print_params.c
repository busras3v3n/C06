/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: busseven <busras3v3n@proton.me>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:21:50 by busseven          #+#    #+#             */
/*   Updated: 2024/07/24 13:29:42 by busseven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int agrc, char **agrv)
{
	int	i;
	int	j;

	(void)agrc;
	j = 1;
	while (agrv[j] != NULL)
	{
		i = 0;
		while (agrv[j][i] != '\0')
		{
			write(1, &agrv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
}
