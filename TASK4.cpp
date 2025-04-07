#include <iostream>
#include <string>
using namespace std;

// Template for Binary Search
template <typename T>
int binarySearch(T array[], T value, int size) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (array[mid] == value) {
            return mid;
        }
        else if (array[mid] < value) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}

// Template for printing the search result
template <typename T>
void printSearchResult(int index, T key) {
    if (index != -1) {
        cout << "Value \"" << key << "\" found at index: " << index << endl;
    }
    else {
        cout << "Value \"" << key << "\" not found in the array." << endl;
    }
}

int main() {
    // Test with an integer array (sorted) of size 5
    int intArray[5] = {11, 12, 22, 25, 64};
    int intKey = 22;
    int intIndex = binarySearch(intArray, intKey, 5);
    printSearchResult(intIndex, intKey);

    // Test with a float array (sorted) of size 4
    float floatArray[4] = {0.57f, 1.62f, 2.71f, 3.14f};
    float floatKey = 2.71f;
    int floatIndex = binarySearch(floatArray, floatKey, 4);
    printSearchResult(floatIndex, floatKey);

    // Test with a string array (sorted) of size 4
    string stringArray[4] = {"apple", "banana", "grape", "orange"};
    string stringKey = "grape";
    int stringIndex = binarySearch(stringArray, stringKey, 4);
    printSearchResult(stringIndex, stringKey);

    return 0;
}
