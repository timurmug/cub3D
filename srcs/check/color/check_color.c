/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_color.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtamaril <qtamaril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 17:31:09 by qtamaril          #+#    #+#             */
/*   Updated: 2020/09/18 10:39:54 by qtamaril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../includes/cub3d.h"

int	comma_issingle(char *s)
{
	int i;
	int i2;
	int find;

	i = 0;
	find = 0;
	while (s[i])
		if (s[i++] == ',')
		{
			find++;
			i2 = i - 1;
		}
	if (find == 1)
		return (i2);
	else
		return (0);
}

int	check_num(char *str)
{
	int j;

	j = 0;
	while (str[j])
		if (!ft_isdigit(str[j++]))
			return (0);
	return (1);
}

int	check_color(char **s, t_sets *sets, int is_floor)
{
	int	size;

	if (is_floor && sets->floor_col != -1)
		return (type_repeated_err());
	else if (!is_floor && sets->ceiling_col != -1)
		return (type_repeated_err());
	size = ft_strstrlen(s);
	if (size == 2)
		return (check_color2(s, sets, is_floor));
	else if (size == 3)
		return (check_color3(s, sets, is_floor));
	else if (size == 4)
		return (check_color4(s, sets, is_floor));
	else if (size == 5)
		return (check_color5(s, sets, is_floor));
	else if (size == 6)
		return (check_color6(s, sets, is_floor));
	else
		return (color_error());
}
