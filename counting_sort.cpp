//
// Created by Justin on 2/24/2020.
//
#include<iostream>
using namespace std;


/*Method to sort the array*/
void Counting_Sort(int *arr, int *sorted, int len)
{
    int max = 0;
    for(int i = 0; i < len; i++){
        if (arr[i] > max)
            max = arr[i];
    }

    int C[max+1];
    for(int i = 0; i < max + 1; i++)
    {
        /*It will initialize the C with zero*/
        C[i] = 0;
    }
    for(int j = 1; j < len; j++)
    {
        /*It will count the occurence of every element x in A
        and increment it at position x in C*/
        C[arr[j]]++;
    }
    for(int i = 1; i <= max; i++)
    {
        /*It will store the last
        occurence of the element i */
        C[i] += C[i-1];
    }
    for(int j = len-1; j >= 1;j--)
    {
        /*It will place the elements at their
        respective index*/
        sorted[C[arr[j]]] = arr[j];
        /*It will help if an element occurs
        more than one time*/
        C[arr[j]] = C[arr[j]]-1;
    }
}

