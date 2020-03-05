//
// Created by Justin on 2/24/2020.
//

int * insertion_sort(int *arr, int len){
    int i, curr, j;
    for (i = 1; i < len; i++)
    {
        curr = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > curr)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = curr;
    }
    return arr;
}