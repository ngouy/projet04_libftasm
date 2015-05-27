#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libfts.h"
#include <fcntl.h>

int main()
{
	char *s1;

	s1 = "bonjour";

	printf("\n\n--test ft_strlen--\n\n");
	printf("\nstrlen(%s) = %d\n", s1, (int)ft_strlen(s1));
	
	s1 = malloc(8 * 50);
	printf("\n\n--test ft_bzero--\n\n");
	s1 = strcat(s1, "bonjour les amis");
	printf("\n**test bzero sur s1 = |%s|**\n\n", s1);
	ft_bzero(s1, 50);
	int i = 0;
	while (i<50)
	{
		printf("  s1[%d] = |%d| --",i,s1[i]);
		i++;
	}
	i = '0'	;
	printf("\n\n--test ft_isdigit--\n\n");
	printf(" -|%c is digit ? %d|- \n", i, ft_isdigit(i));
	i = '5'	;
	printf(" -|%c is digit ? %d|- \n", i, ft_isdigit(i));
	i = '9'	;
	printf(" -|%c is digit ? %d|- \n", i, ft_isdigit(i));
	i = '0' - 1	;
	printf(" -|%c ('0' - 1) is digit ? %d|- \n", i, ft_isdigit(i));
	i = '9' + 1	;
	printf(" -|%c ('9' + 1) is digit  ? %d|- \n", i, ft_isdigit(i));

	printf("\n\n--test ft_isalpha--\n\n");
	i = 50;
	printf(" -|%c is alpha  ? %d|- ", i, ft_isalpha(i));
	i = 122;
	printf(" -|%c is alpha  ? %d|- ", i, ft_isalpha(i));
	i = '0'	;
	printf("\n\n--test ft_isalnum--\n\n");
	printf(" -|%c is alnum ? %d|- \n", i, ft_isalnum(i));
	i = '5'	;
	printf(" -|%c is alnum ? %d|- \n", i, ft_isalnum(i));
	i = '9'	;
	printf(" -|%c is alnum ? %d|- \n", i, ft_isalnum(i));
	i = '0' - 1	;
	printf(" -|%c ('0' - 1) is alnum ? %d|- \n", i, ft_isalnum(i));
	i = '9' + 1	;
	printf(" -|%c ('9' + 1) is alnum  ? %d|- \n", i, ft_isalnum(i));
	i = 91;
	printf(" -|%c is alnum  ? %d|-\n ", i, ft_isalnum(i));
	i = 'Z';
	printf(" -|%c is alnum  ? %d|-\n ", i, ft_isalnum(i));

	printf("\n\n--test ft_isprint--\n\n");
	i = 48;
	printf(" -|%c is print ? %d|- \n", i, ft_isprint(i));
	i = '5'	;
	printf(" -|%c is print ? %d|- \n", i, ft_isprint(i));
	i = '9'	;
	printf(" -|%c is print ? %d|- \n", i, ft_isprint(i));
	i = '0' - 1	;
	printf(" -|%c ('0' - 1) is print ? %d|- \n", i, ft_isprint(i));
	i = '9' + 1	;
	printf(" -|%c ('9' + 1) is print  ? %d|- \n", i, ft_isprint(i));
	i = 91;
	printf(" -|%c is print  ? %d|- \n", i, ft_isprint(i));
	i = 'Z';
	printf(" -|%c is print  ? %d|- \n", i, ft_isprint(i));
	i = 10;
	printf(" -|%d (dec value) is print  ? %d|-\n ", i, ft_isprint(i));
	i = 179;
	printf(" -|%d (dec value) is print  ? %d|-\n ", i, ft_isprint(i));

	printf("\n\n--test ft_isascii--\n\n");
	i = 48;
	printf(" -|%c is ascii ? %d|- \n", i, ft_isascii(i));
	i = '5'	;
	printf(" -|%c is ascii ? %d|- \n", i, ft_isascii(i));
	i = '9'	;
	printf(" -|%c is ascii ? %d|- \n", i, ft_isascii(i));
	i = '0' - 1	;
	printf(" -|%c ('0' - 1) is ascii ? %d|- \n", i, ft_isascii(i));
	i = '9' + 1	;
	printf(" -|%c ('9' + 1) is ascii  ? %d|- \n", i, ft_isascii(i));
	i = 91;
	printf(" -|%c is ascii  ? %d|- \n", i, ft_isascii(i));
	i = 'Z';
	printf(" -|%c is ascii  ? %d|- \n", i, ft_isascii(i));
	i = 10;
	printf(" -|%d (dec value) is ascii  ? %d|-\n ", i, ft_isascii(i));
	i = 179;
	printf(" -|%d (dec value) is ascii  ? %d|-\n ", i, ft_isascii(i));
	i = -10;
	printf(" -|%d (dec value) is ascii  ? %d|-\n ", i, ft_isascii(i));
	i = 279;
	printf(" -|%d (dec value) is ascii  ? %d|-\n ", i, ft_isascii(i));
	printf("\n\n--test ft_toupper--\n\n");
	i = 'c';
	printf("ft_toupper(%c) = %c\n", i, ft_toupper(i));
	i = '5';
	printf("ft_toupper(%c) = %c\n", i, ft_toupper(i));
	i = 'Z';
	printf("ft_toupper(%c) = %c\n", i, ft_toupper(i));

	printf("\n\n--test ft_tolower--\n\n");
	i = 'c';
	printf("ft_tolower(%c) = %c\n", i, ft_tolower(i));
	i = '5';
	printf("ft_tolower(%c) = %c\n", i, ft_tolower(i));
	i = 'Z';
	printf("ft_tolower(%c) = %c\n", i, ft_tolower(i));

	printf("\n\n--test ft_strcat--\n\n");
	ft_bzero(s1, 50);
	s1 = strcat(s1, "bonjour les amis");
	char *s2;
	s2 = " ca va ?";
	printf("ft_strcat(%s, %s) = ", s1, s2);
	printf("%s\n", ft_strcat(s1, s2));
	printf("\n\n--test ft_puts--\n\n");
	s2 = NULL;
	printf("with NULL string : ft_puts(%s) donne|\n", s2);
	int ret = ft_puts(s2);
	printf("\n| (deux \\n ajoutes de chaque cote des '|' en dans le printf pour que le printf vide son buff) et return (%d)\n", ret);
	s2 = "yolo";
	printf("with normal string : ft_puts(%s) donne|\n", s2);
	ret = ft_puts(s2);
	printf("\n| (deux \\n ajoutes de chaque cote des '|' en dans le printf pour que le printf vide son buff) et return (%d)\n", ret);
	printf("\n\n--test ft_memset--\n\n");
	bzero(s1, 50);
	s1 = strcat(s1, "bonjour les amis");
	printf("\ns1 = |%s| puis memset(s1, 'c', 20)\n\n", s1);
	ft_memset(s1, 'c', 20);
	i = 0;
	while (i<50)
	{
		printf("  s1[%d] = |%d| --",i,s1[i]);
		i++;
	}
	ft_bzero(s1, 50);
	s1 = ft_strcat(s1, "bonjour les amis");
	printf("\n\n--test ft_memcpy--\n\n");
	bzero(s1, 50);
	s1 = strcat(s1, "bonjour les amis");
	s2 = " comment ca va ?";
	printf("\ns1 = |%s| s2 = |%s| puis memcpy(s1, s2, 8)\n\n", s1, s2);
		ft_memcpy(s1, s2 , 8);
		printf(" s1 = |%s|, s2 = |%s|\n",s1 ,s2);
	char	*s3;
	s3 = NULL;

	printf("\n\n--test ft_strdup--\n\n");
	printf("s3 = ft_strdup(s1), puis s3[3] = 'y' \n");
	s3 = ft_strdup(s1);
	s3[3] = 'y';
	printf("s1 = %s, s3 = %s\n", s1, s3);



	printf("\n\n--test ft_memchr--\n\n");
	s3 = "yonyour";
	printf("memchr(%s, 'r', 7) = %s\n", s3, ft_memchr(s3, 'r', 7));
	printf("memchr(%s, 'n', 10) = %s\n", s3, ft_memchr(s3, 'n', 10));
	printf("memchr(%s, 'z', 10) = %s\n", s3, ft_memchr(s3, 'z', 10));

	printf("\n\n--test ft_strchr--\n\n");
	s3 = "yonyour";
	printf("strchr(%s, 'r') = %s\n", s3, ft_strchr(s3, 'r'));
	printf("strchr(%s, 'y') = %s\n", s3, ft_strchr(s3, 'y'));
	printf("strchr(%s, 'z') = %s\n", s3, ft_strchr(s3, 'z'));

	printf("\n\n--test ft_strrchr--\n\n");
	s3 = "yonyour";
	printf("strrchr(%s, 'z') = %s\n", s3, ft_strrchr(s3, 'z'));
	printf("strrchr(%s, 'r') = %s\n", s3, ft_strrchr(s3, 'r'));
	printf("strrchr(%s, 'n') = %s\n", s3, ft_strrchr(s3, 'n'));
	printf("strrchr(%s, 'y') = %s\n", s3, ft_strrchr(s3, 'y'));

	printf("\n\n--test ft_strndup--\n\n");
	printf("s3 = ft_strndup(s1, 5), puis s3[3] = 'y' \n");
	s3 = ft_strndup(s1, 5);
	s3[3] = 'y';
	printf("s1 = %s, s3 = %s\n", s1, s3);
	printf("s3 = ft_strndup(s1, 20), puis s3[3] = 'y' \n");
	s3 = ft_strndup(s1, 20);
	s3[3] = 'y';
	printf("s1 = %s, s3 = %s\n", s1, s3);

	printf("\n\n--test ft_strnew--\n\n");
	printf("s4 = strnew(5) puis je remplis les 5 premieres cases avec 0 1 2 3 puis printf s4 \n");
	i = 0;
char *s4 = ft_strnew(5);
	while (i < 4)
	{
		printf("assignation s4[%d] = %c ", i, i + 48);
		s4[i] = i + 48;
		printf(" et s4 = %s\n", s4);
		i++;
	}

	/*printf("\n\n--test ft_cat--\n\n");
	printf("ft_cat(42) :");
	ft_cat(42);
	int fd = open("./test", O_RDONLY);
	printf("\nft_cat(fd) avec fd = open(\"./test\", O_RDONLY) : \n");
	ft_cat(fd);
	printf("ft_cat(1) : \n");
	ft_cat(1);*/
	return (0);
}
