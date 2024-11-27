#include<stdio.h>
int main()
{
	int n,a[5];
	printf("Nhap n:");
	scanf("%d",&n);
	for(int i=0;i<n ; i++)
	{
		printf("Nhap mang: ",i);
		scanf("%d",&a[i]);
	}
printf("Mang vua nhap : ");
for(int i=0;i<n;i++)
{
	printf(" %d ",a[i]);
}
	return 0;
}
