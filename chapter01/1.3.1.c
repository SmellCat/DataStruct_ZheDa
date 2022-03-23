/**
 * @file 1.3.1.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-01-09
 * 
 * @copyright Copyright (c) 2022
 * 给定N个整数的序列{ A1, A2, …, AN}，
 * 求函数 的最大值。
 */

/**
 * @brief 算法1
 * 
 */
int MaxSubseqSum1(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j, k;
    for (i = 0; i < N; i++) { /* i 是子列左端的位置 */
        for (j = i; j < N; j++) { /* j 是子列右端位置 */
            ThisSum = 0; /* ThisSum 是从A[i]到A[j]的子列和 */
            for (k = i; k <= j; k++) {
                ThisSum += A[k];
            }
            if (ThisSum > MaxSum) {/* 如果刚得到的这个子列和更大 */
                MaxSum = ThisSum; /* 则更新结果*/
            }
        } /* j 循环结束 */
    } /* i 循环结束 */
    return MaxSum;
}

/**
 * @brief 算法2
 * 
 */
int MaxSubseqSum2(int A[], int N)
{
    int ThisSum, MaxSum = 0;
    int i, j;
    for (i = 0; i < N; i++)  { /* i 是子列左端位置 */
        ThisSum = 0; /* ThisSum 是从A[i] 到A[j]的子列和 */
        for (j = i; j < N; j++) { /* j 是子列右端的位置 */
            ThisSum += A[j];
            /* 对于相同的i, 不同的j, 只需要在j-1次循环的基础上累加1项即可*/
            if (ThisSum > MaxSum) {/* 如果刚得到的这个子列和更大 */
                MaxSum = ThisSum; /* 则更新结果 */
            }
        } /* j 循环结束*/ 
    } /* i 循环结束*/
    return MaxSum;
}