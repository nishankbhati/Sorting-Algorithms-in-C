#include<stdio.h>

int quick_count=0;

int partition(int a[],int p,int r)
{
  int x,i,t,j;
  x=a[r];
  i = p-1;
  for(j=p;j<=r-1;j++)
  {
    quick_count++;
    if(a[j]<=x)
    {
      i=i+1;
      t=a[i];
      a[j]=a[i];
      a[i]=t;
    }
  }
  t=a[i+1];
  a[i+1]=a[r];
  a[r]=t;
  return i+1;
}

int quick_sort(int a[],int p,int r)
{
  if(p<r)
  { int q;
    q=partition(a,p,r);
    quick_sort(a,p,q-1);
    quick_sort(a,q+1,r);
  }
  return quick_count;
}

int main()
{
int n,i,j;
scanf("%d",&n);
int a[i];
for(i=0;i<n;i++)
	{
	a[i]=rand()%1000;
	}
quick_sort(a,0,n-1);
printf("%d",quick_count);

return 0;
}


