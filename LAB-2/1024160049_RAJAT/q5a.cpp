#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int arr[4]={5,8,3,6};
    
    cout << "Diagonal Matrix:\n";
    for (int i = 0;i < n; i++) {
        for (int j =0;j< n; j++) {
            if (i == j)
                cout << arr[i] << " ";
            else
                cout << 0 << " ";
        }
        cout << endl;
    }
    return 0;
}