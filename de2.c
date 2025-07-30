1) Consider the following C code for binary search on a sorted array:
#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key) {
        while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == key) {
                        return mid;
                    }
                if (arr[mid] < key) {
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
            }
        return -1;
}
int main() {
        int arr[] = {10, 20, 30, 40, 50};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 10;
        printf("%d\n", binarySearch(arr, 0, n - 1, key));
        return 0;
}
What is the output of the code?
2) #include <stdio.h>
void print_char(char *ch_ptr) {
    printf("%c\n", *ch_ptr);
}
int main() {
    char characters[] = {'A', 'B', 'C'};
    print_char(characters + 1); // Pass address of 'B'
    // print_char(characters + 3); // Line A (Out of bounds)
    return 0;
}  What is the output of this C code? What would happen if Line A were uncommented?
  3) #include <stdio.h> 
int main() 
{ 
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    printf("%d", matrix[2][1]); 
    return 0;
}
4) Consider the following C code for queue operations:
#include <stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if (front == -1) front = 0;
    queue[++rear] = value;
}
int peek_front() {
    return queue[front];
}
int main() {
    enqueue(100);
    enqueue(200);
    enqueue(300);
    dequeue(); // Remove 100
    printf("%d\n", peek_front());
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
int queue_size() {
        if (front == -1) return 0;
        return rear - front + 1;
}
int main() {
        enqueue(10);
        enqueue(20);
        enqueue(30);
        printf("%d\n", queue_size());
        return 0;
}
What is the output of the code?
  6) What will be the output of the following code?
#include <stdio.h>
struct Node {
        int data;
        struct Node *next;
};
int main() {
        struct Node node = {7, NULL};
        node.next = &node; // Single-node circular list
        struct Node *head = NULL;
        if (head == NULL) {
                head = &node;
            }
        printf("%d", head->data);
        return 0;
}
7) What will be the output of the following code?
#include <stdio.h>
struct Node {
    int data;
    struct Node *next;
};
void traverseCircular(struct Node *head, int limit) {
    if (head == NULL) return;
    struct Node *current = head;
    int count = 0;
    do {
        printf("%d ", current->data);
        current = current->next;
        count++;
    } while (current != head && count < limit);
}
int main() {
    traverseCircular(NULL, 10); // Pass NULL head
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
        int arr[] = {5, 15, 25, 35};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 20;
        printf("%d\n", linearSearch(arr, n, key));
        return 0;
}
What is the output of the code?
  9) #include <stdio.h> 
int main() 
{ 
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    printf("%d", matrix[2][1]); 
    return 0;
}
10) #include <stdio.h>
int main() {
    int arr[10]; // An array of fixed size
    int n = 1000;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }
printf("%d\n", sum);
return 0;
}    What is the time complexity of this program?
