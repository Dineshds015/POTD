//Missing number

int missingNumber(int A[], int N)
{
    int sum=0,soa=0;
    for(int i=1;i<=N;i++)
        soa+=i;
    for(int i=0;i<N-1;i++)
        sum+=A[i];
    return soa-sum;
}
