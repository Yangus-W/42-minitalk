/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yawang <yawang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 12:06:50 by yawang            #+#    #+#             */
/*   Updated: 2024/10/08 17:08:51 by yawang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_signals(int pid, char *message)
{
	int	letter;
	int	i;

	letter = 0;
	while (message[letter])
	{
		i = -1;
		while (++i < 8)
		{
			if (((unsigned char)(message[letter] >> (7 - i)) & 1) == 0)
				kill(pid, SIGUSR1);
			else if (((unsigned char)(message[letter] >> (7 - i)) & 1) == 1)
				kill(pid, SIGUSR2);
			usleep(50);
		}
		letter++;
	}
	i = 0;
	while (i++ < 8)
	{
		kill (pid, SIGUSR1);
		usleep(50);
	}
}

int	main(int argc, char **argv)
{
	char	*message;
	int		server_id;

	if (argc == 3)
	{
		server_id = ft_atoi(argv[1]);
		if (!server_id)
		{
			ft_printf("Error: wrong server id. Please try again");
			return (0);
		}
		message = argv[2];
		if (!message[0])
		{
			ft_printf("Error: empty message. Please try again.");
			return (0);
		}
		send_signals(server_id, message);
	}
	ft_printf("Error: wrong number of arguments. Please try again.\n");
	ft_printf("Example: ./client <PID> <MESSAGE>");
	return (0);
}
