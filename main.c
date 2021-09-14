#include "./includes/ft_printf.h"
int main()
{
	
	// ft_printf("My function:\n1: %s\n2: %s\n3: %c\n4: %d\n5: %i\n6: %i\n", "sou ", "foda", 'g', 2147483647, 0, -202);
	// printf("\nOriginal function:\n1: %s\n2: %s\n3: %c\n4: %d\n5: %i\n6: %i\n", "sou ", "foda", 'g', 2147483647, 0, -202);
	// ft_printf("\nMy function:\nString: %s\nInt: %d\n", str, n);
	// printf("\nOriginal function:\nString: %s\nInt: %d\n", str, n);
	// ft_printf("\nMy function: %s\n", str);
	// printf("Original function: %s\n", str);
	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
}
