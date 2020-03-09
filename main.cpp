////
//// Created by Justin McKenzie on 3/9/2020.
////
//
#include <iostream>
#include <fstream>
#include <chrono>
#include <random>
#include <vector>
#include "insertion_sort.cpp"
#include "merge_sort.cpp"
#include "heap_sort.cpp"
#include "quicksort.cpp"
#include "counting_sort.cpp"
#include "radix_sort.cpp"
#include "bucket_sort.cpp"

using namespace std::chrono;
void popDynamic(int *arr, int size);
void popDynamicf(float *arrf, int size);
void testSize(int *arr, float *arrf, int size, ostream& myfile);
int main() {


    ofstream myfile;
    myfile.open ("runtime.txt");

    int * arr = new int [10];
    float * arrf = new float [10];

    testSize(arr, arrf, 10, myfile);
    testSize(arr, arrf, 50, myfile);
    testSize(arr, arrf, 100, myfile);
    testSize(arr, arrf, 500, myfile);
    testSize(arr, arrf, 1000, myfile);
    testSize(arr, arrf, 5000, myfile);
    testSize(arr, arrf, 10000, myfile);
    testSize(arr, arrf, 50000, myfile);
    testSize(arr, arrf, 100000, myfile);
    testSize(arr, arrf, 500000, myfile);
    testSize(arr, arrf, 1000000, myfile);

    myfile.close();
    return 0;
}

void popDynamic(int *arr, int size){
    for(int i = 0; i < size; i++){
        arr[i] = rand() % 65536;
    }
}

void popDynamicf(float *arrf, int size){
    random_device rd;  //Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    uniform_real_distribution<> dis(0, 1.0);
    for(int i = 0; i < size; i++){
        arrf[i] = dis(gen);
    }
}

void testSize(int *arr, float *arrf, int size, ostream& myfile){
    arr = new int [size];
    arrf = new float [size];

    popDynamic(arr, size);
    popDynamicf(arrf, size);

    myfile << size << " \n \n";

    auto start = high_resolution_clock::now();
    insertion_sort(arr, size);
    auto stop = high_resolution_clock::now();
    double elapsed = double(std::chrono::duration_cast<std::chrono::nanoseconds> (stop - start).count());
    auto duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    free(arr);
    arr = new int [size];
    popDynamic(arr, size);

    start = high_resolution_clock::now();
    mergeSort(arr, 0, size);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    free(arr);
    arr = new int [size];
    popDynamic(arr, size);

    start = high_resolution_clock::now();
    heapSort(arr, size);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    free(arr);
    arr = new int [size];
    popDynamic(arr, size);

    start = high_resolution_clock::now();
    quickSort(arr, 0, size);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    free(arr);
    arr = new int [size];
    popDynamic(arr, size);

    start = high_resolution_clock::now();
    Counting_Sort(arr, size);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    free(arr);
    arr = new int [size];
    popDynamic(arr, size);

    start = high_resolution_clock::now();
    radixsort(arr, size);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    free(arr);
    arr = new int [size];
    popDynamic(arr, size);
    popDynamicf(arrf, size);

    if (size < 500000){
        auto start = high_resolution_clock::now();
        bucketSort(arrf, size);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        myfile << duration.count() << endl;

        free(arrf);
        arrf = new float [size];
        popDynamicf(arrf, size);
    }


    myfile << "\n \n";

}