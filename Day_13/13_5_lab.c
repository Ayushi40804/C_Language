#include <stdio.h>
 	int main ()
	{
	int a = 0, b;
	b = (a=0)? 2 : 3;
	printf ('%d', b);
	return 0;
}
