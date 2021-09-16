/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sikim <sikim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 19:51:04 by sikim             #+#    #+#             */
/*   Updated: 2021/09/16 21:29:39 by sikim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i= '0';
	j= '1';
	k= '2';

	while(i <= '7')
	{
		while(j <= '8')
		{
			while(k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if(i == '7'	&& j == '8' && k == '9')	
					break;
				write(1,", ",2);
				k++;
			}
			j++;
			k = j + 1;
		}
		j = i + 1;
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
}
