#include <stdio.h>
int main()
{
	int a = 3, b, c; //0000 0011=3
	
	b = a << 1; //0 0000 0110=6=3*2
	printf("%d %d\n", a, b);
	
	c = a << 2; //00 0000 1100=12=3*2*2
	printf("%d %d\n", a, c);
	
	return 0;
}
