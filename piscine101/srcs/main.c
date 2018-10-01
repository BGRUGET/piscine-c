/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main2.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/21 22:50:39 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/22 11:28:16 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */


t_map	ft_recup_all(int file, t_map map)
{
	map = ft_recup_info_map(file, map);
	map = ft_recup_first_line(file, map);
	map.board = ft_recup_map(file, map);
}

int		main(int ac, **char av)
{
	t_map	map;

//sortie standard
	if (ac == 1)
	{
		file =  0;
		map = ft_recup_all(file, map);
	} 
//parametre
	if (ac >= 2)
	{
		i == 1
		while (i < ac - 1)
		{
			file = open(av[i], O_RDONLY);
			map = ft_recup_all(file, map);
			close(file);
		}
	}
	return(0);
}
