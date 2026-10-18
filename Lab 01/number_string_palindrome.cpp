#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int choice;

    cout << "1. Number Palindrome" << endl;
    cout << "2. String Palindrome" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int n, r, sum = 0, temp;

            cout << "Enter the number: ";
            cin >> n;

            temp = n;

            while (n > 0) {
                r = n % 10;
                sum = (sum * 10) + r;
                n = n / 10;
            }

            if (temp == sum)
                cout << "Number is palindrome";
            else
                cout << "Number is not palindrome";

            break;
        }

        case 2: {
            char str[20];
            int i, length, flag = 0;

            cout << "Enter a string: ";
            cin >> str;

            length = strlen(str);

            for (i = 0; i < length / 2; i++) {
                if (str[i] != str[length - i - 1]) {
                    flag = 1;
                    break;
                }
            }

            if (flag == 0)
                cout << str << " is a palindrome";
            else
                cout << str << " is not a palindrome";

            break;
        }

        default:
            cout << "Invalid choice";
    }

    return 0;
}
