#include <bits/stdc++.h>
using namespace std;

int OK = 0, B[25], n;

void in() {
    int t = 0;
    for (int i = 1; i <= n; i++) 
        t = t + B[i];

    if (t % 2 == 0) {
        for (int i = 1; i <= n; i++) 
            cout << B[i] << " ";
        cout << endl;
    }
}

void sinh() {
    int i = n;
    while (B[i] == 1) {
        B[i] = 0;
        i--;
    }
    if (i == 0) 
        OK = 1;
    else 
        B[i] = 1;
}

int main() {
    cin >> n;
    while (!OK) {
        in();
        sinh();
    }
    return 0;
}
