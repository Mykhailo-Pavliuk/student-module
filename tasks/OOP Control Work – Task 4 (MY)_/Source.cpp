#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minutes;
    int seconds;

public:
    void readTime() {
        cout << "Enter hours, minutes, seconds: ";
        cin >> hour >> minutes >> seconds;
    }

    void displayTime() {
        int totalSeconds = hour * 3600 + minutes * 60 + seconds;

        int h = (totalSeconds / 3600) % 24;
        int m = (totalSeconds % 3600) / 60;
        int s = totalSeconds % 60;

        cout << "Time: "
            << h << ":"
            << m << ":"
            << s << endl;
    }
};

int main() {
    Time t;
    t.readTime();
    t.displayTime();

    return 0;
}