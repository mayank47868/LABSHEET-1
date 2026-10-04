#include <iostream>
using namespace std;

int main() {
    int Arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int SumEven = 0, SumOdd = 0;

    for (int i = 0; i < n; i++) {
        if (Arr[i] % 2 == 0)
            SumEven += Arr[i];
        else
            SumOdd += Arr[i];
    }

    cout << "SumEven = " << SumEven << endl;
    cout << "SumOdd = " << SumOdd << endl;

    return 0;
}