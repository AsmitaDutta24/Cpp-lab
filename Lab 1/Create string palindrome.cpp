#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int num, original, reversed = 0;
    string str, revStr;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }

    if (original == reversed)
        cout << original << " is a palindrome number." << endl;
    else
        cout << original << " is not a palindrome number." << endl;

    cout << "Enter a string: ";
    cin >> str;

    revStr = str;
    reverse(revStr.begin(), revStr.end());

    if (str == revStr)
        cout << str << " is a palindrome string." << endl;
    else
        cout << str << " is not a palindrome string." << endl;

    return 0;
}
