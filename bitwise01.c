#include <stdio.h>
int main()
{
	int a=5, b=3, c;//a=0000 0101 b=0000 0011
	
	c=a&b;
	printf("%d %d %d\n", a, b, c);
	
	c=a|b;
	printf("%d %d %d\n", a, b, c);

	c=a^b;
	printf("%d %d %d\n", a, b, c);
	
	c=~a;
	printf("%d %d\n", a, c);
	
	return 0;
}
