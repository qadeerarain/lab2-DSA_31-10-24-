#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deleting from top: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
