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
/*
Practical:8 
Check Whether the Length of a Given Linked List is Even or Odd
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void checkEvenOrOdd() {
        Node* temp = head;
        int count = 0;

        while (temp) {
            count++;
            temp = temp->next;
        }

        if (count % 2 == 0)
            cout << "The length of the linked list is Even.\n";
        else
            cout << "The length of the linked list is Odd.\n";
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    list.checkEvenOrOdd(); // Output: Even

    list.insert(50);
    list.checkEvenOrOdd(); // Output: Odd

    return 0;
}
*/
/*Practical:9
Search an Element in a Linked List and Return its Position
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    int search(int key) {
        Node* temp = head;
        int position = 1; // Start position from 1

        while (temp) {
            if (temp->data == key)
                return position;
            temp = temp->next;
            position++;
        }
        return -1; // Not found
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    int key = 30;
    int position = list.search(key);

    if (position != -1)
        cout << "Element " << key << " found at position: " << position << endl;
    else
        cout << "Element " << key << " not found in the linked list.\n";

    return 0;
}
*/
/*
Practical:10
WAP to count number of nodes in a given linked list.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Number of nodes in the linked list: " << list.countNodes() << endl;

    return 0;
}
*/
/*
Practical:11
WAP to insert elements 2, 20, 4, and 5 in order in a singly linked list from front and then print the numbers.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    void insertFront(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void printList() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Inserting elements from the front
    list.insertFront(5);
    list.insertFront(4);
    list.insertFront(20);
    list.insertFront(2);

    // Printing the linked list
    cout << "Linked List elements: ";
    list.printList();

    return 0;
}
*/
/*
Practical:12
WAP implementing doubly linked list.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    // Insert at the front
    void insertFront(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    // Insert at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete a node
    void deleteNode(int val) {
        if (!head) return;

        Node* temp = head;

        // If head node needs to be deleted
        if (head->data == val) {
            head = head->next;
            if (head) head->prev = nullptr;
            delete temp;
            return;
        }

        while (temp && temp->data != val) {
            temp = temp->next;
        }

        if (!temp) return; // Element not found

        if (temp->next) temp->next->prev = temp->prev;
        if (temp->prev) temp->prev->next = temp->next;

        delete temp;
    }

    // Count nodes in the doubly linked list
    int countNodes() {
        int count = 0;
        Node* temp = head;
        while (temp) {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.insertFront(5);
    dll.insertFront(2);

    cout << "Doubly Linked List: ";
    dll.display();

    cout << "Number of nodes: " << dll.countNodes() << endl;

    dll.deleteNode(20);
    cout << "After deleting 20: ";
    dll.display();

    return 0;
}
*/
/*
Practical:13
WAP to insert an element (new node) in a doubly linked list at the end.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() {
        head = nullptr;
    }

    // Function to insert a node at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) { // If the list is empty
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next) { // Traverse to the last node
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Function to display the list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    // Inserting elements at the end
    dll.insertEnd(10);
    dll.insertEnd(20);
    dll.insertEnd(30);
    dll.insertEnd(40);

    // Displaying the linked list
    cout << "Doubly Linked List: ";
    dll.display();

    return 0;
}
*/
/*
Practical: 14
WAP implementing circular linked list.
*/
/*
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = nullptr;
    }

    // Insert at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) { // If the list is empty
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) { // Traverse to the last node
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    // Delete a node
    void deleteNode(int val) {
        if (!head) return;

        Node* temp = head, *prev = nullptr;

        // If head needs to be deleted
        if (head->data == val) {
            while (temp->next != head) { // Traverse to last node
                temp = temp->next;
            }
            if (head == head->next) { // Only one node in list
                delete head;
                head = nullptr;
                return;
            }
            temp->next = head->next;
            delete head;
            head = temp->next;
            return;
        }

        // Traverse the list
        do {
            prev = temp;
            temp = temp->next;
        } while (temp != head && temp->data != val);

        if (temp == head) return; // Not found

        prev->next = temp->next;
        delete temp;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertEnd(10);
    cll.insertEnd(20);
    cll.insertEnd(30);
    cll.insertEnd(40);

    cout << "Circular Linked List: ";
    cll.display();

    cll.deleteNode(20);
    cout << "After deleting 20: ";
    cll.display();

    return 0;
}
*/
/*
Practical: 15
WAP to count number of nodes in a circular linked list.
*/
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
public:
    Node* head;

    CircularLinkedList() {
        head = nullptr;
    }

    // Insert at the end
    void insertEnd(int val) {
        Node* newNode = new Node(val);

        if (!head) { // If the list is empty
            head = newNode;
            newNode->next = head;
            return;
        }

        Node* temp = head;
        while (temp->next != head) { // Traverse to the last node
            temp = temp->next;
        }

        temp->next = newNode;
        newNode->next = head;
    }

    // Count nodes in Circular Linked List
    int countNodes() {
        if (!head) return 0; // Empty list

        int count = 0;
        Node* temp = head;
        do {
            count++;
            temp = temp->next;
        } while (temp != head);

        return count;
    }

    // Display the list
    void display() {
        if (!head) {
            cout << "List is empty" << endl;
            return;
        }

        Node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertEnd(10);
    cll.insertEnd(20);
    cll.insertEnd(30);
    cll.insertEnd(40);

    cout << "Circular Linked List: ";
    cll.display();

    cout << "Number of nodes: " << cll.countNodes() << endl;

    return 0;
}
