//
// Created by Justin McKenzie on 3/9/2020.
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

void popArrays(int *arr10, int *arr50, int *arr100, int *arr500, int *arr1000, int* arr5000, int *arr10000,
               int *arr50000, int *arr100000, int *arr500000, int *arr1000000);
void popFloats(float *arrf10, float *arrf50, float *arrf100, float *arrf500, float *arrf1000, float *arrf5000,
               float *arrf10000, float *arrf50000, float *arrf100000, float *arrf500000, float *arrf1000000);
int main() {


    ofstream myfile;
    myfile.open ("runtime.txt");

    int arr10[10];
    int arr50[50];
    int arr100[100];
    int arr500[500];
    int arr1000[1000];
    int arr5000[5000];
    int arr10000[10000];
    int arr50000[50000];
    int arr100000[100000];
    static int arr500000[500000];
    static int arr1000000[1000000];



    float arrf10[10];
    float arrf50[50];
    float arrf100[100];
    float arrf500[500];
    float arrf1000[1000];
    float arrf5000[5000];
    float arrf10000[10000];
    float arrf50000[50000];
    static float arrf100000[100000];
    static float arrf500000[500000];
    static float arrf1000000[1000000];


    myfile << "10 \n \n";
    time_t start1, end1;

    /* You can call it like this : start = time(NULL);
     in both the way start contain total time in seconds
     since the Epoch. */
    time(&start1);
    high_resolution_clock::time_point start = high_resolution_clock::now();
    insertion_sort(arr10, 10);
    time(&end1);
    high_resolution_clock::time_point stop = high_resolution_clock::now();
    double time_taken = double(end1 - start1);
    auto duration = duration_cast<microseconds>(stop - start);
    myfile << time_taken << endl;

    start = high_resolution_clock::now();
    mergeSort(arr10, 0, 10);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    heapSort(arr10, 10);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    quickSort(arr10, 0, 10);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    Counting_Sort(arr10, 10);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    radixsort(arr10, 10);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    bucketSort(arrf10, 10);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    popArrays(arr10, arr50, arr100, arr500, arr1000, arr5000, arr10000, arr50000, arr100000, arr500000, arr1000000);
    popFloats(arrf10, arrf50, arrf100, arrf500, arrf1000, arrf5000, arrf10000, arrf50000, arrf100000, arrf500000, arrf1000000);

    myfile << "\n 50 \n \n";
    start = high_resolution_clock::now();
    insertion_sort(arr50, 50);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    mergeSort(arr50, 0, 50);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    heapSort(arr50, 50);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    quickSort(arr50, 0, 50);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    Counting_Sort(arr50, 50);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    radixsort(arr50, 50);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    bucketSort(arrf50, 50);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;



    myfile << "\n 100 \n \n";
    start = high_resolution_clock::now();
    insertion_sort(arr100, 100);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    mergeSort(arr100, 0, 100);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    heapSort(arr100, 100);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    quickSort(arr100, 0, 100);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    Counting_Sort(arr100, 100);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    radixsort(arr100, 100);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    bucketSort(arrf100, 100);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;



    myfile << "\n 500 \n \n";
    start = high_resolution_clock::now();
    insertion_sort(arr500, 500);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    mergeSort(arr500, 0, 500);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    heapSort(arr500, 500);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    quickSort(arr500, 0, 500);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    Counting_Sort(arr500, 500);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    radixsort(arr500, 500);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    bucketSort(arrf500, 500);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    myfile << "\n 1000 \n \n";
    start = high_resolution_clock::now();
    insertion_sort(arr1000, 1000);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    mergeSort(arr1000, 0, 1000);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    heapSort(arr1000, 1000);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    quickSort(arr1000, 0, 1000);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    Counting_Sort(arr1000, 1000);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    radixsort(arr1000, 1000);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    start = high_resolution_clock::now();
    bucketSort(arrf1000, 1000);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    myfile << duration.count() << endl;

    myfile.close();



    return 0;
}

void popArrays(int *arr10, int *arr50, int *arr100, int *arr500, int *arr1000, int* arr5000, int *arr10000,
               int *arr50000, int *arr100000, int *arr500000, int *arr1000000){
    for(int i = 0; i < 10; i++){
        arr10[i] = rand() % 65536;
    }

    for(int i = 0; i < 50; i++){
        arr50[i] = rand() % 65536;
    }

    for(int i = 0; i < 100; i++){
        arr100[i] = rand() % 65536;
    }

    for(int i = 0; i < 500; i++){
        arr500[i] = rand() % 65536;
    }

    for(int i = 0; i < 1000; i++){
        arr1000[i] = rand() % 65536;
    }

    for(int i = 0; i < 5000; i++){
        arr5000[i] = rand() % 65536;
    }

    for(int i = 0; i < 10000; i++){
        arr10000[i] = rand() % 65536;
    }

    for(int i = 0; i < 50000; i++){
        arr50000[i] = rand() % 65536;
    }

    for(int i = 0; i < 100000; i++){
        arr100000[i] = rand() % 65536;
    }

    for(int i = 0; i < 500000; i++){
        arr500000[i] = rand() % 65536;
    }

    for(int i = 0; i < 1000000; i++){
        arr1000000[i] = rand() % 65536;
    }
}

void popFloats(float *arrf10, float *arrf50, float *arrf100, float *arrf500, float *arrf1000, float *arrf5000,
               float *arrf10000, float *arrf50000, float *arrf100000, float *arrf500000, float *arrf1000000){

    random_device rd;  //Will be used to obtain a seed for the random number engine
    mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
    uniform_real_distribution<> dis(0, 1.0);

    for(int i = 0; i < 10; i++){
        arrf10[i] = dis(gen);
    }

    for(int i = 0; i < 50; i++){
        arrf50[i] = dis(gen);
    }

    for(int i = 0; i < 100; i++){
        arrf100[i] = dis(gen);
    }

    for(int i = 0; i < 500; i++){
        arrf500[i] = dis(gen);
    }

    for(int i = 0; i < 1000; i++){
        arrf1000[i] = dis(gen);
    }

    for(int i = 0; i < 5000; i++){
        arrf5000[i] = dis(gen);
    }

    for(int i = 0; i < 10000; i++){
        arrf10000[i] = dis(gen);
    }

    for(int i = 0; i < 50000; i++){
        arrf50000[i] = dis(gen);
    }

    for(int i = 0; i < 100000; i++){
        arrf100000[i] = dis(gen);
    }

    for(int i = 0; i < 500000; i++){
        arrf500000[i] = dis(gen);
    }

    for(int i = 0; i < 1000000; i++){
        arrf1000000[i] = dis(gen);
    }

}