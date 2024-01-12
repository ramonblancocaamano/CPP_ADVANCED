#include <functional>
#include <iostream>
#include <list>

using namespace std;

template <typename T>
ostream &print(T const &start, T const &end) {
    for (T i = start; i != end; ++i) {
        cout << *i << " ";
    }
    return cout;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    list<int> l1(tab, tab + 10);

    list<int>::const_iterator it = l1.begin() + 3;  // LINE I
    l1.erase(it, advance(it, 1));                   // LINE II
    print(l1.begin(), l1.end());
    l1.clear();
    cout << l1.size() << endl;
    return 0;
}