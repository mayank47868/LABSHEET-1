#include <iostream>
using namespace std;

int main() {
    int Arr[] = {10, 5, 3, 4, 3, 5, 6};
    int n = 7;

    for (int i = 0; i < n; i++) {
        bool repeating = false;

        for (int j = i + 1; j < n; j++) {
            if (Arr[i] == Arr[j]) {
                repeating = true;
                break;
            }
        }

        if (repeating) {
            cout << "First repeating element = " << Arr[i];
            break;
        }
    }

    return 0;
}