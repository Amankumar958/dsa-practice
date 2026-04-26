#include <iostream>
using namespace std;

void pattern1(int n) {
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;

        if (i > n)
            stars = 2 * n - i;

        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int isEven(int n) {
    if (n & 1) {  // bitwise operator
        return 0;
    }
    return 1;
}


void pattern2(int n){
    int k = 1;
    for (int i = 1; i<=n; i++) {
        k = isEven(i) ? 0 : 1;
        for (int j = 1; j<=i; j++) {
            cout << k;
            k = 1 - k;
        }
        cout << endl;
    }
}

void pattern3(int n) {
    for (int i = 1; i <=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout << j;
        }

        for (int k = 1; k<=2*n-2*i; k++) {
            cout << " ";
        }

        for (int l = i; l>=1; l--) {
            cout << l;
        }
        cout << endl;
    }
}

void pattern5(int n) {
    int num = 1;
    for (int i = 1; i<=n; i++) {
        for (int j = 1; j<=i; j++) {
            cout << num;
            num++;
        }
        cout << endl;
    }
}
 
int main() {
    int n = 5;
    pattern5(n);
}