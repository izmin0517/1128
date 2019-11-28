#include<stdio.h>
void abc(int []);

int main()
{
	int a[]={1,2,3}, i;
	
	printf("%x\n",a);
	
	for(i=0;i<3;i++)
		printf("%d\n",a[i]);
	
	abc(a);
	
	for(i=0;i<3;i++)
		printf("%d\n",a[i]);
	
	return 0;
}

void abc(int b[])	//(const int b[])형태로 작성하면 읽기전용이 되어 변경불가 
{
	printf("%x\n",b);
	b[2] = 200;
}
