#include <iostream>
#include "insertion_sort.cpp"
#include "merge_sort.cpp"
#include "heap_sort.cpp"
#include "quicksort.cpp"
#include "counting_sort.cpp"
#include "radix_sort.cpp"
#include "bucket_sort.cpp"

using namespace std;
int main() {
    int arr[] = {5, 10, 25, 2, 4, 1, 45, 10000005};
    int len = 8;
    cout << "sorted = ";
    quickSort(arr, 0 , len-1);
//    mergeSort(arr, 0 , len-1);
//    insertion_sort(arr, len);
    for(int i = 0; i < len; i++){
        //cout << i;
        cout << *(arr + i) << endl;

    }

    return 0;
}