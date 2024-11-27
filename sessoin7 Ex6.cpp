#include<stdio.h>
int main(){
int arr[6]={9,0,8,2,0,8};
		printf("Mang ban dau la: ");
			for(int i=0;i<=5;i++)
			{
		printf(" %d ",arr[i]);
			if(arr[i]% 2== 0)
			{
			arr[i] +=3;
			}
	    	else 
			{
			arr[i] += 2;
			}
		}
		printf("\nMang moi la: ");
			for(int i=0; i<5;i++)
	{
		printf(" %d ",arr[i]);
	}



	return 0;
}
