#include "header.h"

int	main()
{
	if (MODIFIED_BY_SCRIPT)
		printf("Header has been modified by the ./create script, please make sure to update the header and set '%s# define MODIFIED_BY_SCRIPT %s0 %s' instead of 1\n", PURPC, REDC, NOCL);
	printf("ft_strlen(\"coucou\")\n$> %d\n", ft_strlen("coucou"));
	/*
	Tests
	*/
	return (0);
}
