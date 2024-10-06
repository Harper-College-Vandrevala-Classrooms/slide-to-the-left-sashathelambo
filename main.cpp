#include <iostream>
#include <cassert>
#include <vector>
#include <sstream>
#include "array_shift.h"
using namespace std;

// Main function to run tests for array and vector shifting functions
int main() {

    cout << "Running tests for array and vector shifting functions..." << endl;

    // Test array_shift_left
    cout << "Testing array_shift_left..." << endl;
    {
        int arr1[] = {1, 2, 3, 4, 5};
        cout << "Initial array: 1 2 3 4 5" << endl;
        array_shift_left(arr1, 5, 1);
        cout << "After shift left by 1: " << arr1[0] << " " << arr1[1] << " " << arr1[2] << " " << arr1[3] << " " << arr1[4] << endl;
        assert(arr1[0] == 2 && arr1[1] == 3 && arr1[2] == 4 && arr1[3] == 5 && arr1[4] == 1);
        array_shift_left(arr1, 5, 1);
        cout << "After another shift left by 1: " << arr1[0] << " " << arr1[1] << " " << arr1[2] << " " << arr1[3] << " " << arr1[4] << endl;
        assert(arr1[0] == 3 && arr1[1] == 4 && arr1[2] == 5 && arr1[3] == 1 && arr1[4] == 2);
        array_shift_left(arr1, 5, 1);
        cout << "After another shift left by 1: " << arr1[0] << " " << arr1[1] << " " << arr1[2] << " " << arr1[3] << " " << arr1[4] << endl;
        assert(arr1[0] == 4 && arr1[1] == 5 && arr1[2] == 1 && arr1[3] == 2 && arr1[4] == 3);

        int arr2[] = {1, 2, 3, 4, 5};
        cout << "\nInitial array: 1 2 3 4 5" << endl;
        array_shift_left(arr2, 5, 3);
        cout << "After shift left by 3: " << arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] << " " << arr2[4] << endl;
        assert(arr2[0] == 4 && arr2[1] == 5 && arr2[2] == 1 && arr2[3] == 2 && arr2[4] == 3);
        array_shift_left(arr2, 5, 3);
        cout << "After another shift left by 3: " << arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] << " " << arr2[4] << endl;
        assert(arr2[0] == 2 && arr2[1] == 3 && arr2[2] == 4 && arr2[3] == 5 && arr2[4] == 1);
        array_shift_left(arr2, 5, 3);
        cout << "After another shift left by 3: " << arr2[0] << " " << arr2[1] << " " << arr2[2] << " " << arr2[3] << " " << arr2[4] << endl;
        assert(arr2[0] == 5 && arr2[1] == 1 && arr2[2] == 2 && arr2[3] == 3 && arr2[4] == 4);

        int arr3[] = {1, 2, 3};
        cout << "\nInitial array: 1 2 3" << endl;
        array_shift_left(arr3, 3, 3);
        cout << "After shift left by 3: " << arr3[0] << " " << arr3[1] << " " << arr3[2] << endl;
        assert(arr3[0] == 1 && arr3[1] == 2 && arr3[2] == 3);

        int arr4[] = {1, 2, 3};
        cout << "\nInitial array: 1 2 3" << endl;
        array_shift_left(arr4, 3, 4);
        cout << "After shift left by 4: " << arr4[0] << " " << arr4[1] << " " << arr4[2] << endl;
        assert(arr4[0] == 2 && arr4[1] == 3 && arr4[2] == 1);
    }
    cout << "array_shift_left tests passed." << endl;

    // Test array_shift_right
    cout << "\nTesting array_shift_right..." << endl;
    {
        int arr5[] = {1, 2, 3, 4, 5};
        cout << "Initial array: 1 2 3 4 5" << endl;
        array_shift_right(arr5, 5, 1);
        cout << "After shift right by 1: " << arr5[0] << " " << arr5[1] << " " << arr5[2] << " " << arr5[3] << " " << arr5[4] << endl;
        assert(arr5[0] == 5 && arr5[1] == 1 && arr5[2] == 2 && arr5[3] == 3 && arr5[4] == 4);
        array_shift_right(arr5, 5, 1);
        cout << "After another shift right by 1: " << arr5[0] << " " << arr5[1] << " " << arr5[2] << " " << arr5[3] << " " << arr5[4] << endl;
        assert(arr5[0] == 4 && arr5[1] == 5 && arr5[2] == 1 && arr5[3] == 2 && arr5[4] == 3);
        array_shift_right(arr5, 5, 1);
        cout << "After another shift right by 1: " << arr5[0] << " " << arr5[1] << " " << arr5[2] << " " << arr5[3] << " " << arr5[4] << endl;
        assert(arr5[0] == 3 && arr5[1] == 4 && arr5[2] == 5 && arr5[3] == 1 && arr5[4] == 2);

        int arr6[] = {1, 2, 3, 4, 5};
        cout << "\nInitial array: 1 2 3 4 5" << endl;
        array_shift_right(arr6, 5, 3);
        cout << "After shift right by 3: " << arr6[0] << " " << arr6[1] << " " << arr6[2] << " " << arr6[3] << " " << arr6[4] << endl;
        assert(arr6[0] == 3 && arr6[1] == 4 && arr6[2] == 5 && arr6[3] == 1 && arr6[4] == 2);
        array_shift_right(arr6, 5, 3);
        cout << "After another shift right by 3: " << arr6[0] << " " << arr6[1] << " " << arr6[2] << " " << arr6[3] << " " << arr6[4] << endl;
        assert(arr6[0] == 5 && arr6[1] == 1 && arr6[2] == 2 && arr6[3] == 3 && arr6[4] == 4);
        array_shift_right(arr6, 5, 3);
        cout << "After another shift right by 3: " << arr6[0] << " " << arr6[1] << " " << arr6[2] << " " << arr6[3] << " " << arr6[4] << endl;
        assert(arr6[0] == 2 && arr6[1] == 3 && arr6[2] == 4 && arr6[3] == 5 && arr6[4] == 1);

        int arr7[] = {1, 2, 3};
        cout << "\nInitial array: 1 2 3" << endl;
        array_shift_right(arr7, 3, 3);
        cout << "After shift right by 3: " << arr7[0] << " " << arr7[1] << " " << arr7[2] << endl;
        assert(arr7[0] == 1 && arr7[1] == 2 && arr7[2] == 3);

        int arr8[] = {1, 2, 3};
        cout << "\nInitial array: 1 2 3" << endl;
        array_shift_right(arr8, 3, 4);
        cout << "After shift right by 4: " << arr8[0] << " " << arr8[1] << " " << arr8[2] << endl;
        assert(arr8[0] == 3 && arr8[1] == 1 && arr8[2] == 2);
    }
    cout << "array_shift_right tests passed." << endl;

    // Test vector_shift
    cout << "\nTesting vector_shift..." << endl;
    {
        vector<int> vec1 = {1, 2, 3, 4, 5};
        cout << "Initial vector: 1 2 3 4 5" << endl;
        vector_shift(vec1, 1);
        cout << "After shift by 1: " << vec1[0] << " " << vec1[1] << " " << vec1[2] << " " << vec1[3] << " " << vec1[4] << endl;
        assert(vec1[0] == 5 && vec1[1] == 1 && vec1[2] == 2 && vec1[3] == 3 && vec1[4] == 4);
        vector_shift(vec1, 1);
        cout << "After another shift by 1: " << vec1[0] << " " << vec1[1] << " " << vec1[2] << " " << vec1[3] << " " << vec1[4] << endl;
        assert(vec1[0] == 4 && vec1[1] == 5 && vec1[2] == 1 && vec1[3] == 2 && vec1[4] == 3);
        vector_shift(vec1, 1);
        cout << "After another shift by 1: " << vec1[0] << " " << vec1[1] << " " << vec1[2] << " " << vec1[3] << " " << vec1[4] << endl;
        assert(vec1[0] == 3 && vec1[1] == 4 && vec1[2] == 5 && vec1[3] == 1 && vec1[4] == 2);

        vector<int> vec2 = {1, 2, 3, 4, 5};
        cout << "\nInitial vector: 1 2 3 4 5" << endl;
        vector_shift(vec2, 3);
        cout << "After shift by 3: " << vec2[0] << " " << vec2[1] << " " << vec2[2] << " " << vec2[3] << " " << vec2[4] << endl;
        assert(vec2[0] == 3 && vec2[1] == 4 && vec2[2] == 5 && vec2[3] == 1 && vec2[4] == 2);
        vector_shift(vec2, 3);
        cout << "After another shift by 3: " << vec2[0] << " " << vec2[1] << " " << vec2[2] << " " << vec2[3] << " " << vec2[4] << endl;
        assert(vec2[0] == 5 && vec2[1] == 1 && vec2[2] == 2 && vec2[3] == 3 && vec2[4] == 4);
        vector_shift(vec2, 3);
        cout << "After another shift by 3: " << vec2[0] << " " << vec2[1] << " " << vec2[2] << " " << vec2[3] << " " << vec2[4] << endl;
        assert(vec2[0] == 2 && vec2[1] == 3 && vec2[2] == 4 && vec2[3] == 5 && vec2[4] == 1);

        vector<int> vec3 = {1, 2, 3};
        cout << "\nInitial vector: 1 2 3" << endl;
        vector_shift(vec3, 3);
        cout << "After shift by 3: " << vec3[0] << " " << vec3[1] << " " << vec3[2] << endl;
        assert(vec3[0] == 1 && vec3[1] == 2 && vec3[2] == 3);

        vector<int> vec4 = {1, 2, 3};
        cout << "\nInitial vector: 1 2 3" << endl;
        vector_shift(vec4, 4);
        cout << "After shift by 4: " << vec4[0] << " " << vec4[1] << " " << vec4[2] << endl;
        assert(vec4[0] == 3 && vec4[1] == 1 && vec4[2] == 2);
    }
    cout << "vector_shift tests passed." << endl;

    cout << "\nAll tests passed!" << endl;

    return 0;
}