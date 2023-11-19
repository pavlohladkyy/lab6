#include <iostream>
#include<Windows.h>
using namespace std;

template <typename T, size_t Size>
T binarySearch(const T(&array)[Size], const T& target) {
    int left = 0;
    int right = Size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) {
            return mid;
        }
        else if (array[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    int sortedArray[] = { 1, 3, 5, 7, 9, 11,13,15,17,19,21,23,25,27,28 };
    int targetElement;
    cout << "введіть елемент який хочете знайти:";
    cin >> targetElement;

    int result = binarySearch<int>(sortedArray, targetElement);

    if (result != -1) {
        cout << "Елемент " << targetElement << " знайдено за індексом:" << result + 1 << endl;
    }
    else {
        cout << "Елемент " << targetElement << " не знайдено у масиві" << endl;
    }

    return 0;
}
