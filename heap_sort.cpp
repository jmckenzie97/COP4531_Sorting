//
// Created by Justin on 2/24/2020.
//

/*
 Heapify (A, i)

  l ← left(i)
  r ← right(i)
  if l ≤ heap-size[A] and A[l] > A[i]
      then largest ← l
      else largest ← i

  if r ≤ heap-size[A] abd A[r] > A[largest]
      then largest ← r

  if largest ≠ i
      then swap A[i] and A[largest]
      Heapify (A, largest)  // to see if exchange destroyed heap property

 */

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

/*
 *Heapsort (A)
    Build-Heap (A)
    for i ← length[A] downto 2
        do swap A[1], A[i]
        heap-size[A] ← heap-size[A] - 1
        Heapify (A, 1)
 */

void heapSort(int *arr, int len)
{
    //Build heap
    for (int i = len / 2 - 1; i >= 0; i--)
        heapify(arr, len, i);
    //extract elements from heap
    for (int i = len - 1; i >= 0; i--)
    {
        //root to end
        swap(arr[0], arr[i]);
        //get back to max heap
        heapify(arr, i, 0);
    }
}