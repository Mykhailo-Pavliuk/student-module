#include <iostream>
using namespace std;

class Para {
private:
    int first;
    int second;

public:
    Para() {
        first = 1;
        second = 1;
    }

    Para(int f, int s) {
        if (f > 0)
            first = f;
        else
            first = 1;

        if (s > 0)
            second = s;
        else
            second = 1;
    }

    void init(int f, int s) {
        if (f > 0)
            first = f;
        else
            first = 1;

        if (s > 0)
            second = s;
        else
            second = 1;
    }

    void read() {
        int f, s;
        cout << "Enter chiselnuk: ";
        cin >> f;
        cout << "Enter znamennuk: ";
        cin >> s;
        init(f, s);
    }

    void display() {
        cout << "Drib: " << first << "/" << second << endl;
    }

    int part() {
        return first / second;
    }
};

int main() {
    Para p1;
    p1.read();
    p1.display();
    cout << "Cila chastuna droby: " << p1.part() << endl;

    return 0;
}