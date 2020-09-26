/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qtamaril <qtamaril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 11:45:16 by qtamaril          #+#    #+#             */
/*   Updated: 2020/09/26 15:08:39 by qtamaril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# define FILE_TYPE_ERR "Error\nType of file is not .cub"
# define FILE_ERR "Error\nSmth is wrong with file"
# define FILE_OPEN_ERR "Error\nError with opening the file"
# define SPACES_BEGIN_LINE "Error\nSpaces at the beginning of the params line"
# define SPACES_END_LINE "Error\nSpaces in the end of the params line"
# define EMPTY_LINE_WITH_SPACES "Error\nEmpty line with spaces"
# define TEXTURE_ERR "Error\nWrong path to texture"
# define PARAMS_NUM_ERR "Error\nWrong number of params"
# define PARAM_TYPE_ERR "Error\nWrong type of parameter"
# define DOUBLE_TYPE_ERR "Error\nThe parameter is repeated"
# define COLOR_PARAM_ERR "Error\nColor param is incorrect"
# define SMTH_ERR "Error\nSmth is wrong"
# define LINE_ERROR "Error\nLine is incorrect"
# define PLAYER_ERROR "Error\nSmth is wrong with player position"
# define FLOOR_ERROR "Error\nSmth is wrong with floor position"
# define SPRITE_ERROR "Error\nSmth is wrong with sprite position"
# define MAP_NOT_CLOSED_ERROR "Error\nMap is not closed"
# define MLX_ERROR "Error\nONE OF MLX FUNCS RETURNING NULL"
# define SAVE_PARAM_ERROR "Error\nSecond param is not \'––save\'"
# define NO_PARAM_ERROR "Error\nNo arguments specified"
# define FILE_CLOSE_ERROR "Error\nError closing file"

#endif
