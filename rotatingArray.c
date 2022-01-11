struct Results solution(int A[], int N, int K) {
    struct Results result;
    // write your code in C99 (gcc 6.2.0)
    
    int tmpArray[N];
    int newIndex;

    for (int i =0; i<N; i++) {
        
        newIndex = (i+K)%N;
        tmpArray[newIndex] = A[i];

    }

    // copy tmpArray back to result.A

    
    for(int i=0; i<N; i++)
    {
        A[i] = tmpArray[i];
    }

    result.A = A;
    result.N = N;
    return result;
}
