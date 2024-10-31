#include <iostream>
using namespace std;

int main() {
    int arr[7] = {10, 20, 30, 40, 50};
    int n = 5, newItem = 25, loc = 2;

    for (int i = n; i > loc; i--) {
        arr[i] = arr[i - 1];
    }
    arr[loc] = newItem;
    n++;

    cout << "Array after inserting at location " << loc << ": ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
