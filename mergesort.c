//Nishank Bhati,Ankit Rajvanshi,Satyam Kumar

    #include <stdio.h>
	int count_merge = 0;
     
    void merge(int A[], int L, int M, int R)
    {	

        int I, J, K;
        int N1 = M - L + 1;
        int N2 =  R - M;
        int LA[N1], RA[N2];
        for(I = 0; I < N1; I++)
            LA[I] = A[L + I];
        for(J = 0; J < N2; J++)
            RA[J] = A[M + 1+ J];
        I = 0;
        J = 0;
        K = L;
        while (I < N1 && J < N2)
        {
            if (LA[I] <= RA[J])
            {
                A[K] = LA[I];
                I++;
            }
            else
            {
                A[K] = RA[J];
                J++;
            }
            K++;
		//count_merge++;
        }
        while (I < N1)
        {
            A[K] = LA[I];
            I++;
            K++;
        }
        while (J < N2)
        {
            A[K] = RA[J];
            J++;
            K++;
        }
	//count_merge++;
    }
     
     
    int mergeSort(int A[], int L, int R)
    {
			count_merge++;
        if (L < R)
        {
	    int d;
            int M = L+(R-L)/2;
            mergeSort(A, L, M);
            mergeSort(A, M+1, R);
            merge(A, L, M, R);
        }
	return count_merge;
    }
    int main()
    {
        int T,N;
        scanf("%d",&T);
        int A[T];
        int I=0;
     
        for(I=0;I<T;I++)
        {
            A[I]=rand()%1000;
	    printf("%d\n",A[I]);
        }
        int s;
	s = mergeSort(A,0,T-1);
	printf("%d\n",s);
       for(I=0;I<T;I++)
        {
           printf("--%d\n",A[I]);
        }
        return 0;
    }
     





