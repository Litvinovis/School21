#include "get_next_line.h"

int		get_next_line(char **line)
{
	int r;
	int ret;
	char s[10000];
	char s1;

	r = 0;
	while (r < 10000)
		s[r++] = '\0';
	r = 0;
	ret = 1;
	while (ret > 0)
	{
		ret = read(0, &s1, 1);
		if (ret > 0 && s1 != '\n')
			s[r++] = s1;
		if (ret > 0 && s1 == '\n')
		{
			*line = s;
			return (1);
		}
	}
	*line = s;
	return (0);
}