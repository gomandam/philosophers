/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:13:16 by gomandam          #+#    #+#             */
/*   Updated: 2025/10/29 00:32:22 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

#include <unistd.h>
#include <pthread.h> // mutex, thread, initialize
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h> // get_current_time, 

typedef struct s_mutex
{
	//
}		t_mutex


int	pthread_mutex_init(pthread_mutex_t *restrict mutex, const pthread_mutexattr_t *restrict attr);

// UTILITIES

int		ft_isdigit(char c);
int		ft_isspace(char c);
int		ft_atoi(char *str);
int		ft_usleep(size_t milliseconds);

#endif
