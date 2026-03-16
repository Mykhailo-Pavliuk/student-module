#include <iostream>
using namespace std;

class IntArray {
private:
    int n;
    int* arr;
public:
    IntArray(int size) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;  
    }

    friend void checkSquares(IntArray& a);  
};

void checkSquares(IntArray& a) {
    for (int i = 0; i < a.n; i++) {
        if (a.arr[i] == i * i) {
            cout << "arr[" << i << "] = " << a.arr[i] << " is square of index " << i << endl;
        }
    }
}

int main() {
    int size;
    cout << "Enter size of array (>=3) : ";
    cin >> size;

    IntArray myArray(size);
    myArray.display();
    checkSquares(myArray);

    return 0;
}