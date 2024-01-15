#include <iostream>
#include <list>

using namespace std;

template <typename T>
ostream &print(T const &start, T const &end) {
    T temp = start;
    for (; tmp != end; ++tmp) {
        cout << *tmp << " ";
    }
    return cout;
}

class A {
public:
    int a;

public:
    A(int a) : a(a) {
    }
};

ostream &operator<<(ostream &c, const A &o) {
    c << o.a;
    return c;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    list<int> l1(tab, tab + 10);
    list<int> l2;
    list<int>::iterator it;

    for (it = l1.begin(); it != l1.end(); ++it) {
        l2.push_front(it);
    }

    print(l2.begin(), l2.end()) << endl;

    return 0;
}