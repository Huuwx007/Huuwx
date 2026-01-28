#include<stdio.h>

int sn(int x);
int main()
{
	int n,s;
	
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<0);
	
	s = sn(n);
	printf("%d",s);
	
	
	return 0;
}

int sn(int x)
{
	int kq;
	if(x==0)
	{
		return 1;
	}
	else
	{
		kq = (2*x+1) + sn(x-1);
	}
	
	
	
	return kq;
}