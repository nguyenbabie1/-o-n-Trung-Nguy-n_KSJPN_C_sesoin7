#include<stdio.h>
int main()
{
	int a[5];
	printf("Nhap phan tu:\n");
	for(int i=0;i<5; i++)
	{
		printf("Nhap mang: ",i);
		scanf("%d",&a[i]);
	}
printf("Mang vua nhap: ");
for(int i=0;i<5;i++)
{
	printf(" %d ",a[i]);
}
	return 0;
}
