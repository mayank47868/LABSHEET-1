#include <iostream>
using namespace std;

int main() {
    int Arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 2;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (Arr[i] > Arr[j]) {
                int temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }

    cout << k << "nd Smallest = " << Arr[k - 1] << endl;
    cout << k << "nd Largest = " << Arr[n - k] << endl;

    return 0;
}