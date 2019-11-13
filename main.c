#include "header.h"

int	main(int argc, char **argv)
{

	(void)argv;
	if (argc == 1)
	{
		printf("\ncount args: %d\n", spdprintf("nb1: %d   nb2: %d nb3: %x\n", 14, 750, 123));
		spdprintf("VOici un string:%s ", "bonjour");
	}
	if (argc == 3)
		spdprintf(argv[1], argv[2]);
	return (0);
}
