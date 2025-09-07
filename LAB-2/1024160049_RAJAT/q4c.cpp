#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, result="";
    cout << "Enter a string: ";
    cin >> s1;

    for(char c : s1) {
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
             c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            result = result + c;
        }
    }
    cout << "Without vowels: " << result << endl;
}