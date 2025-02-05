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