#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> t1(N);
    vector<int> t2(N);
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        t1[i] = num;
    }
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        t2[i] = num;
    }
    //as t1 increments, t2 should increment at the same pace
    int maxDay, t1Sum, t2Sum;
    maxDay = t1Sum = t2Sum = 0;
    for (int i = 0; i < N; ++i){
        t1Sum += t1[i];
        t2Sum += t2[i];
        if (t1Sum == t2Sum) {
            maxDay = i + 1;
        }
    }
    cout << maxDay << endl;
    return 0;
	
}