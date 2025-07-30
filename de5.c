Consider the following C code for queue operations:
#include <stdio.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue(int value) {
    if (front == -1) front = 0;
    queue[++rear] = value;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("%d\n", queue[front]); // Accessing the front element
    return 0;
}
What is the output of the code?
  2) 
  Consider the following C code for linear search:
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
        int arr[] = {10, 20, 30, 40, 50};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 30;
        printf("%d\n", linearSearch(arr, n, key));
        return 0;
}
What is the output of the code?
  3) 
  Consider the following C code for binary search on a sorted array:
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
        int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 23;
        printf("%d\n", binarySearch(arr, 0, n - 1, key));
        return 0;
}
What is the output of the code?
  4) 
  What will be the output of the following code?
#include <stdio.h>
struct Node {
        int data;
        struct Node *next;
};
int sumCircularList(struct Node *head, int limit) {
        if (head == NULL) return 0;
        int sum = 0;
        struct Node *current = head;
        int count = 0;
        do {
                sum += current->data;
                current = current->next;
                count++;
            } while (current != head && count < limit);
        return sum;
}
int main() {
        struct Node a = {2, NULL}, b = {3, NULL}, c = {5, NULL};
        a.next = &b;
        b.next = &c;
        c.next = &a; // Circular link
        printf("%d", sumCircularList(&a, 5)); // Sum up to 5 nodes
        return 0;
}
5) 
#include <stdio.h>
int main() {
    int n = 1000;
    int i = 0;
    while (i < n) {
        // Some O(1) operation
        i = i + (n / 10); // Tricky increment
    }
return 0;
}  What is the time complexity of the while loop?
6) 
Consider the following C code for linear search:
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
        int arr[] = {7, 7, 7, 7, 7};
        int n = sizeof(arr) / sizeof(arr[0]);
        int key = 7;
        printf("%d\n", linearSearch(arr, n, key));
        return 0;
}
What is the output of the code?
  7) 
  #include <stdio.h>
int main() {
    int n = 1000000;
    int i = 2;
    while (i <= n) {
        // Some O(1) operation
        i = i * i; // Tricky increment
    }
return 0;
}   What is the time complexity of the while loop?
8) 
#include <stdio.h>
int main() {
        int x = 10;
        int *const ptr = &x; // Constant pointer
        int y = 20;
        // ptr = &y; // Line A
        *ptr = 30; // Line B
        printf("%d\n", x);
        return 0;
}  What happens if Line A is uncommented? What is the output if Line B is uncommented?
