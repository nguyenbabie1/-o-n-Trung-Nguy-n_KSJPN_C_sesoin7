#include<stdio.h>
int main()
{
int a[5];
	printf("Nhap cac phan tu\n");
		for(int i=0;i<5 ; i++)
	{
    printf("Nhap mang: ",i);
    scanf("%d",&a[i]);
	}
    printf("Mang vua nhap co so chan : ");
 		for(int i=0;i<5;i++)
{
			if(a[i]%2==0)
	{
         	printf(" %d ",a[i]);
	}
			else 
	{
		    printf("\nkhong co ");
		    break;
	}
	
}

	return 0;
}
