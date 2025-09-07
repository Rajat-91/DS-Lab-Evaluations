#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;
    ch = ch + ('a' - 'A');
    
    cout << "Lowercase character: " << ch << endl;
}