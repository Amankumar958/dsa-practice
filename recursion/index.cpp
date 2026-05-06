#include <iostream>
#include <utility> 
#include <string>

using namespace std;

// find factorial of n
int f1(int n) {
    if (n == 0) {
        return 1;
    }
    return n * f1(n - 1);
}

// print name by n times
void printName(int n) {
    if (n == 0) {
        return;
    }
    cout << "Aman" << endl;
    n--;
    printName(n);
}

// other approach of above question
void printName2(int i, int n) {
    if (i > n) return;

    cout << "Aman" << endl;
    printName2(i+1, n);
}

// print 1 to n
void nTimes(int i, int n) {
   if (i > n) return;
   cout << i << endl;
   nTimes(i+1, n);
}

// print n to 1  backtracking
void reverseNtimes(int i, int n) {
    if (i > n) return;
    reverseNtimes(i+1, n);
    cout << i << endl;
}

// print the sum of n natural numbers
int sum(int n) {
    if(n == 0) return 0;
    return n + sum(n-1);
}

void sumTwo(int i, int sum) {
    if (i < 1) {
        cout << "other way" << sum << endl; 
        return;
    }
    sumTwo(i-1, sum+i);
}

void printArray(int n, int arr[]) {
    cout << "[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n-1) cout << ", ";
    }
    cout << "]";
}

// reverse an array using recursion
void reverse(int l, int r, int arr[]) {
    if (l >= r) return;
    swap(arr[l], arr[r]);
    reverse(l+1, r-1, arr);
}

// reverse using a single pointer
void reverseTwo(int i, int n, int arr[]) {
    if ( i >= n-i-1) return;

    swap(arr[i], arr[n-i-1]);
    reverseTwo(i+1, n, arr);
}

bool checkPalidrome(int l, int r, string str) {
    if(l >= r ) return true;
    if(str[l] != str[r]) return false;
    return checkPalidrome(l+1, r-1, str);
}

int main() {
    // int n = 5;
    // cout << "factotrial of n = " << f1(n) << endl; 

    // printName2(1, 5);
    // nTimes(1, 10);
    // reverseNtimes(1,3);

    // int k;
    // cin >> k;
    // cout << "sum of k natural numbers " << k << " => " << sum(k) << endl;

    // sumTwo(3, 0);

    // int n;
    // cout << "add length: ";
    // cin >> n;

    // int arr[n];
    // cout << "n is " << n << endl;

    // for (int i = 0; i<n; i++) {
    //     cin >> arr[i];
    // }
    // cout << "element found." << endl;

    // reverseTwo(0, n, arr);
    // printArray(n, arr);

    string str1 = "MADAM";
    string str2 = "WEEK";
    if(checkPalidrome(0, str2.size() - 1, str2)) {
        cout << "YES!" << endl;
    } else {
        cout << "NO!" << endl;
    }
}