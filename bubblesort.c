//Bubble sort algorithm
#include<stdio.h>

int main()
{
int n,i,j,count_bubblesort=0,temp;
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++)
	{
	A[i]=rand()%1000;
	printf("%d ",A[i]);	
	}
printf("\n");
for(i=0;i<n;i++)
	{
	for(j=n;j>i;j--)
		{
		  if(A[j]<A[j-1])
			{
			temp=A[j];
			A[i]=A[i-1];
			A[i-1]=temp;
			count_bubblesort++;
			}	
		}	
	}
printf("%d \n",count_bubblesort);

	
return 0;
}
