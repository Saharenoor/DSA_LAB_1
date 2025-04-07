/*Selection sort is a sorting algorithm in which we repeatedly find the next largest (or smallest) element in
the array and move it to its final position in the sorted array. Assume that we wish to sort the array in
increasing (ascending) order, i.e., the smallest element at the beginning of the array and the largest element
at the end. We begin by selecting the smallest element and moving it to the lowest index position. We can
do this by swapping the element at the lowest index and the smallest element. We then reduce the effective
size of the array by one element and repeat the process on the greater (sub)array. The process stops when
the effective size of the array becomes 1 (an array of 1 element is already sorted). The pseudocode of the
task is given below:
Input: An unsorted array, A of N elements
Output: Sorted array, A
For I = 0:N-1
SmallSub = I
For J = I+1:N-1
If A[J] < A[SmallSub]
SmallSub = J
End-If
End-For
Swap ( A[I], A[SmallSub] )
End-For
Implement the code for selection sort using templates. Test your code using the main function below and
upload it to your repository: Lab-1-DSA. The name of the code on your repository should be Task_2.cpp
int main() {
// Test with an integer array of size 5
int intArray[5] = {64, 25, 12, 22, 11};
cout << "Original integer array: ";
printArray(intArray);
selectionSort(intArray);
cout << "Sorted integer array: ";
printArray(intArray);
// Test with a string array of size 4
string stringArray[4] = {"apple", "orange", "banana", "grape"};
cout << "\nOriginal string array: ";
printArray(stringArray);
selectionSort(stringArray);
cout << "Sorted string array: ";
printArray(stringArray);
return 0;
}
    */


#include <iostream>
#include <string>
using namespace std;

// Template function to perform selection sort
template <typename T>
void selectionSort(T array[], int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        int smallSub = i;
        for (int j = i + 1; j < size; j++) 
        {
            if (array[j] < array[smallSub])
            {
                smallSub = j;
            }
        }
        // Swap elements
        if (smallSub != i) 
        {
            T temp = array[i];
            array[i] = array[smallSub];
            array[smallSub] = temp;
        }
    }
}

// Template function to print an array
template <typename T>
void printArray(T array[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test with an integer array of size 5
    int intArray[5] = {64, 25, 12, 22, 11};
    cout << "Original integer array: ";
    printArray(intArray, 5);
    selectionSort(intArray, 5);
    cout << "Sorted integer array: ";
    printArray(intArray, 5);

    // Test with a string array of size 4
    string stringArray[4] = {"apple", "orange", "banana", "grape"};
    cout << "\nOriginal string array: ";
    printArray(stringArray, 4);
    selectionSort(stringArray, 4);
    cout << "Sorted string array: ";
    printArray(stringArray, 4);

    return 0;
}
