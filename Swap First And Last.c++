#include <iostream>
using namespace std;

int main() {

    int arr[5];

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    swap(arr[0], arr[4]);

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
