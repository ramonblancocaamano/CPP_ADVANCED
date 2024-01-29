#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class A {
    int a;

   public:
    A(int a) : a(a) {}

    int getA() const { return a; }
    int setA(int a) { this->a = a; }

    bool operator==(const A &b) const {
        return (this->a != b.a);  // LINE I
    }
};

struct doubler {
    void operator()(A &a) {
        a.setA(a.getA() * 2);  // LINE II
    }
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<A> d(mynumbers, mynumbers + 7);

    for_each(v1.begin(), v1.end(), doubler());

    vector<A>::iterator it = find(v1.begin(), v1.end(), A(7));

    cout << it->getA() << endl;  // LINE III

    return 0;
}