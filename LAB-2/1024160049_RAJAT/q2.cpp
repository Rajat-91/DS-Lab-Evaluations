#include <iostream>
using namespace std;

int main() {
    int arr[7]={64,34,25,12,22,11,90};
    int n=7;
    bool swapped;
    for(int i=0;i<n-1;i++) {
        swapped=false;
        for(int j=0;j<n-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                swapped=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==false) {
            cout << "already sorted " << endl;
            break;
        }
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}