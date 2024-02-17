/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svresnya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 12:30:44 by svresnya          #+#    #+#             */
/*   Updated: 2024/01/31 13:46:41 by svresnya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int	main(void)
{
	char	*text;

	text = "s";
	ft_putstr(text);
	text = "\t'twas a short string, right?\n";
	ft_putstr(text);
	text = "Here is a veryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryveryvery long newlined line\n";
	ft_putstr(text);
	text = "\\no newlines->";
	ft_putstr(text);
	text = "Newline ahead->\n<-closed newline";
	ft_putstr(text);
}
