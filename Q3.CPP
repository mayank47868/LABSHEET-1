#include <iostream>
using namespace std;

int main() {
    int Arr[] = {1, 2, 3, 4, 5};
    int n = 5;

    cout << "Reverse = ";

    for (int i = n - 1; i >= 0; i--) {
        cout << Arr[i] << " ";
    }

    return 0;
}