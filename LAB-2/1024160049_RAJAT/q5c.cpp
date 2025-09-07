#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[] = {1,3,5,8,4,6,2,12,9,11};

    cout << "Lower Triangular Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << arr[i*(i+1)/2 + j] << " ";
            else cout << 0 << " ";
        }
        cout << endl;
    }

    return 0;
}