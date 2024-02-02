#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

class A {
    int a;

   public:
    int getA() const { return a; }
    int setA(int a) { this->a = a; }
    A(int a) : a(a) {}

    bool operator==(const A &b) const { return a == b.a; }
};

bool compare {
    bool operator()(const A &a, const A &b) { return a == b; };
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<A> v(mynumbers, mynumbers + 7);
    vector<A>::iterator it;

    /* LINE I */
    while ((it = adjacent_find(it, v.end(), compare)) != v.end()) {
        cout << it - v.begin() << ", ";
        it++;  // LINE II
    }

    cout << endl;

    return 0;
}