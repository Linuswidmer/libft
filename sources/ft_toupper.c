/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwidmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:39:36 by lwidmer           #+#    #+#             */
/*   Updated: 2022/08/23 10:40:02 by lwidmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
		if (c <= 122 && c >= 97)
			return(c - 32);
		else
	    return (c);
}

int main()
{
  printf("%c\n", ft_toupper('c'));
  printf("%c\n", ft_toupper('X'));
  printf("%c\n", toupper('c'));
  printf("%c\n", toupper('X'));
}
