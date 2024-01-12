#include <deque>
#include <iostream>

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
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    deque<int> d1(tab, tab + 10);
    deque<int> d2;

    while (!d1.empty()) {
        d2.push_front(d1.back());  // LINE I
        d1.pop_front();            // LINE II
    }
    print(d2.begin(), d2.end()) << ": " << d2.size() << endl;
    return 0;
}