//
// Created by Justin on 2/24/2020.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void bucketSort(float *array, int size) {
    vector<float> bucket[size];
    for(int i = 0; i<size; i++)  {          //put elements into different buckets
        int in = size * array[i];
        bucket[int(size*array[i])].push_back(array[i]);
    }
    for(int i = 0; i<size; i++) {
        sort(bucket[i].begin(), bucket[i].end());       //sort individual vectors
    }
    int index = 0;
    for(int i = 0; i<size; i++) {
        while(!bucket[i].empty()) {
            array[index++] = *(bucket[i].begin());
            bucket[i].erase(bucket[i].begin());
        }
    }
}