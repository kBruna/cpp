/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buehara <buehara@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 21:07:22 by buehara           #+#    #+#             */
/*   Updated: 2026/07/26 21:48:56 by buehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv) 
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++) 
	{
		for (int j = 0; argv[i][j]; j++) 
		{
			argv[i][j] = toupper(argv[i][j]);
		}
		std::cout << argv[i];
	}
	std::cout << std::endl;
	return (0);
}
