#include <iostream>
#include <cmath>
using namespace std;

class Konus {
private:
    double height;
    double radius;

public:
    Konus() {
        height = 1;
        radius = 1;
    }

    Konus(double h, double r) {
        height = h;
        radius = r;
    }

    friend double volume(const Konus& n);
    friend double area(const Konus& n);
    friend double areaN(Konus arr[], int n);
};

double volume(const Konus& n) {
    return 1.0 / 3 * 3.14 * pow(n.radius, 2) * n.height;
}

double area(const Konus& n) {
    double l = sqrt(pow(n.radius, 2) + pow(n.height, 2));
    return 3.14 * n.radius * (n.radius + l);
}

double areaN(Konus arr[], int n) {
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + area(arr[i]);
    }

    return sum;
}

int main() {

    Konus konus1(3, 2);
    Konus konus2(4, 3);

    cout << "Volume: " << volume(konus1) << endl;
    cout << "Area: " << area(konus1) << endl;

    Konus arr[2] = { konus1, konus2 };

    cout << "Area of cones: " << areaN(arr, 2) << endl;

    return 0;
}