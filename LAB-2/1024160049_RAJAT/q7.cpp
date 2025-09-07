#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int A[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) cin >> A[i];
    int inversions = 0;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (A[i] > A[j]) inversions++;
        }
    }
    cout << "Number of inversions: " << inversions << endl;
    return 0;
}