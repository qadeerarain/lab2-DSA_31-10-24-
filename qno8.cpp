#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, option, value, index;

    cout << "Enter 1 to search by index, 2 to search by value: ";
    cin >> option;

    if (option == 1) {
        cout << "Enter index: ";
        cin >> index;
        if (index >= 0 && index < n)
            cout << "Element at index " << index << " is: " << arr[index] << endl;
        else
            cout << "Index out of bounds!" << endl;
    } else if (option == 2) {
        cout << "Enter value: ";
        cin >> value;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (arr[i] == value) {
                cout << "Value found at index " << i << endl;
                found = true;
                break;
            }
        }
        if (!found)
            cout << "Value not found!" << endl;
    }
    return 0;
}
