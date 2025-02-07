/*
Practical 3:
 WAP for recursively adding all the elements of an array. 
/*
#include <iostream>
using namespace std;

// Recursive function to calculate sum of array elements
int sumArray(int arr[], int size) {
    if (size == 0)
        return 0; // Base case: if array is empty, return 0
    return arr[size - 1] + sumArray(arr, size - 1); // Recursive step
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int totalSum = sumArray(arr, size);
    cout << "Sum of array elements: " << totalSum << endl;

    return 0;
}
*/
/*
Practical 4:
 WAP implementing recursive function for finding nth Fibonacci of a number.
*/
/*
#include <iostream>
using namespace std;

// Function to find the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position of the Fibonacci number you want to find: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;
    return 0;
}
*/
/*
Practical 5
WAP to implement insertion sort. 
*/
/*
#include <iostream>
using namespace std;

// Function to perform Insertion Sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
*/
/*
Practical: 6 
WAP performing matrix addition. 
*/
/*
#include <iostream>
using namespace std;

void matrixAddition(int A[][3], int B[][3], int C[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void displayMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];

    matrixAddition(A, B, C, 3, 3);

    cout << "Matrix A:\n";
    displayMatrix(A, 3, 3);

    cout << "Matrix B:\n";
    displayMatrix(B, 3, 3);

    cout << "Resultant Matrix (A + B):\n";
    displayMatrix(C, 3, 3);

    return 0;
}
*/
/*
Practical: 7
 WAP performing matrix multiplication.
*/
/*
#include <iostream>
using namespace std;

void matrixMultiplication(int A[][3], int B[][3], int C[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            C[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void displayMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3];

    matrixMultiplication(A, B, C, 3, 3);

    cout << "Matrix A:\n";
    displayMatrix(A, 3, 3);

    cout << "Matrix B:\n";
    displayMatrix(B, 3, 3);

    cout << "Resultant Matrix (A * B):\n";
    displayMatrix(C, 3, 3);

    return 0;
}
*/