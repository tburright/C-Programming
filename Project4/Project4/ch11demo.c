#include <stdio.h>
int main()
{
	char var1;
	char var2;
	char *var_ptr;

	var1 = 'A';
	var_ptr = &var1;	// Assign var1’s memory address to var_ptr
	var2 = *var_ptr;	// Define var2 by dereferencing var_ptr 

	printf("var1: %c var2: %c\n", var1, var2);	// Compare var1 to var2 and print human-readable results
	
	return(0);
}