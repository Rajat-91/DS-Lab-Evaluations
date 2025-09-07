#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int val;
    cout << "Symmetric Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                val = i*(i+1)/2 + j;
            } else {
                val = j*(j+1)/2 + i;
            }
            cout << arr[val] << " ";
        }
        cout << endl;
    }

    return 0;
}