#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {1,5,6,2,8,4,3,11,9,0};

    cout << "Upper Triangular Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                int val = (n*i - (i*(i-1))/2) + (j - i);
                cout << arr[val] << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}