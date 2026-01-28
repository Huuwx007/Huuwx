#include<stdio.h>
typedef struct HOCSINH
{
	char hoten[25];
	float toan;
	float ly;
	float hoa;
} HOCSINH;
int main()
{
	float dtb1, dtb2,tam;
	HOCSINH hs1,hs2;
	
	printf("\nNhap ho ten hoc sinh 1 : ");
	gets(hs1.hoten);
	printf("\nNhap diem toan: ");
	scanf("%f",&tam);hs1.toan=tam;	
	printf("\nNhap diem ly: ");
	scanf("%f",&tam);hs1.ly=tam;
	printf("\nNhap diem hoa: ");
	scanf("%f",&tam);hs1.hoa=tam;
	
	fflush(stdin);
	
	printf("\nNhap ho ten hoc sinh 2 : ");
	gets(hs2.hoten);
	printf("\nNhap diem toan: ");
	scanf("%f",&tam); hs2.toan=tam;	
	printf("\nNhap diem ly: ");
	scanf("%f",&tam); hs2.ly=tam;
	printf("\nNhap diem hoa: ");
	scanf("%f",&tam); hs2.hoa=tam;
	
	
	printf("\n-----Thong tin hoc sinh 1-----");
	printf("\nHo va ten: %s",hs1.hoten);
	printf("\nDiem toan: %.2f",hs1.toan);
	printf("\nDiem ly: %.2f",hs1.ly);
	printf("\nDiem hoa: %.2f",hs1.hoa);
	
	printf("\n-----Thong tin hoc sinh 2-----");
	printf("\nHo va ten: %s",hs2.hoten);
	printf("\nDiem toan: %.2f",hs2.toan);
	printf("\nDiem ly: %.2f",hs2.ly);
	printf("\nDiem hoa: %.2f",hs2.hoa);
	
	
	dtb1 =1.0*(hs1.toan+hs1.ly+hs1.hoa)/3;
	
	dtb2 =1.0*(hs2.toan+hs2.ly+hs2.hoa)/3;
	
	printf("\nDiem trung binh cua hoc sinh 1: %.2f",dtb1);
	printf("\nDiem trung binh cua hoc sinh 2: %.2f",dtb2);
	
	if(dtb1>dtb2) printf("\nDiem hoc sinh 1 > Diem hoc sinh 2");
	else if(dtb1 < dtb2) printf("\nDiem hoc sinh 1 < Diem hoc sinh 2");
	else printf("\nDiem hoc sinh 1 = Diem hoc sinh 2");
	
	
	return 0;
}