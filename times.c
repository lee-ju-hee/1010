#include <stdio.h>
int main()
{
	int num;
	
	printf("�� �Է�: ");
	scanf("%d", &num);
	
	if(num%7==0)
	{
		printf("%d�� 7�� ����Դϴ�.", num);
	}
	else
	{
		printf("%d�� 7�� ����� �ƴմϴ�.", num);
	}
}
