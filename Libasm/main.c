/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <resther@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/08 15:01:17 by resther           #+#    #+#             */
/*   Updated: 2020/10/16 20:33:26 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm_test.h"

int		write_utils(int fd, char *str, int size, int test)
{
	int write_errno;
	int ft_write_errno;
	int errno;

	errno = 0;
	write(1, "\nwrite:    ", 11);
	write(fd, str, size);
	write_errno = errno;
	errno = 0;
	write(1, "\nft_write: ", 11);
	ft_write(fd, str, size);
	ft_write_errno = errno;
	printf("\nerrno : %d, %d\n", write_errno, ft_write_errno);
	printf("TEST #%d.", test);
	printf(" fd = %d, string is '%s', size = %d\n", fd, str, size);
	if (write_errno != ft_write_errno)
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	return (0);
}

int		write_check(void)
{
	int fd;

	printf("\n\n---WRITE TESTS---\n\n");
	write_utils(1, "correct FD", 10, 1);
	write_utils(-1, "incorrect FD", 12, 2);
	write_utils(1, "", 0, 3);
	write_utils(0, "", 6, 4);
	fd = open("write_test.txt", O_RDWR | O_CREAT, 0755);
	write(fd, "write in file\n", 14);
	ft_write(fd, "write in file\n", 14);
	return (0);
}

int		strcmp_utils(const char *s1, const char *s2, int test)
{
	int res;
	int res2;
	printf("TEST #%d.", test);
	printf(" Strings is '%s' and '%s'\n", s1, s2);
	res = strcmp(s1, s2);
	res2 = ft_strcmp(s1, s2);
	printf("strcmp:    %d\n", res);
	printf("ft_strcmp: %d\n", res2);
	if (res != res2)
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	return (0);
}

int		strcmp_check(void)
{
	printf("\n\n---STRCMP TESTS---\n\n");
	strcmp_utils("", "", 1);
	strcmp_utils("", "not empty", 2);
	strcmp_utils("not empty", "", 3);
	strcmp_utils("short", "short", 4);
	strcmp_utils("not equal string", "not equal number", 5);
	strcmp_utils("long long long", "long long long", 6);
	strcmp_utils("12", "11", 7);
	strcmp_utils("12", "12", 8);
	strcmp_utils("21       ", "21", 9);
	strcmp_utils("     ", "     ", 10);
	return (1);
}

int		strlen_utils(char *str, int test)
{
	int s;
	int ft_s;

	printf("TEST #%d.", test);
	printf(" String is '%s'\n", str);
	s = strlen(str);
	ft_s = ft_strlen(str);
	printf("strlen:    %d\n", s);
	printf("ft_strlen: %d\n", ft_s);
	if (s != ft_s)
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	return (0);
}

int		strlen_check(void)
{
	printf("\n\n---STRLEN TESTS---\n\n");
	strlen_utils("", 1);
	strlen_utils("short", 2);
	strlen_utils("midlle string it's midlle string", 3);
	strlen_utils("long string very very very very very very very very very very very very very very very very very very very very very long string", 4);
	printf("\n\n");
	return (0);
}

int		len_counter(char *str)
{
	int r;
	
	r = 0;
	while (str[r])
		r++;
	return (r);
}

int		strcpy_utils(char *str, int test)
{
	char *dst = NULL;
	char *dst2 = NULL;
	
	printf("TEST #%d.", test);
	printf(" String is '%s'\n", str);
	dst = malloc(strlen(str) + 1);
	dst2 = malloc(strlen(str) + 1);
	strcpy(dst, str);
	ft_strcpy(dst2, str);
	printf("strcpy:    %s (%d)\n", dst, len_counter(dst));
	printf("ft_strcpy: %s (%d)\n", dst2, len_counter(dst2));
	if (strcmp(dst2, dst) != 0 || len_counter(dst) != len_counter(dst2))
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	free (dst);
	free (dst2);
	return (0);
}

int		strcpy_check(void)
{
	printf("\n\n---STRCPY TESTS---\n\n");
	strcpy_utils("", 1);
	strcpy_utils("long string very very very very very very very very very very very very very very very very very very very very very long string", 2);
	strcpy_utils("midlle string it's midlle string", 3);
	return (0);
}

int		read_utils(int fd, int fd_ft, char *buf, char *buf_ft, int size, int test)
{
	int write_errno;
	int ft_write_errno;

	errno = 0;
	printf("TEST #%d.", test);
	printf(" size is '%d', fd = %d\n", size, fd);
	read(fd, buf, size);
	write_errno = errno;
	errno = 0;
	printf("read:    %s\n", buf);
	ft_read(fd_ft, buf_ft, size);
	ft_write_errno = errno;
	printf("ft_read: %s\n", buf_ft);
	printf("errno : %d, %d\n", write_errno, ft_write_errno);
	if (write_errno != ft_write_errno)
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	return (0);
}

int		read_stdin(char *buf, char *buf_ft, int size)
{
	int write_errno;
	int ft_write_errno;

	errno = 0;
	printf("TEST #2.");
	printf(" size is '6, fd = 0\n");
	read(0, buf, size);
	write_errno = errno;
	errno = 0;
	printf("read:    %s\n", buf);
	ft_read(0, buf_ft, size);
	ft_write_errno = errno;
	printf("ft_read: %s\n", buf_ft);
	printf("errno : %d, %d\n", write_errno, ft_write_errno);
	if (write_errno != ft_write_errno)
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	return (0);
}

int		read_check(void)
{
	char buf[100];
	char buf_ft[100];
	int fd;
	int fd_ft;
	int errno;

	bzero(buf, 100);
	bzero(buf_ft, 100);
	errno = 0;
	printf("\n\n---READ TESTS---\n\n");
	fd = open("read_test.txt", O_RDWR);
	fd_ft = open("read_test.txt", O_RDWR);
	read_utils(-1, -1, buf, buf_ft, 6, 1);
	read_stdin(buf, buf_ft, 6);
	bzero(buf, 100);
	bzero(buf_ft, 100);
	read_utils(fd, fd_ft, buf, buf_ft, 7, 2);
	return (0);
}

t_list	*list_new(void)
{
	t_list *tmp;
	tmp = malloc(sizeof(t_list) * 1);
	tmp->next = NULL;
	return (tmp);
}

int		ft_list_size_check(void)
{
	int r;

	r = 0;
	printf("\n\n---LIST SIZE TEST---\n\n");
	t_list *list;
	list = list_new();
	list->next = list_new();
	list->next->next = list_new();
	list->next->next->next = list_new();
	r = ft_list_size(list);
	printf("list size is %d\n", r);
	if (r != 4)
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	return (0);
}

int		strdup_utils(char *str, int test)
{
	char *buf;
	char *buf2;

	buf = NULL;
	buf2 = NULL;
	buf = strdup(str);
	buf2 = ft_strdup(str);
	printf("TEST #%d.", test);
	printf(" String is '%s'\n", str);
	printf("strdup:    %s (%d)\n", buf, len_counter(buf));
	printf("ft_strdup: %s (%d)\n", buf2, len_counter(buf2));
	if (strcmp(buf, buf2) != 0 || len_counter(buf) != len_counter(buf2))
		printf("ERROR\n\n");
	else
		printf("SUCCESS\n\n");
	free (buf);
	free (buf2);
	return (0);
}

int		strdup_check(void)
{
	printf("\n\n---STRDUP TESTS---\n\n");
	strdup_utils("", 1);
	strdup_utils("midlle string it's midlle string", 2);
	strdup_utils("long string very very very very very very very very very very very very very very very very very very very very very long string", 3);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	printf("\n\n---START OF ALL TESTS---\n\n");
	strlen_check();
	strcpy_check();
	strcmp_check();
	write_check();
	read_check();
	strdup_check();
	if (argc == 2 && argv[1] != '\0')
		ft_list_size_check();
	printf("\n\n---END OF ALL TESTS---\n\n");
	return (0);
}
