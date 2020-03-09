//
// Created by Justin on 2/24/2020.
//

//Divide and conquer
//Recursive
//basically break array in half recursively, sorting the smaller portings and then merging them back together

//first subarray is arr[l..m] second is  arr[m+1..r]
void merge(int *arr, int l, int m, int r)
{
    int i, j, k;
    int lenL = m - l + 1; //compute length of first subarray
    int lenR =  r - m; //compute length of second subarray

    int *left = new int[lenL];
    int *right = new int[lenR];

    for (i = 0; i < lenL; i++) //populate first subarray with first half of arr
        left[i] = arr[l + i];
    for (j = 0; j < lenR; j++) //populate second subarray with last half of arr
        right[j] = arr[m + 1+ j];

    i = 0;
    j = 0;
    k = l;

    while (i < lenR && j < lenL) //loop while our iterating vars are less then len of respective arrays
    {
        if (right[i] >= left[j])  //comparison for sorting
        {
            arr[k] = right[i];
            i++;
        }
        else
        {
            arr[k] = left[j];
            j++;
        }
        k++;
    }

    while (i < lenR)
    {
        arr[k] = right[i];
        i++;
        k++;
    }

    while (j < lenL)
    {
        arr[k] = left[j];
        j++;
        k++;
    }
    free(left);
    free(right);
}

//l = left index, r = right index
void mergeSort(int *arr, int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;

        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
