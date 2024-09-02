\\BINARY SEARCH

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements needed: ";
    cin >> n;

    int a[n];
    cout << "Enter the ordered elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int beg = 0, end = n - 1;  // Set end to n-1 since array index starts at 0
    bool found = false;

    while (beg <= end) {
        int mid = beg + (end - beg) / 2;  // Calculate the middle index

        if (a[mid] == key) {  // Check if the key is at the middle index
            cout << "Element found at index " << mid << endl;
            found = true;
            break;
        } else if (a[mid] > key) {  // If key is smaller, ignore right half
            end = mid - 1;
        } else {  // If key is larger, ignore left half
            beg = mid + 1;
        }
    }

    if (!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
