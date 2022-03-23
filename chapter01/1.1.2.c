#include <stdio.h>

void PrintN(int N) 
{
    int i;
    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    
    }
    return;
}

void PrintNRecure(int N)
{
    if(N) {
        PrintNRecure(N-1);
        printf("%d\n", N);
    }
    return;
}

void main(void) 
{
    int N ;
    scanf("%d", &N);
    // PrintN(N);
    PrintNRecure(N);
    return 0;
}