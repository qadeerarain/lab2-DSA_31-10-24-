#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, index, newValue;

    cout << "Enter index to update: ";
    cin >> index;
    if (index >= 0 && index < n) {
        cout << "Enter new value: ";
        cin >> newValue;
        arr[index] = newValue;
        cout << "Updated array: ";
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    } else {
        cout << "Index out of bounds!" << endl;
    }
    return 0;
}
