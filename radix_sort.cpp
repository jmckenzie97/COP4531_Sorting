//
// Created by Justin on 2/24/2020.
//

#include<iostream>
//#include"counting_sort.cpp"

using namespace std;
//streamlined version of count sort to work with radix sort
void countSortRadix(int *arr, int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};

    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

void radixsort(int *arr, int n)
{
    int m = getMax(arr, n);
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSortRadix(arr, n, exp);
}