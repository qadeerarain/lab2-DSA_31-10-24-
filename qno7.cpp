#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, loc = 2;

    for (int i = loc; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    cout << "Array after deleting from location " << loc << ": ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
