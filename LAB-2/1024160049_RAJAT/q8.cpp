#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Size of Array. ";
    cin >> n;
    int arr[n];
    for (int i =0; i < n; i++) { 
    cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        bool Distinct = true;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                Distinct = false;
                break;
            }
        }
        if (Distinct==1) count++;
    }

    cout << "Number of distinct elements: " << count << endl;
    return 0;
}