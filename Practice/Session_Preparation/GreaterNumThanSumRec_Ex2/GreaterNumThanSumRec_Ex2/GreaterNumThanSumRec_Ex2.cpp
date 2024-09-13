#include <iostream>
using namespace std;

int findIndex(int* arr, int n, int currentIndex) {
    if (currentIndex >= n || currentIndex < 1) {
        // Invalid index
        return -1;
    }

    // Calculate the average of neighbors
    double average = (arr[currentIndex - 1] + arr[currentIndex + 1]) / 2.0;

    // Check if the current element is greater than the average of neighbors
    if (arr[currentIndex] > average) {
        return currentIndex;
    }

    // Recursive call for the next index
    return findIndex(arr, n, currentIndex + 1);
}

int main() {
    int N;

    // Input the number of elements in the array
    cout << "Enter the number of elements (N): ";
    cin >> N;

    if (N >= 0 && N <= 20) {
        // Dynamically allocate memory for the array
        int* arr = new int[N];

        // Input elements of the array
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < N; ++i) {
            cin >> arr[i];
        }

        // Call the recursive function
        int resultIndex = findIndex(arr, N, 1);

        // Output the result
        if (resultIndex != -1) {
            cout << "Index of the rightmost element greater than the average of its neighbors: " << resultIndex << endl;
        }
        else {
            cout << "No such element found." << endl;
        }

        // Deallocate memory for the dynamic array
        delete[] arr;
    }
    else {
        cout << "Invalid input. N should be between 0 and 20." << endl;
    }

    return 0;
}