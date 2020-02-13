#include <strings.h>

int			main(int argc, char **argv)
{
	char	buff[80];

	if (argc == 3)
		return (1);
	for (int i=0; i < 19; i++)
		buff[i] = '\0';
	strncpy(buff, argv[1], 40);
	strncpy(buff + 40, argv[2], 40);
	return (0);
}
