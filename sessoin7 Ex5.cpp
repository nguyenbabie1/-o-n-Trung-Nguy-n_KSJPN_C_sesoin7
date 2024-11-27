#include<stdio.h>
int main()
{
	int arr[5]={5,3,85,20,7};
	int max=arr[0];
	int min=arr[0];
	printf("Mang gom: ");
	for(int i=0;i<5;i++)
	{
		printf(" %d ",arr[i]);
		
		if(arr[i] > max)
		{
			max=arr[i];
		}
		if(arr[i] < min)
		{
			min =arr[i];
		}
	}
	printf(" \n So lon nhat la: %d ",max);
	printf(" \n So nho nhat la: %d ",min);
	return 0;
}
