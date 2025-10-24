/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gomandam <gomandam@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 16:13:16 by gomandam          #+#    #+#             */
/*   Updated: 2025/10/24 20:24:42 by gomandam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

#include <unistd.h>
#include <pthread.h> // mutex, thread, initialize
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>

typedef struct s_mutex
{
	//
}		t_mutex



int	pthread_mutex_init(pthread_mutex_t *restrict mutex, const pthread_mutexattr_t *restrict attr);

#endif
