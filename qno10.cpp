#include <iostream>
using namespace std;

int main() {
    int arr1[] = {10, 20, 30};
    int arr2[] = {1, 2, 3};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int result[n];

    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] + arr2[i];
    }

    cout << "Resultant array after addition: ";
    for (int i = 0; i < n; i++)
        cout << result[i] << " ";
    cout << endl;
    return 0;
}
