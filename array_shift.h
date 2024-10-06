#ifndef ARRAY_SHIFT_H
#define ARRAY_SHIFT_H

#include <algorithm>

template <typename T>
void array_shift_left(T* arr, int size, int shift) {
    shift %= size;
    std::rotate(arr, arr + shift, arr + size);
}

template <typename T>
void array_shift_right(T* arr, int size, int shift) {
    shift %= size;
    std::rotate(arr, arr + size - shift, arr + size);
}

#endif

void array_shift_left(int arr[], int size, int shift) {
    shift = shift % size;
    if (shift == 0) return;
    int* temp = new int[shift];
    for (int i = 0; i < shift; i++) {
        temp[i] = arr[i];
    }
    for (int i = shift; i < size; i++) {
        arr[i - shift] = arr[i];
    }
    for (int i = 0; i < shift; i++) {
        arr[size - shift + i] = temp[i];
    }
    delete[] temp;
}

void array_shift_right(int arr[], int size, int shift) {
    shift = shift % size;
    if (shift == 0) return;
    int* temp = new int[shift];
    for (int i = 0; i < shift; i++) {
        temp[i] = arr[size - shift + i];
    }
    for (int i = size - 1; i >= shift; i--) {
        arr[i] = arr[i - shift];
    }
    for (int i = 0; i < shift; i++) {
        arr[i] = temp[i];
    }
    delete[] temp;
}

void vector_shift(std::vector<int>& vec, int shift) {
    int n = vec.size();
    shift = shift % n;
    if (shift == 0) return;
    
    std::vector<int> temp(shift);
    for (int i = 0; i < shift; i++) {
        temp[i] = vec[n - shift + i];
    }
    for (int i = n - 1; i >= shift; i--) {
        vec[i] = vec[i - shift];
    }
    for (int i = 0; i < shift; i++) {
        vec[i] = temp[i];
    }
}