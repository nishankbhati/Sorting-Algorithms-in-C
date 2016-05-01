//Selection sort

#include<stdio.h>

int main()
{
int i,j,temp,small,n;
scanf("%d",&n);
int A[n],count_selection=0;
for(i=0;i<n;i++)
	{
	A[i]=rand()%1000;	
	}
for(i=0;i<n;i++)
	{
	small=i;
	//inner loop one sort pass each loop
	for(j=0;j<i+1;j++)
		{
		if(A[j]<A[small])
		 small=j;
		//smallest selected exchange with current					
		temp=A[i];
		A[i]=A[small];
		A[small]=temp;	
		count_selection++;		
		}	
	}
	
for(i=0;i<n;i++)
	{
	printf("%d ",A[i]);	
	}
printf("\n");

printf("%d ",count_selection);	
return 0; 

}
