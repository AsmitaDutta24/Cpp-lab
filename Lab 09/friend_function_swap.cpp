
#include <iostream>
using namespace std;

class Second;

class First {
    int a;

public:
    First(int x) {
        a = x;
    }

    void display() {
        cout << a;
    }

    friend void swapNumbers(First &, Second &);
};

class Second {
    int b;

public:
    Second(int y) {
        b = y;
    }

    void display() {
        cout << b;
    }

    friend void swapNumbers(First &, Second &);
};

void swapNumbers(First &obj1, Second &obj2) {
    int temp = obj1.a;
    obj1.a = obj2.b;
    obj2.b = temp;
}

int main() {
    First obj1(10);
    Second obj2(20);

    cout << "Before swapping:" << endl;
    cout << "First number: ";
    obj1.display();
    cout << endl;

    cout << "Second number: ";
    obj2.display();
    cout << endl;

    swapNumbers(obj1, obj2);

    cout << "\nAfter swapping:" << endl;
    cout << "First number: ";
    obj1.display();
    cout << endl;

    cout << "Second number: ";
    obj2.display();
    cout << endl;

    return 0;
}
