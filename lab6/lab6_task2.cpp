#include <iostream>
#include <cmath>

template <typename T>
class ExpArray {
public:
    ExpArray(T* array, size_t size) : array_(array), size_(size) {}

    void Convert() {
        for (size_t i = 0; i < size_; i++) {
            array_[i] = Exp(array_[i]);
        }
    }

    void Print() {
        for (size_t i = 0; i < size_; i++) {
            std::cout << array_[i] << std::endl;
        }
    }

private:
    T* array_;
    size_t size_;

    T Exp(T value) {
        return std::exp(value);
    }
};

int main() {
    int intArray[] = { 1, 2, 3, 4, 5 };
    float floatArray[] = { 1.0f, 2.0f, 3.0f, 4.0f, 5.0f };
    long longArray[] = { 1L, 2L, 3L, 4L, 5L };

    size_t size = sizeof(intArray) / sizeof(intArray[0]);

    ExpArray<int> intExpArray(intArray, size);
    intExpArray.Convert();
    intExpArray.Print();

    ExpArray<float> floatExpArray(floatArray, size);
    floatExpArray.Convert();
    floatExpArray.Print();

    ExpArray<long> longExpArray(longArray, size);
    longExpArray.Convert();
    longExpArray.Print();

    return 0;
}
