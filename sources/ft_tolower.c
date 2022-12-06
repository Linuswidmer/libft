/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwidmer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:41:12 by lwidmer           #+#    #+#             */
/*   Updated: 2022/08/23 10:42:59 by lwidmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if( c <= 90 && c >= 65)
			return(c + 32);
		else
	    return (c);
}

int main()
{
  printf("%c\n", ft_tolower('c'));
  printf("%c\n", ft_tolower('X'));
  printf("%c\n", tolower('c'));
  printf("%c\n", tolower('X'));
}
