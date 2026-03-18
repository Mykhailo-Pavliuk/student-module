#include <iostream>
using namespace std;

//1.localInitializedArrayExample()
void localInitializedArrayExample() {
    int arr[5] = { 6,1,0,9,3 };

    cout << endl;
    for (int i = 0;i < 5;i++) {
        cout << i + 1 << ") ";
        cout << "Index " << i << " value = " << arr[i] << endl;
    }
}

//2.localUninitializedArrayExample()
void localUninitializedArrayExample() {
    const int n = 5;
    int arr[n];

    cout << endl;
    cout << "Enter 5 elements of arr: " << endl;

    for (int i = 0;i < n;i++) {
        cout << i + 1 << ") ";
        cin >> arr[i];
    }

    cout << endl;
    for (int i = 0;i < n;i++) {
        cout << i + 1 << ") ";
        cout << "Index " << i << " value = " << arr[i] << endl;
    }
}

//3.sumArrayExample()
void sumArrayExample() {
    const int n = 5;
    int arr[n];

    cout << endl;
    cout << "Enter 5 elements of arr: " << endl;

    for (int i = 0;i < n;i++) {
        cout << i + 1 << ") ";
        cin >> arr[i];
    }

    int sum = 0;

    cout << endl;

    for (int i = 0;i < n;i++) {
        cout << "Adding value:" << arr[i] << endl;
        sum = sum + arr[i];
        cout << "Current sum:" << sum << endl;
    }
}

//4.arrayAsFunctionArgumentExample()
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ") ";
        cout << "Index " << i << ": value = " << arr[i] << endl;
    }
}

void arrayAsFunctionArgumentExample() {
    const int n = 5;
    int arr[n];

    cout << "Enter 5 elements of arr: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ") ";
        cin >> arr[i];
    }

    cout << "  Printing array elements:" << endl;
    printArray(arr, n);
}

//5.searchInArrayExample()
void searchInArrayExample(int value) {
    int arr[5] = { 6,1,0,9,3 };
    int size = 5;

    for (int i = 0;i < size; i++) {
        cout << i + 1 << ") ";
        cout << "Checking index " << i << endl;

        if (arr[i] == value) {
            cout << "Found value at index " << i << "!" << endl;
        }
    }
}

//6.classFieldArrayExample()
class Array {
private:
    int fieldarr[5] = { 7,0,2,4,6 };
public:
    void printFieldArray() {
        cout << "Print field array: " << endl;

        for (int i = 0;i < 5;i++) {
            cout << i + 1 << ") ";
            cout << "Index " << i << " value = " << fieldarr[i] << endl;
        }
    }
};

void classFieldArrayExample() {
    int localarr[5] = { 1,3,5,2,10 };
    cout << "Print local array: " << endl;

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ") ";
        cout << "Index " << i << " value = " << localarr[i] << endl;
    }

    Array object;
    object.printFieldArray();
}

//7.dynamicSizeArrayExample()
void dynamicSizeArrayExample() {
    int size;
    cout << "Enter size of array: " << endl;
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements: " << endl;
    for (int i = 0;i < size;i++) {
        cout << i + 1 << ") ";
        cin >> arr[i];
    }

    cout << "Print dynamic array: " << endl;
    for (int i = 0;i < size;i++) {
        cout << i + 1 << ") ";
        cout << "Index " << i << " value = " << arr[i] << endl;
    }
}

//8.shiftArrayExample()
void shiftArrayExample() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int size = 5;

    cout << "Array before shift:" << endl;
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ") ";
        cout << "Index " << i << ": value = " << arr[i] << endl;
    }

    int removeIndex;
    cout << "Enter index to remove (0-4): ";
    cin >> removeIndex;

    if (removeIndex >= 0 && removeIndex < size) {

        for (int i = removeIndex; i < size - 1; i++) {
            cout << i + 1 << ") ";
            arr[i] = arr[i + 1];
        }

        size--;

        cout << "Array after shift:" << endl;
        for (int i = 0; i < size; i++) {
            cout << i + 1 << ") ";
            cout << "Index " << i << ": value = " << arr[i] << endl;
        }
    }
    else {
        cout << "Invalid index!" << endl;
    }
}

int main() {

    cout << "=== Local Initialized Array ===" << endl;
    localInitializedArrayExample();

    cout << "\n=== Local Uninitialized Array ===" << endl;
    localUninitializedArrayExample();

    cout << "\n=== Sum Array Example ===" << endl;
    sumArrayExample();

    cout << "\n=== Array As Function Argument ===" << endl;
    arrayAsFunctionArgumentExample();

    cout << "\n=== Search In Array (value = 5) ===" << endl;
    searchInArrayExample(5);

    cout << "\n=== Class Field Array Example ===" << endl;
    classFieldArrayExample();

    cout << "\n=== Dynamic Size Array Example ===" << endl;
    dynamicSizeArrayExample();

    cout << "\n=== Shift Array Example ===" << endl;
    shiftArrayExample();

    return 0;
}