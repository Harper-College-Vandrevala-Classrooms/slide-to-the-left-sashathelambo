#ifndef ARRAY_SHIFT_H
#define ARRAY_SHIFT_H

#include <vector>

void array_shift_left(int arr[], int size, int shift);
void array_shift_right(int arr[], int size, int shift);
void vector_shift(std::vector<int>& vec, int shift);

#endif // ARRAY_SHIFT_H


void array_shift_left(int arr[], int size, int shift) {
    shift = shift % size;  // Normalize shift value
    if (shift == 0) return;  // No shift needed
    int* temp = new int[shift];
    // Store the first 'shift' elements
    for (int i = 0; i < shift; i++) {
        temp[i] = arr[i];
    }
    // Shift the remaining elements
    for (int i = shift; i < size; i++) {
        arr[i - shift] = arr[i];
    }
    // Place the stored elements at the end
    for (int i = 0; i < shift; i++) {
        arr[size - shift + i] = temp[i];
    }
    delete[] temp;
}

void array_shift_right(int arr[], int size, int shift) {
    shift = shift % size;  // Normalize shift value
    if (shift == 0) return;  // No shift needed
    int* temp = new int[shift];
    // Store the last 'shift' elements
    for (int i = 0; i < shift; i++) {
        temp[i] = arr[size - shift + i];
    }
    // Shift the remaining elements
    for (int i = size - 1; i >= shift; i--) {
        arr[i] = arr[i - shift];
    }
    // Place the stored elements at the beginning
    for (int i = 0; i < shift; i++) {
        arr[i] = temp[i];
    }
    delete[] temp;
}

void vector_shift(std::vector<int>& vec, int shift) {
    int n = vec.size();
    shift = shift % n;  // Normalize shift value
    if (shift == 0) return;  // No shift needed
    
    // Manual rotation implementation
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
