#include <iostream>
#include <algorithm> // For sorting

using namespace std;

int main() {
    int array[] = {10, 49, 2, 1, 5, 23};
    int n = sizeof(array) / sizeof(array[0]);
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < n; i = i + 2) {
        if (i < n - 1) {
            temp = array[i];
            array[i] = array[i + 1];
            array[i + 1] = temp;
        }
    }

    cout << "Array in Waveform Pattern: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}