#include <deque>
#include <iostream>

using namespace std;

template <typename T>
ostream &print(T const &start, T const &end) {
    for (T i = start; i != end; ++i) {
        cout << *i << " ";
    }
    return cout;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d1(tab, tab + 10);

    deque<int>::const_iterator it = d1.begin() + 3;
    d1.erase(it, it + 1);
    print(d1.begin(), d1.end());
    d1.clear();
    cout << d1.size() << endl;
    return 0;
}