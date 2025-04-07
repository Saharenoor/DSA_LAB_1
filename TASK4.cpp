/*
Binary search is another searching algorithm used to search a specific value (or index of value) from the
sorted array. In binary search, we first compare the value to be searched with the item in the middle position
of the array. If there's a match, we can return immediately. If the key is less than the middle key, then the
item sought must lie in the lower half of the array; if it's greater than the item sought must lie in the upper
half of the array. So we repeat the procedure on the lower (or upper) half of the array. The pseudocode of
the task is given below:
Input: A Sorted array, A of N elements and value to be searched
Output: Index of searched element or -1 if not found
low = 0, high = N-1;
While (low <= high)
mid = (low + high)/2;
If ( A[mid] == Value )
Return mid;
Else-if ( A[mid] < Value )
low = mid + 1;
Else
high = mid – 1;
End-if
End-While
return -1;
Implement the code for binary search using templates. Test your code using the main function below and
upload it to your repository: Lab-1-DSA. The name of the code on your repository should be Task_4.cpp
int main() {
// Test with an integer array (sorted) of size 5
int intArray[5] = {11, 12, 22, 25, 64};
int intKey = 22;
int intIndex = binarySearch(intArray, intKey);
printSearchResult(intIndex, intKey);
// Test with a float array (sorted) of size 4
float floatArray[4] = {0.57, 1.62, 2.71, 3.14};
float floatKey = 2.71;
int floatIndex = binarySearch(floatArray, floatKey);
printSearchResult(floatIndex, floatKey);
// Test with a string array (sorted) of size 4
string stringArray[4] = {"apple", "banana", "grape", "orange"};
string stringKey = "grape";
int stringIndex = binarySearch(stringArray, stringKey);
printSearchResult(stringIndex, stringKey);
return 0;
}
*/

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
