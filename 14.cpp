#include <iostream>
using namespace std;


template <typename T>
int count(T arr[], int size, int left, int right) {
    if (left == right) {
        return 0;
    }
    else if (left > right) {
        swap(left, right);
    }

    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > arr[left] && arr[i] < arr[right]) {
            count++;
        }
    }

    return count;
}

int main() {
    const int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};
    float arr2[n] = {1.0, 2.0 , 3.0, 4.0, 5.0};
    string arr3[n] = {"a", "b", "c", "d", "e"};

    int k1 = 0;
    int k2 = 3;
 
    int result = count(arr, n, k1, k2);
    int result2 = count(arr2, n, k1, k2);
    int result3 = count(arr3, n, k1, k2);



    cout <<"Count of elements in array of integers in range("<<k1<<", "<<k2<<"): " << result << endl;
    cout << "Count of elements in array of floats in range("<<k1<<", "<<k2<<"): "<< result2 << endl;
    cout << "Count of elements in array of strings in range("<<k1<<", "<<k2<<"): "<< result3 << endl;

    delete[] arr;
    delete[] arr2;
    delete[] arr3;

    return 0;
}