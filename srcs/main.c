/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtamaril <qtamaril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 10:03:29 by qtamaril          #+#    #+#             */
/*   Updated: 2020/09/27 11:08:57 by qtamaril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub3d.h"

t_sets		get_sizes_map(t_sets sets)
{
	int y;
	int max_x;
	int temp_len;

	sets.map_size_y = ft_strstrlen(sets.map);
	y = 0;
	while (sets.map[y])
	{
		temp_len = ft_strlen(sets.map[y++]);
		if (temp_len > max_x)
			max_x = temp_len;
	}
	sets.map_max_x = max_x;
	return (sets);
}

void		create_map(t_list **lines_list, int size, int is_save)
{
	char		**map;
	t_sets		sets;
	int			count;

	map = ft_calloc(size + 1, sizeof(char *));
	sets = sets_default();
	count = 0;
	if (!get_data(lines_list, &sets, map, count))
	{
		free(map);
		return ;
	}
	if (!is_map_last(map))
	{
		free(map);
		return ;
	}
	sets.map = map;
	sets = get_sizes_map(sets);
	get_sprites(&sets);
	sets.plr_x = sets.plr_x * SCALE + SCALE / 2;
	sets.plr_y = sets.plr_y * SCALE + SCALE / 2;
	create_window(sets, is_save);
	free(map);
	free(sets.sprites);
}

void		main2(int ac, char **av)
{
	int			fd;
	char		*line;
	char		is_save;
	t_list		*lines_list;

	if ((fd = check_file_format(av[1])) < 0)
		return ;
	line = NULL;
	lines_list = NULL;
	while (get_next_line(fd, &line))
	{
		ft_lstadd_back(&lines_list, ft_lstnew(line));
	}
	close(fd);
	ft_lstadd_back(&lines_list, ft_lstnew(line));
	if (ft_lstsize(lines_list) <= 8)
	{
		ft_putendl_fd(FILE_ERR, 1);
		ft_list_clear(&lines_list);
		return ;
	}
	is_save = (ac == 3) ? 1 : 0;
	create_map(&lines_list, ft_lstsize(lines_list), is_save);
	ft_list_clear(&lines_list);
}

int			main(int ac, char **av)
{
	if (ac == 2 || (ac == 3 && !ft_strcmp(av[2], "--save")))
		main2(ac, av);
	else if (ac == 3 && ft_strcmp(av[2], "--save"))
		ft_putendl_fd(SAVE_PARAM_ERROR, 1);
	else if (ac == 1 || ac > 3)
		ft_putendl_fd(FILE_PARAM_ERROR, 1);
	return (0);
}
