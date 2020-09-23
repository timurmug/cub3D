/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtamaril <qtamaril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:46:32 by qtamaril          #+#    #+#             */
/*   Updated: 2020/09/23 15:53:20 by qtamaril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

int				get_data(t_list **lines_list, t_sets *sets, \
	char **map, int count);
t_sets			sets_default(void);



// удалить
void			print_sets(t_sets sets);
void			print_strstr(char **strstr);
#endif
