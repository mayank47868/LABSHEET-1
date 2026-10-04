#include <iostream>
using namespace std;

int main() {
    int Arr[] = {1, 4, 3, 4, 5, 1};
    int n = 6;
    cout << "Duplicate elements = ";
    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;

        for (int k = 0; k < i; k++) {
            if (Arr[i] == Arr[k]) {
                alreadyPrinted = true;
                break;
            }
        }
        if (alreadyPrinted)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (Arr[i] == Arr[j]) {
                cout << Arr[i] << " ";
                break;
            }
        }
    }
    return 0;
}