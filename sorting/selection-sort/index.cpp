#include <iostream>
using namespace std;

// select minimum and swap
void selection_sort(int arr[], int n) {
    for (int i = 0; i<=n-2; i++) {
        int mini = i;
        int temp;
        
        for(int j = i; j < n-1; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
            temp = arr[i];
            arr[i] = arr[mini];
            arr[mini] = temp;
        }
    }
}

int main() {
    int n = 6;
    int arr1[n] = {5,3,1,6,4,7};
    selection_sort(arr1, n);


    cout << "[";
    for (int i = 0; i<n; i++) {
         cout << arr1[i] << ",";
    }
    cout << "]";
}