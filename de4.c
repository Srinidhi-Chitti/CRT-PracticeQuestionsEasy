1) #include <stdio.h>
int main() {
        int n = 1000;
        for (int i = n; i > 0; i--) {
                if (i % 7 == 0) {
                        // Some O(1) operation
                    }
            }
        return 0;
}   What is the time complexity of the for loop?
  2) Consider the following C code for queue operations:
#include <stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if (front == -1) front = 0;
    queue[++rear] = value;
}
int dequeue() {
    int val = queue[front++];
    if (front > rear) { front = -1; rear = -1; }
    return val;
}
int main() {
    char elements[] = {'X', 'Y', 'Z'}; // Using chars for example
    int i;
    for (i = 0; i < 3; i++) {
        enqueue(elements[i]);
    }
while (front != -1 && front <= rear) { // While not empty
    printf("%c ", dequeue());
}
printf("\n");
return 0;
}
What is the output of the code?
  3) Consider the following C code for queue operations:
#include <stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if (front == -1) front = 0;
    queue[++rear] = value;
}
int isEmpty() {
    return front == -1 || front > rear;
}
int main() {
    printf("%s\n", isEmpty() ? "True" : "False"); // Initial check
    enqueue(5);
    printf("%s\n", isEmpty() ? "True" : "False"); // After enqueue
    return 0;
}
What is the output of the code?
  4) In an array {10, 20, 5, 15}, how many swaps occur during the first full pass (i=0) of the standard Bubble Sort algorithm?
#include <stdio.h>
int main() {
        int arr[] = {10, 20, 5, 15};
        int n = sizeof(arr) / sizeof(arr[0]);
        int swaps = 0;
        
        // First pass (i=0)
        for (int j = 0; j < n - 1; j++) { 
                if (arr[j] > arr[j + 1]) {
                        int temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                        swaps++;
                    }
            }
        printf("%d\n", swaps);
        return 0;
}
What is the output of the code?
  5) Consider the following C code for queue operations:
#include <stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if (front == -1) front = 0;
    queue[++rear] = value;
}
int dequeue() {
    int val = queue[front++];
    if (front > rear) { front = -1; rear = -1; }
    return val;
}
int peek_front() {
    return queue[front];
}
int main() {
    enqueue(5);
    enqueue(10);
    dequeue(); // 5 removed
    enqueue(15);
    printf("%d\n", peek_front());
    return 0;
}
What is the output of the code?
  6) Consider the array {2, 1, 3}. What will be its state after the bubbleSort function completes?
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
    int arr[] = {2, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}
What is the output of the code?
  7) Consider the following C code for queue operations:
#include <stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
        if (front == -1) front = 0;
        queue[++rear] = value;
}
int dequeue() {
        int val = queue[front++];
        if (front > rear) { front = -1; rear = -1; } // Reset if empty
        return val;
}
int main() {
        enqueue(1);
        enqueue(2);
        enqueue(3);
        dequeue();
        dequeue();
        printf("%d\n", dequeue());
        return 0;
}
What is the output of the code?
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
    int arr[] = {}; // Empty array
    int n = 0;
    int key = 100;
    printf("%d\n", linearSearch(arr, n, key));
    return 0;
}
What is the output of the code?
  9) What will be the output of the following code?
#include <stdio.h>
struct Node {
        int data;
        struct Node *next;
};
int main() {
        struct Node *head = NULL;
        if (head == NULL)
            printf("Circular list is empty");
        else
            printf("Circular list is not empty");
        return 0;
}
10) #include <stdio.h>
#include <string.h>
int main() {
        char buffer[10];
        // strcpy(buffer, "A very long string that will overflow buffer"); // Line A
        strncpy(buffer, "Short string", 5); // Line B
        buffer[5] = '\0'; // Manually null-terminate
        printf("%s\n", buffer);
        return 0;
}  What would happen if Line A were uncommented? What is the output if only Line B (and the next line) is uncommented?
