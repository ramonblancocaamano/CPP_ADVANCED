#include <iostream>
#include <list>

using namespace std;

template <typename T>
ostream &print(T const &start, T const &end) {
    T tmp = start;
    for (; tmp != end; ++tmp) {
        cout << *tmp << " ";
    }
    return cout;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    list<int> l1(tab, tab + 10);
    list<int> l2;

    while (!l1.empty()) {
        l2.insert(l2.end(), l1.front());
        l1.pop_front();
    }

    print(l2.begin(), l2.end()) << ":" << l2.size() << endl;

    return 0;
}