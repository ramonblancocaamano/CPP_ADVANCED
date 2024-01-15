#include <list>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

template <typename T>
ostream &print(T const &start, T const &end) {
    T tmp = start;
    for (; tmp != end; ++tmp) {
        cout << *tmp << " ";
    }
    return cout;
}

class A {
   public:
    int a;

   public:
    A(int a) : a(a) {}
    A(const A &a) {}
};

ostream &operator<<(ostream &c, const A &o) {
    c << o.a;
    return c;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    list<A> l1(tab, tab + 10);
    deque<A> d1;
    list<A>::iterator it;

    for (it = l1.begin(); it != l1.end(); ++it) {
        d1.insert(d1.begin(), it[0]);
    }

    print(d1.begin(), d1.end()) << endl;

    return 0;
}

