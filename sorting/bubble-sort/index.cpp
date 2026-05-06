#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i<=n-1; i++) {
        int temp;
        int didswapped = 0;
        for (int j = 0; j<=n-2; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didswapped = 1;
                cout << "runs";
            }
        }
        if (didswapped == 0) {
            break;
        }
    }
}

// bubble sort - push the maximum element to the last by adjacent swaps
int main() {
int n = 6;
int arr1[n] = {30, 15, 1, 16, 40, 50};
int arr2[n] = {1, 2, 3, 4, 5, 6};
    bubbleSort(arr1, n);

    cout << "[";
    for (int i = 0; i<n; i++) {
         cout << arr1[i] << ",";
    }
    cout << "]";

}