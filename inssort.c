//Insertion sort
#include<stdio.h>

int main()
{
int n,i,j,hole,value,count_insertion=0;
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++)
	{
	A[i]=rand()%1000;	
	}
for(i=0;i<n;i++)
	{
	value=A[i];
	hole=i;
	while(hole>0 && A[hole-1]>value)
		{
		A[hole]=A[hole-1];
		hole=hole-1;
		count_insertion++;		
		}
	A[hole]=value;		
	}
printf("Sorted array:");
for(i=0;i<n;i++)
	{
	printf("%d ",A[i]);
	}
printf("\n--%d--\n",count_insertion);

return 0;
}
