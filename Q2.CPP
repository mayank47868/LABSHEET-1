#include <iostream>
using namespace std;

int main() {
    int A[] = {1, 2, 3, 4, 5};
    int B[] = {2, 4, 6, 8, 10, 12, 14};

    int n1 = 5, n2 = 7;
    int n = (n1 > n2) ? n1 : n2;

    int Sum[7];

    for (int i = 0; i < n; i++) {
        Sum[i] = 0;

        if (i < n1)
            Sum[i] += A[i];

        if (i < n2)
            Sum[i] += B[i];
    }

    cout << "Sum = ";

    for (int i = 0; i < n; i++)
        cout << Sum[i] << " ";

    return 0;
}