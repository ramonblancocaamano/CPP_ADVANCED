#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class A {
    int a;

    int getA() const { return a; }
    int setA(int a) { this->a = a; }

   public:
    A(int a) : a(a) {}

    bool operator==(A &b) { return a == b.a; }
};

struct Comparer {
    bool operator()(const A &a, const A &b) {
        return a.getA() == b.getA();  // LINE I
    };
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<A> v(mynumbers, mynumbers + 7);
    vector<A>::iterator it;

    A m1[] = {A(2), A(3), A(4)}

    it = find_end(v.begin(), v.end(), m1, m1 + 3, Comparer());  // LINE II

    cout << "Found at position: " << it + v.begin() << endl;  // LINE III

    return 0;
}