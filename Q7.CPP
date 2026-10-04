#include <iostream>
using namespace std;

int main() {
    int Arr1[] = {11, 1, 13, 21, 3, 7};
    int Arr2[] = {11, 3, 7, 1};
    int n1 = 6, n2 = 4;
    bool subset = true;
    for (int i = 0; i < n2; i++) {
        bool found = false;

        for (int j = 0; j < n1; j++) {
            if (Arr2[i] == Arr1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            subset = false;
            break;
        }
    }
    if (subset)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}