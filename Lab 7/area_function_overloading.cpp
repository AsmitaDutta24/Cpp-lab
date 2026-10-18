#include <iostream>
using namespace std;

class Area {
public:
    double AREA(double r) {
        return 3.14 * r * r;
    }

    double AREA(double l, double w) {
        return l * w;
    }

    double AREA(double b, double h, int) {
        return 0.5 * b * h;
    }
};

int main() {
    Area a;
    double r, l, w, b, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of circle: " << a.AREA(r) << endl;

    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;
    cout << "Area of rectangle: " << a.AREA(l, w) << endl;

    cout << "Enter base and height of triangle: ";
    cin >> b >> h;
    cout << "Area of triangle: " << a.AREA(b, h, 0) << endl;

    return 0;
}
