#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 30, 40, 50};
    int n = 5, newItem = 60;

    arr[n] = newItem;
    n++;

    cout << "Array after inserting at bottom: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
