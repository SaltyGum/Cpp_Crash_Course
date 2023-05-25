/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeluiz4 <jeffluiz97@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 12:28:27 by jeluiz4           #+#    #+#             */
/*   Updated: 2023/05/25 12:31:30 by jeluiz4          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char *av[])
{
	int	i = 1, j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE NOISE *";
	else
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				std::cout << static_cast<char> (toupper(av[i][j]));
				j++;
			}
			i++;
		}
	return (0);
}
