/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: begruget <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/08/17 13:13:09 by begruget     #+#   ##    ##    #+#       */
/*   Updated: 2018/08/17 13:39:36 by begruget    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

char	*ft_strdup(char *src)

	char *s1;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;

	if (!(s1 = (char *)malloc(sizeof(char *) * (i + 1) )))
			return (0);
	i = 0;
	while (src[i] != '\0')
	{
		s1[i] = src[i];
		i++;
	}
	s1[i] = '\0'
	return(s1);
