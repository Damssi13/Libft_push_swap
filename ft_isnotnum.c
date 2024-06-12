#include "libft.h"

int	ft_isnum(int c)
{
	if ((c >= '0' && c <= '9') || c == '-' || c == '+')
	{
		return 1;
	}
	return 0;
}

