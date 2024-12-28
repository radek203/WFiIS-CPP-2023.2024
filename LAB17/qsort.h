//
// Created by Radek on 18.06.2024.
//

#ifndef QSORT_H
#define QSORT_H

#include <iostream>
#include <vector>
#include <future>
#include <thread>
#include <functional>

template<typename T>
void swap(std::vector<T> &vec, int i, int j) {
    T temp = vec[i];
    vec[i] = vec[j];
    vec[j] = temp;
}

template<typename T>
int fun(std::vector<T> &vec, const int left, const int right) {
    int pivotIndex = (left + right) / 2;
    T pivotValue = vec[pivotIndex];
    swap(vec, pivotIndex, right);
    int storeIndex = left;

    for (int i = left; i < right; ++i) {
        if (vec[i] < pivotValue) {
            swap(vec, i, storeIndex);
            ++storeIndex;
        }
    }
    swap(vec, storeIndex, right);
    return storeIndex;
}


template<typename T, int size>
void qsort_async(std::vector<T> &vec, int left, int right) {
    if (right > left) {
        int pivot = fun<T>(vec, left, right);
        std::cout << "Current thread id: " << std::this_thread::get_id() << ", left=" << left << ", right=" << right << std::endl;
        std::future<void> result1 = std::async(std::launch::async, [&]() { qsort_async<T, size>(vec, left, pivot - 1); });
        std::future<void> result2 = std::async(std::launch::async, qsort_async<T, size>, std::ref(vec), pivot + 1, right);

        result1.wait();
        result2.wait();
    }
}

#endif //QSORT_H
