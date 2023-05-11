#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> all(N);
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        all[i] = num;
    }
    sort(all.begin(), all.end());
    //We now have a vector with all the values sorted into the correct order, we need to break this up int
    //o two vectors. One containing the first half + 1 and the second containing the rest
    int firstHalf;
    if (N % 2 == 0) {
        firstHalf = N / 2;
    }else {
        firstHalf = N/ 2;
        firstHalf += 1;
    }
    vector<int> firHalf(firstHalf);
    for (int i = 0; i < firstHalf; ++i) {
        firHalf[i] = all[i];
    }
    //We now have a vector of the first half values, we must now sort it greatest to least
    sort(firHalf.begin(), firHalf.end(), greater<int>());
    // we are done with the firHalf vector. Put that aside for now

    //

    //Now we will make a vector to store the rest of the numbers. The length of this array will be
    int secondHalf = N - firstHalf;
    vector<int> secHalf(secondHalf);
    //our for loop now must iterate through the greatest of the all vector
    //therefore, we must sort the all vector greatest to least
    sort(all.begin(), all.end(), greater<int>());
    for (int i = 0; i < secondHalf; ++i) {
        secHalf[i] = all[i];
    }
    //we now have a vector of the other values sorted greatest to least
    //we must sort it least to greatest
    sort(secHalf.begin(), secHalf.end());
    if (N % 2 == 0) {
        for (int i = 0; i < firstHalf; i++) {
            if (i != firstHalf) {
                cout << firHalf[i] << " " << secHalf[i] << " ";
            }else{
                cout << firHalf[i] << " " << secHalf[i] << endl;
            }
        }
    }else{
        for (int i = 0; i < (firstHalf - 1); ++i) {
            cout << firHalf[i] << " " << secHalf[i] << " ";
        }
        cout << firHalf.back() << endl;
        
    }
    return 0;

}