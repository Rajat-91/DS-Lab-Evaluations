#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the Number of number u want to enter: " ;
    cin >> n;
    cout << "Enter " << n << " Number : " ;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i] ;
    }
    int left=0,right=n-1;
    int mid;
    while(left<right) {
        mid=left+(right-left)/2;
        if(arr[mid]==mid+1) {
            left=mid+1;
        }else  {
            right=mid-1;;
        }
    }
    cout << "Missing number: " << left+1;
 }