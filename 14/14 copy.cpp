#include <iostream>
#include <cmath>
using namespace std;
\
template <typename T>
class Point {
public:
    T x, y;

    Point(T xVal = 0, T yVal = 0) {
        x = xVal;
        y = yVal;
    }
};

template <typename T>
double Distance(T x, T y, T u, T v) {
    return sqrt((x - u) * (x - u) + (y - v) * (y - v));
}

template <typename T>
double Distance(Point<T> a, Point<T> b) {
    return sqrt((a.x - b.x) * (a.x - b.x) +
                (a.y - b.y) * (a.y - b.y));
}

int main() {

    cout << "Int: ";
    cout << Distance(1, 2, 4, 6) << endl;

    cout << "Double: ";
    cout << Distance(1.5, 2.3, 4.1, 6.7) << endl;

    Point<int> A(1, 2);
    Point<int> B(4, 6);

    cout << "Point<int>: ";
    cout << Distance(A, B) << endl;

    Point<double> C(1.5, 2.3);
    Point<double> D(4.1, 6.7);

    cout << "Point<double>: ";
    cout << Distance(C, D) << endl;

    return 0;
}