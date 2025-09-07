#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number of elements: " ;
    cin >> n ;
    cout << "Enter " << n << " elements" ;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i] ;
    }
    int sum = (n+1)*(n+2)/2;
    int arrsum=0;
    for(int i=0;i<n;i++) {
        arrsum+=arr[i];
    }
    int ans;
    ans=sum-arrsum;
    cout << "Missing Number is : " << ans ;
}