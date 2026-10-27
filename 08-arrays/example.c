
#include <stdio.h>

void traverse(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

void insert(int a[], int *n, int pos, int value) {
    for (int i = *n; i >= pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
    (*n)++;
}

void deleteElement(int a[], int *n, int pos) {
    for (int i = pos - 1; i < *n - 1; i++) {
        a[i] = a[i + 1];
    }
    (*n)--;
}

void sort(int a[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int search(int a[], int n, int value) {
    for (int i = 0; i < n; i++) {
        if (a[i] == value) {
            return i;
        }
    }
    return -1;
}
