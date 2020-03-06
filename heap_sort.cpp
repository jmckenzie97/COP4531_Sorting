//
// Created by Justin on 2/24/2020.
//

#include <iostream>
using namespace std;
void heapify(int *arr, int len, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (right < len && arr[right] > arr[largest])
        largest = right;

    if (left < len && arr[left] > arr[largest])
        largest = left;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        heapify(arr, len, largest);
    }
}

void heapSort(int *arr, int len)
{
    for (int i = len / 2 - 1; i >= 0; i--)
        heapify(arr, len, i);

    for (int i = len - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}