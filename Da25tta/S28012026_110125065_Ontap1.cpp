#include<stdio.h>

int main()
{
	int a[50][50];
	int n,r,i,j,tong=0,max;
	
	do
	{
		printf("Nhap n: ");
		scanf("%d",&n);
	}while(n<=0);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);		
		}
	}
	
	printf("Mang a= ");
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%4d",a[i][j]);		
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			tong = tong + a[i][j]; 		
		}
	}
	
	printf("\nTong = %d",tong);
	
	
	do
	{
		printf("\nNhap r: ");
		scanf("%d",&r);
	}while(r<0 || r>= n);
	
	max = a[r][0];
	
	for(i=0;i<n;i++)
	{
		if (a[r][i] > max) max = a[r][i];
	}
	
	printf("Max = %d",max);
	
	
	
	return 0;
}