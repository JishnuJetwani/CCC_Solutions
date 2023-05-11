#include <iostream>
#include <vector>
using namespace std;
using str = string;
int main() {
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    str inp;
    cin >> inp;
    int N = inp.length();
    for (int i = 0; i < N; ++i) {
        if (inp[i] == 'H') {
            a = a + c;
            c = a - c;
            a = a - c;

            b = b + d;
            d = b - d;
            b = b - d;
        }
        if (inp[i] == 'V') {
            a = a + b;
            b = a - b;
            a = a - b;

            c = c + d;
            d = c - d;
            c = c - d;
        }
    }
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    return 0;
}