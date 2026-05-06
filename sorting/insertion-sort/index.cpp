#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i<=n-1; i++) {
        int j = i;
        int temp;
        while (j > 0 && arr[j] < arr[j-1]) {
            temp = arr[j];
            arr[j] = arr[j -1];
            arr[j-1] = temp;
            j--;
        }
    }
}

// insertion sort - Take an element and place it in its correct order
int main() { 
int n = 6;
int arr1[n] = {30, 15, 1, 16, 40, 50};
int arr2[n] = {1, 2, 3, 4, 5, 6};
    insertionSort(arr2, n);

    cout << "[";
    for (int i = 0; i<n; i++) {
         cout << arr2[i] << ",";
    }
    cout << "]";
}