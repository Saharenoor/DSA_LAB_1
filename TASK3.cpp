/*
In computer science, linear search or sequential search is a method for finding a particular value in a list
that consists of checking every one of its elements, one at a time and in sequence, until the desired one is
found. The pseudocode of the task is given below:
For I = 0:N-1
If ( A[I] == Value )
Return [I];
End-if
End-For
return -1;
Implement the code for linear sort using templates. Test your code using the main function below and
upload it to your repository: Lab-1-DSA. The name of the code on your repository should be Task_3.cpp
int main() {
// Test with an integer array of size 5
int intArray[5] = {64, 25, 12, 22, 11};
int intKey = 12;
int intIndex = linearSearch(intArray, intKey);
printSearchResult(intIndex, intKey);
// Test with a float array of size 4
float floatArray[4] = {3.14, 2.71, 1.62, 0.57};
float floatKey = 1.62;
int floatIndex = linearSearch(floatArray, floatKey);
printSearchResult(floatIndex, floatKey);
// Test with a string array of size 4
string stringArray[4] = {"apple", "orange", "banana", "grape"};
string stringKey = "banana";
int stringIndex = linearSearch(stringArray, stringKey);
printSearchResult(stringIndex, stringKey);
return 0;
}
*/
#include <iostream>
#include <string>
using namespace std;

// Template function for linear search
template <typename T>
int linearSearch(T array[], T key, int size) {
    for (int i = 0; i < size; ++i) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;
}

// Template function to print search result
template <typename T>
void printSearchResult(int index, T key) {
    if (index != -1) {
        cout << "Element \"" << key << "\" found at index " << index << "." << endl;
    } else {
        cout << "Element \"" << key << "\" not found in the array." << endl;
    }
}

int main() {
    // Test with an integer array of size 5
    int intArray[5] = {64, 25, 12, 22, 11};
    int intKey = 12;
    int intIndex = linearSearch(intArray, intKey, 5);
    printSearchResult(intIndex, intKey);

    // Test with a float array of size 4
    float floatArray[4] = {3.14f, 2.71f, 1.62f, 0.57f};
    float floatKey = 1.62f;
    int floatIndex = linearSearch(floatArray, floatKey, 4);
    printSearchResult(floatIndex, floatKey);

    // Test with a string array of size 4
    string stringArray[4] = {"apple", "orange", "banana", "grape"};
    string stringKey = "banana";
    int stringIndex = linearSearch(stringArray, stringKey, 4);
    printSearchResult(stringIndex, stringKey);

    return 0;
}
