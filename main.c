/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elahyani <elahyani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:31:36 by elahyani          #+#    #+#             */
/*   Updated: 2020/10/26 14:31:37 by elahyani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t	ft_strlen(char *);
char	*ft_strcpy(char *, const char *);
int		ft_strcmp(const char *, const char *);
size_t	ft_write(int, void*, size_t);
size_t	ft_read(int, void*, size_t);
char	*ft_strdup(const char*);

int main() {

	char   		str[400];
	int			fd;
	int			fd2;
	char		*tmp;
	char		*s;
	char		c;
	const char	*str1;
	const char	*str2;

	s = "hello\n";
	printf("==================ft_strlen==================\n");
	printf("ft_strlen: |%ld|\n",  ft_strlen(""));
	printf("ft_strlen: |%ld|\n",  ft_strlen("NULL"));
	printf("ft_strlen: |%ld|\n",  ft_strlen("\0"));
	printf("ft_strlen: |%ld|\n",  ft_strlen("hello"));
	printf("ft_strlen: |%ld|\n",  ft_strlen("   "));
	printf("ft_strlen: |%ld|\n",  ft_strlen("35s4avf83dv3544ad364bv3fadn357rgmne35AG4V6468B4Z83B4684B8ZT3NZYJSHVAEKG98Q634789251&%%&$&&*$^&*I&^"));
	printf("ft_strlen: |%ld|\n",  ft_strlen(NULL));
	printf("ft_strlen: |%ld|\n",  ft_strlen("Hello"));
    printf("ft_strlen: |%ld|\n",  ft_strlen("Hello herjfk qerhfhqr fheq jljhqekljcdascio afoadufaoidsud"));

	printf("==================ft_strcpy==================\n");
	printf("ft_strcpy: |%s|\n",  ft_strcpy(str, "manwaa"));
	printf("ft_strcpy: |%s|\n",  ft_strcpy(str, "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	printf("ft_strcpy: |%s|\n\n",ft_strcpy(str, ""));

	printf("==================ft_strcmp==================\n");
	printf("ft_strcmp: |%d|\n", ft_strcmp("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhxjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("abc", "abc"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("abd", "abc"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("abc", "abd"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("", "abc"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("abc", ""));
	printf("ft_strcmp: |%d|\n", ft_strcmp("", ""));
	printf("ft_strcmp: |%d|\n", ft_strcmp("", "a"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("hb", "ha"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("ha", "hb"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("ha", "ha"));
	printf("ft_strcmp: |%d|\n", ft_strcmp("\0", "Hi"));

	str1 = "\xff\xff";
	str2 = "\xff";
	printf("ft_strcmp: |%d|\n",  ft_strcmp(str1, str2));
	printf("ft_strcmp: |%d|\n\n",ft_strcmp(str2, str1));

	c = 'z';
	fd =  open("test.txt", O_RDWR);
	printf("==================ft_write===================\n");	
	printf("\nft_write: |%ld|\n", ft_write(1, &c, 1));
	printf("\nft_write: |%ld|\n", ft_write(1, "Bonjour", 7));
	printf("ft_write: |%ld|\n",   ft_write(fd, "Bonjour", 7));
	printf("ft_write: |%ld|\n",   ft_write(1, NULL, 3));
	printf("ft_write: |%ld|\n",   ft_write(-1, "\n", 1));
	printf("ft_write: |%ld|\n",   ft_write(42, "bonjour", 7));
	printf("ft_write: |%ld|\n",   ft_write(98123, "", 1));
	printf("ft_write: |%ld|\n",   ft_write(42, NULL, 7));
	printf("ft_write: |%ld|\n\n", ft_write(1, NULL, 3));
	close(fd);

	tmp = malloc(sizeof(char) * 6);
	fd2 =  open("test.txt", O_RDWR);
	printf("==================ft_read====================\n");
	printf("ft_read: |%ld| %s\n",   ft_read(98123, tmp, 5), tmp);
	printf("ft_read: |%ld| %s\n",   ft_read(42, tmp, 5), tmp);
	printf("ft_read: |%ld| %s\n",   ft_read(0, tmp, 5), tmp);
	printf("ft_read: |%ld| %s\n",   ft_read(1, tmp, 5), tmp);
	printf("ft_read: |%ld| %s\n",   ft_read(-1, tmp, 5), tmp);
	printf("ft_read: |%ld| %s\n\n", ft_read(fd2, tmp, 5), tmp);
	close(fd2);

	printf("==================ft_strdup==================\n");
	printf("ft_strdup: |%s|\n", ft_strdup("Hello world"));
	printf("ft_strdup: |%s|\n", ft_strdup("\0"));
	printf("ft_strdup: |%s|\n", ft_strdup(NULL));
	printf("ft_strdup: |%s|\n", ft_strdup(""));
	printf("ft_strdup: |%s|\n", ft_strdup("hi"));
	printf("ft_strdup: |%s|\n", ft_strdup(s));

	return 0;
} 

