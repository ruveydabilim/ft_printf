#include <stdio.h>
#include "ft_printf.h"

int main()
{
	int a = 0;
 	//ft_printf("%d\n",ft_printf("%%%%%%%s\n%d\n%", 1, 42));
	//ft_printf("%d\n",ft_printf("%%%%%%%aaa", 42, 7));
	ft_printf("%d\n", ft_printf("%4a%\n",42, 7));
	printf("%d\n", printf("%4a%\n",42, 7));
}
