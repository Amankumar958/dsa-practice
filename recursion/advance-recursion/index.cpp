#include <iostream>
#include <utility> 
#include <string>

using namespace std;
// recursion multiple calls 


// fabannacci numbers
int f(int n) {
    if (n <= 1) return n;
    int last = f(n-1);
    int secLast = f(n-2);
    return last + secLast;
}

int main() {
    cout << f(6);
}