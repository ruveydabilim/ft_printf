#include <stdio.h>
#include "ft_printf.h"
#include "limits.h"
int main()
{
 	//ft_printf("%d\n",ft_printf("%%%%%%%s\n%d\n%", 1, 42));
	//ft_printf("%d\n",ft_printf("%%%%%%%aaa", 42, 7));
	ft_printf(" %p  %p\n", ULONG_MAX, LONG_MIN);
	printf(" %p  %p", ULONG_MAX, LONG_MIN);
}
