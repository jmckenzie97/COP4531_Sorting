//
// Created by Justin on 2/24/2020.
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void bucketSort(float *array, int size) {
    vector<float> buckets[size];

    for(int i = 0; i < size; i++)  {
        int in = size * array[i];
        buckets[int(size*array[i])].push_back(array[i]);
    }

    for(int i = 0; i < size; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    int index = 0;

    for(int i = 0; i < size; i++) {
        while(!buckets[i].empty()) {
            array[index++] = *(buckets[i].begin());
            buckets[i].erase(buckets[i].begin());
        }
    }
}