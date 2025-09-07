#include <iostream>
using namespace std;

int main() {
    int n = 4;
    int size=3*n-2;
    int arr[size] = {4,5,6,7,8,9,1,2,3,4};
    int k=0;
    cout << "Tri-Diagonal Matrix:\n";
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < n; j++) {
           if(i==j || i-j==1 || i-j==-1) {
               cout << arr[k] <<" ";
               k++;
           }else {
               cout << 0 << " ";
           }
        }
        cout << endl;
    }
    return 0;
}