//
// Created by Justin on 2/24/2020.
//
#include<iostream>
using namespace std;


// utility function to get maximum value in arr[]
int getMax(int *arr, int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
void Counting_Sort(int *arr, int len)
{
    int max = getMax(arr, len);
    int output[len];

    int C[max+1];
    for(int i = 0; i < max + 1; i++)
    {
        C[i] = 0;
    }
    for(int j = 1; j < len; j++)
    {
        C[arr[j]]++;
    }
    for(int i = 1; i <= max; i++)
    {
        C[i] += C[i-1];
    }
    for(int j = len-1; j >= 1;j--)
    {
        output[C[arr[j]]] = arr[j];
        C[arr[j]] = C[arr[j]]-1;
    }

    for (int i = 0; i < len; i++)
        arr[i] = output[i];
}

