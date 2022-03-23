#include <stdio.h>

void PrintN(int N) 
{
    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    
    }
    return;
}

void PrintNRecursion(int N)
{
    if(N) {
        PrintNRecursion(N-1);
        printf("%d\n", N);
    }
    return;
}

void main(void) 
{
    int N ;
    scanf("%d", &N);
    // PrintN(N);
    PrintNRecursion(N);
    return 0;
}