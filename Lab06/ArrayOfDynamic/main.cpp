#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter " << n << " Elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nArray elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    delete[] arr;
    return 0;
}
