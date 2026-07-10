#include <iostream>
using namespace std;

int main() {

    int arr[5];

    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
        if(arr[i] < 0)
            arr[i] = 0;
    }

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}
