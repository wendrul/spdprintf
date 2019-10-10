#include "header.h"

int	main()
{
	if (MODIFIED_BY_SCRIPT)
		printf("Header has been modified by the ./create script, please make sure to update the header and set '# define MODIFIED_BY_SCRIPT 0' instead of 1\n");
	printf("ft_strlen(\"coucou\")\n$> %d\n", ft_strlen("coucou"));
	/*
	Tests
	*/
	return (0);
}
