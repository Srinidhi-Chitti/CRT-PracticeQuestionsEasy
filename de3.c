1) #include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr + 2; // p points to arr[2] (value 3)
    printf("%d\n", p[-1]); // Tricky: Negative indexing
    return 0;
}
2) What will be the state of the array {5, 4, 3, 2, 1} after two full passes of the outer loop (i.e., after i=0 and i=1 complete) in the standard Bubble Sort algorithm?
#include <stdio.h>
void simulateTwoPassesBubbleSort(int arr[], int n) {
        // First pass (i=0)
        for (int j = 0; j < n - 1; j++) { 
                if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
            }
        // Second pass (i=1)
        for (int j = 0; j < n - 1 - 1; j++) { // n - i - 1 becomes n - 2
                if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 41]; // Typo corrected: arr[j+1]
                        arr[j + 1] = temp;
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
        int arr[] = {5, 4, 3, 2, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        simulateTwoPassesBubbleSort(arr, n);
        printArray(arr, n);
        return 0;
}
What is the output of the code?
  3) What will be the output of the following code?
#include <stdio.h>
#include <stdlib.h>
struct Node {
        int data;
        struct Node *prev;
        struct Node *next;
};
int main() {
        struct Node n1 = {10, NULL, NULL};
        printf("%d", n1.data);
        return 0;
}
4) What will be the output of the following code?
#include <stdio.h>
#include <stdlib.h>
struct Node {
        int data;
        struct Node *prev;
        struct Node *next;
};
int main() {
        struct Node n1 = {10, NULL, NULL};
        struct Node n2 = {20, NULL, NULL};
        n1.next = &n2;
        n2.prev = &n1;
        printf("%d", n1.next->data);
        return 0;
}
5) #include <stdio.h>
int main() {
    int n = 1024;
    for (int i = 1; i <= n; i = i * 2) {
        // Some O(1) operation
    }
return 0;
}  What is the time complexity of the for loop?
6) What will be the output of the following code?
#include <stdio.h>
struct Node {
    int data;
    struct Node *next;
};
int main() {
    struct Node n1 = {1, NULL}, n2 = {2, NULL};
    n1.next = &n2;
    n2.next = &n1; // Circular link
    struct Node *ptr = &n1;
    int count = 0;
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
        count++;
    } while (ptr != &n1 && count < 5); // Limit iterations to avoid infinite loop
return 0;
}
7) #include <stdio.h> 
int main() 
{ 
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; 
    printf("%d", matrix[1][2]); 
    return 0;
}
9) What will be the state of the array {10, 1, 8, 5} after exactly one iteration of the outer loop (i.e., after i=0 completes) in the standard Bubble Sort algorithm?
#include <stdio.h>
void simulateOnePassBubbleSort(int arr[], int n) {
        // Only the first pass (i=0)
        for (int j = 0; j < n - 1; j++) { // Equivalent to n - i - 1 when i=0
                if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
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
        int arr[] = {10, 1, 8, 5};
        int n = sizeof(arr) / sizeof(arr[0]);
        simulateOnePassBubbleSort(arr, n);
        printArray(arr, n);
        return 0;
}
What is the output of the code?
  10) #include <stdio.h> 
int main() 
{ 
    int matrix[2][2] = {{1, 2}, {3, 4}}; 
    printf("%d", matrix[1][1]); 
    return 0;
}
