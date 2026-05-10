#include <iostream>
#include <utility> 
#include <string>
#include <vector>
#include <set>

using namespace std;

// find the largest element of the array.
int largestElement(vector<int>& v) {
    if (v.empty()) {
        return -1;
    }

    int largestElement = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (largestElement < v[i]) {
            largestElement = v[i];
        }
    }
    return largestElement;
}


// find the second largest element  of the array
 int secLargest(vector<int>& v) {
   if (v.empty()) {
        return -1;
    }

    int largestElement = v[0];
    for (int i = 1; i < v.size(); i++) {
        if (largestElement < v[i]) {
            largestElement = v[i];
        }
    }

    int secLargestElement = v[0];
    for (int j = 1; j < v.size(); j++) {
        if (secLargestElement < v[j] && v[j] < largestElement) {
            secLargestElement = v[j];
            break;
        }
    }
    return secLargestElement;
 }

 // check array sorted or not
 bool isSorted(vector<int>& arr) {
    if (arr.empty()) {
        return 0;
    }

    int i = 1;
    int n = arr.size();

    while (i < n) {
        if (arr[i] < arr[i-1]) {
            return false;
        }
        i++;
    }

    return true;
 }

 // remove duplicate from an sorted array
 // brute-force approach
 int removeDuplicates(vector<int>& arr) {
    set<int> st;
    for(int i = 0; i<arr.size(); i++) {
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto it : st) {
        arr[index] = it;
        index++;
    }
    return index;
 }

 // optimal approach - two pointer approach
 int remDuplicates(vector<int>& arr) {
    if (arr.empty()) {
        return -1;
    }
    int i = 0;
    for(int j = 1; j < arr.size(); j++) {
        if (arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
 }

int main() {
    vector<int> numbers;
    numbers.push_back(3);
    numbers.push_back(24);
    numbers.push_back(52);
    numbers.push_back(8);
    numbers.push_back(15);
    
   int scLarge = secLargest(numbers);
   cout << "secondLargest => " << scLarge ;
   cout << "largest element => " << largestElement(numbers) << endl;

    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {1,1,1,2,2,3,3,5,5};
    vector<int> arr3 = {1,1,2,2,2,3,3,3,3,4,4,4,5,5,5,6,6,6};
    if (isSorted(arr1)) {
        cout << "yes!";
    } else {
        cout << "No!";
    }

    cout << "unique elements > " << remDuplicates(arr3);
}
