#include <iostream>
using namespace std;

int main() {
    int arr[8]={1,4,7,9,13,16,19,21};
    int n=8;
    int left=0;
    int right=n-1;
    int target;
    cout << "Enter the number to search: " ;
    cin >> target;
    int mid;
    while(left<=right) {
        mid=left+(right-left)/2;
        if(arr[mid]<target) {
            left=mid+1;
        }else if(arr[mid]>target) {
            right=mid-1;
        }else if(arr[mid]==target) {
            cout << "Target found at " << mid << " Position";
            return 0; 
        }    
    }
    cout << "Target not found" << endl;
}