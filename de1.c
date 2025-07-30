1) If an array {15, 8, 20} is sorted using bubbleSort, what will be the value at index 0 (the first element) after the sort?
#include <stdio.h>
void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                    }
            }
}
int main() {
        int arr[] = {15, 8, 20};
        int n = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, n);
        printf("%d\n", arr[0]); 
        return 0;
}
2) What is the output of the code?

Consider the following C code for Bubble Sort. What is the output for an array with a single element?
#include <stdio.h>
void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                    }
            }
}
void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
        printf("\n");
}
int main() {
        int arr[] = {42};
        int n = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, n);
        printArray(arr, n);
        return 0;
}
What is the output of the code?
3) #include <stdio.h>
int main() {
        int arr[3] = {1, 2, 3};
        int *p = arr;
        int (*ptr_to_array)[3] = &arr; // Pointer to the whole array
        printf("%d %d\n", *p, **ptr_to_array);
        return 0;
}
4) What is the final state of the array {7, 1, 5, 2, 9} after it is sorted by bubbleSort?
#include <stdio.h>
void bubbleSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
                for (int j = 0; j < n - i - 1; j++) {
                        if (arr[j] > arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                    }
            }
}
void printArray(int arr[], int size) {
        for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
        printf("\n");
}
int main() {
        int arr[] = {7, 1, 5, 2, 9};
        int n = sizeof(arr) / sizeof(arr[0]);
        bubbleSort(arr, n);
        printArray(arr, n);
        return 0;
}
What is the output of the code?
  5) What will be the output of the following code?
#include <stdio.h>
#include <stdlib.h>
struct Node {
        int data;
        struct Node *prev;
        struct Node *next;
};
void printBackward(struct Node *tail) {
        while (tail != NULL) {
                printf("%d ", tail->data);
                tail = tail->prev;
            }
}
int main() {
        struct Node n1 = {1, NULL, NULL};
        struct Node n2 = {2, NULL, NULL};
        struct Node n3 = {3, NULL, NULL};
        n1.next = &n2;
        n2.prev = &n1;
        n2.next = &n3;
        n3.prev = &n2;
        printBackward(&n3); // Start from the last node
        return 0;
}
6) What will be the output of the following code?
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};
void printForward(struct Node *head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}
int main() {
    struct Node n1 = {1, NULL, NULL};
    struct Node n2 = {2, NULL, NULL};
    struct Node n3 = {3, NULL, NULL};
    n1.next = &n2;
    n2.prev = &n1;
    n2.next = &n3;
    n3.prev = &n2;
    printForward(&n1);
    return 0;
}
7) #include <stdio.h>
int main()
{
    int matrix[2][3] = {{8, 9, 10}, {2,5,8}};
    printf("%d", matrix[0][2]);
    return 0;
}
8) Consider the following C code for linear search:
#include <stdio.h>
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
}
return -1;
}
int main() {
    int arr[] = {1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 1;
    printf("%d\n", linearSearch(arr, n, key));
    return 0;
}
What is the output of the code?
9) What will be the output of the following code?
#include <stdio.h>
#include <stdlib.h>
struct Node {
        int data;
        struct Node *prev;
        struct Node *next;
};
int main() {
        struct Node a = {5, NULL, NULL};
        struct Node b = {15, NULL, NULL};
        struct Node c = {25, NULL, NULL};
        a.next = &b;
        b.prev = &a;
        b.next = &c;
        c.prev = &b;
        struct Node *ptr = &a;
        printf("%d", ptr->next->next->data);
        return 0;
}
10) What will be the final position of the largest element (90) in the array {64, 34, 25, 12, 22, 11, 90} after running the bubbleSort function?
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
    }
}
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    // Imagine checking arr[n-1] here
    printf("%d\n", arr[n-1]);
    return 0;
}
What is the value of the last element of the array after sorting?
