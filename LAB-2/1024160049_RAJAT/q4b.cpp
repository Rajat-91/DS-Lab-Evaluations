#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s1;
    cout << "Enter a string: ";
    cin >> s1;

    reverse(s1.begin(), s1.end());
    cout << "Reversed String: " << s1 << endl;
}