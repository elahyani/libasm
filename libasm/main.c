#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>

size_t	ft_strlen(char *);
char	*ft_strcpy(char *, const char *);
int		ft_strcmp(const char *, const char *);
size_t	ft_write(int, void*, size_t);
size_t	ft_read(int, void*, size_t);
char	*ft_strdup(const char*);


/* int		ft_strcmp_c(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[j])
			return (s1[i] - s2[j]);
		j++;
		i++;
	}
	return (0);
} */


int main() {
	// printf("ft_strlen: %lu\n", ft_strlen(""));
	// printf("strlen: %lu\n\n", strlen(""));
	// printf("ft_strlen: %lu\n", ft_strlen("NULL"));
	// printf("strlen: %lu\n\n", strlen("NULL"));
	// printf("ft_strlen: %lu\n", ft_strlen("\0"));
	// printf("strlen: %lu\n\n", strlen("\0"));
	// printf("ft_strlen: %lu\n", ft_strlen("hello"));
	// printf("strlen: %lu\n\n", strlen("hello"));
	// printf("ft_strlen: %lu\n", ft_strlen("   "));
	// printf("strlen: %lu\n\n", strlen("   "));
	// printf("ft_strlen: %lu\n", ft_strlen("35s4avf83dv3544ad364bv3fadn357rgmne35AG4V6468B4Z83B4684B8ZT3NZYJSHVAEKG98Q634789251&%%&$&&*$^&*I&^"));
	// printf("strlen: %lu\n", strlen("35s4avf83dv3544ad364bv3fadn357rgmne35AG4V6468B4Z83B4684B8ZT3NZYJSHVAEKG98Q634789251&%%&$&&*$^&*I&^"));
	printf("ft_strlen: %lu\n", ft_strlen(NULL));
	printf("   strlen: %lu\n",    strlen(NULL));

	// char *ft_str = ft_strcpy("hello world", "hola 1337");
	
	char    	s1[400];
	char		s3[400];

	// printf("1-> %zd\n",      strlen("Hello"));
	// printf("1-> %zd\n\n", ft_strlen("Hello"));
    // printf("2-> %zd\n",      strlen("Hello herjfk qerhfhqr fheq jljhqekljcdascio afoadufaoidsud"));
    // printf("2-> %zd\n\n", ft_strlen("Hello herjfk qerhfhqr fheq jljhqekljcdascio afoadufaoidsud"));
	// printf("3-> %zd\n",      strlen(""));
	// printf("3-> %zd\n\n", ft_strlen(""));
	// printf("4-> %zd\n",    strlen(NULL));
	// printf("4-> %zd\n\n", ft_strlen(NULL));

	// printf("|%s|\n", strcpy(s1, "Hello"));
	// printf("|%s|\n", ft_strcpy(s3, "Hello"));
	// printf("|%s|\n", strcpy(s1, "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	// printf("|%s|\n", ft_strcpy(s3, "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	// printf("|%s|\n", strcpy(s1, ""));
	// printf("|%s|\n", ft_strcpy(s3, ""));
	
	// printf("-1-> %d\n",      strcmp("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	// printf("-1-> %d\n",   ft_strcmp("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	// printf("-1-> %d\n\n", ft_strcmp_c("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	
	// printf("0-> %d\n",      strcmp("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhxjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	// printf("0-> %d\n",   ft_strcmp("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhxjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	// printf("0-> %d\n\n", ft_strcmp_c("hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhxjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf", "hidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdfhidfhjksdhfjkhsdjkfhjshdkjhfjhsdfsdf"));
	
	// printf("1-> %d\n",        strcmp("abc", "abc"));
	// printf("1-> %d\n",     ft_strcmp("abc", "abc"));
	// printf("1-> %d\n\n", ft_strcmp_c("abc", "abc"));
	// printf("2-> %d\n",        strcmp("abd", "abc"));
	// printf("2-> %d\n",     ft_strcmp("abd", "abc"));
	// printf("2-> %d\n\n", ft_strcmp_c("abd", "abc"));
	// printf("3-> %d\n",        strcmp("abc", "abd"));
	// printf("3-> %d\n",     ft_strcmp("abc", "abd"));
	// printf("3-> %d\n\n", ft_strcmp_c("abc", "abd"));
	// printf("4-> %d\n",        strcmp("", "abc"));
	// printf("4-> %d\n",     ft_strcmp("", "abc"));
	// printf("4-> %d\n\n", ft_strcmp_c("", "abc"));
	// printf("5-> %d\n",        strcmp("abc", ""));
	// printf("5-> %d\n",     ft_strcmp("abc", ""));
	// printf("5-> %d\n\n", ft_strcmp_c("abc", ""));
	// printf("6-> %d\n",        strcmp("", ""));
	// printf("6-> %d\n",     ft_strcmp("", ""));
	// printf("6-> %d\n\n", ft_strcmp_c("", ""));

	// printf("7-> %d\n",   ft_strcmp("b", NULL));
	// printf("8-> %d\n",   ft_strcmp(NULL, "b"));
	
	// printf("7-> %d\n", ft_strcmp_c("a", NULL));
	// printf("7-> %d\n\n",    strcmp("a", NULL));

	// printf("8-> %d\n", ft_strcmp_c("", "a"));
	// printf("8-> %d\n\n",    strcmp("", "a"));

	// char	*str1 = " ";
	// char	*str2 = "";
	// printf("     strcmp: %d\n",        strcmp(str1, str2));
	// printf("  ft_strcmp: %d\n",     ft_strcmp(str1, str2));
	// printf("ft_strcmp_c: %d\n\n", ft_strcmp_c(str1, str2));
	
	// printf("     strcmp: %d\n",        strcmp(" ", "  "));
	// printf("  ft_strcmp: %d\n",     ft_strcmp(" ", "  "));
	// printf("ft_strcmp_c: %d\n\n", ft_strcmp_c(" ", "  "));
	// printf("\nret: %lu\n",    read(3, "hhh", 6));
	// printf("\nret: %lu\n", ft_read(3, "hhh", 6));

	// FILE	*myfile;
	// FILE	*myfile2;
	// int		fd;
	// int		fd2;
	// void	*tmp = malloc(5);
	// void	*tmp2 = malloc(5);

	// myfile = fopen("test.txt", "r");
	// myfile2 = fopen("test.txt", "r");
	// fd = fileno(myfile);
	// fd2 = fileno(myfile2);
	// printf("\nret: %lu\n",    read(fd, tmp, 300));
	// printf("\ntmp: %s\n", tmp);

	// printf("\nret: %lu\n", ft_read(fd2, tmp2, 300));
	// printf("\ntmp2: %s\n", tmp2);

	// printf("   strdup: %s\n",    strdup("Hello world"));
	// printf("ft_strdup: %s\n", ft_strdup("Hello world"));
	

	return 0;
} 