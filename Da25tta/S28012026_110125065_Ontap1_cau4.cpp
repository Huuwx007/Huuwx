#include<stdio.h>

int main()
{
	int i,n,a[50],tich=1,dem=0;
	FILE *fp,*fp1;
	
	fp = fopen("Cau4_1.inp","rt");
	
	if(fp == NULL ) printf("Mo tap tin khong thanh cong");
	else printf("Mo tap tin thanh cong");
	
	fscanf(fp,"%d",&n);
	
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%d",&a[i]);
	}
	
	
	fp1 = fopen("Cau4_1.out","wt");
	
	fprintf(fp1,"n= %d",n);
	fprintf(fp1,"\nMang a: ");
	for(i=0;i<n;i++)
	{
		fprintf(fp1,"%4d",a[i]);
	}
	
	
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			tich = tich * a[i];
			dem++;
		}
	}

	if(dem!=0)
	{
		fprintf(fp1,"\nTich so chan trong mang = %d",tich);
	}
	else fprintf(fp1,"\nMang KHONG CO so chan");
	
	printf("\nDa ghi vao tap tin thanh cong");
	
	
	fclose(fp);
	fclose(fp1);
	return 0;
}