#include<stdio.h>
int main()
{
	int size;
	int a[5]={ 1,2,3,4,5};
	size=sizeof(a)/sizeof(int);
	printf("do dai cua mang la : %d\n",size);
	for(int i=0 ;i<5; i++)
	{
		printf(" %d ",a[i]);
		
	}
	
	return 0;
}
