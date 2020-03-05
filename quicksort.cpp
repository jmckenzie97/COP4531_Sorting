//
// Created by Justin on 2/24/2020.
//


#include <iostream>
#include <vector>

using namespace std;

void quickSort(int *arr,int,int);

int partition(int *arr, int,int);

void quickSort(int *arr, int l, int r)
{
    int p;
    if(l < r)
    {
        p = partition(arr, l,r);
        quickSort(arr,l,p);
        quickSort(arr,p+1,r);
    }
}


int partition(int *arr, int p,int q)
{
    int x= arr[p];
    int i=p;
    int j;

    for(j=p+1; j<q; j++)
    {
        if(arr[j]<=x)
        {
            i=i+1;
            swap(arr[i],arr[j]);
        }

    }

    swap(arr[i],arr[p]);
    return i;
}