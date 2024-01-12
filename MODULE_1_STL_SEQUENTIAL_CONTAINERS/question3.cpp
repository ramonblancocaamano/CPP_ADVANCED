#include <deque>
#include <iostream>

using namespace std;

template <typename T>
ostream &print(T const &start, T const &end) {
    for (; start != end; ++start) {
        cout << *start << " ";
    }
    return cout;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    deque<int> d1(tab, tab + 10);
    deque<int> d2;
    deque<int>::iterator it;

    for (it = d1.begin(); it != d1.end(); ++it) {
        d2.push_back(d1[d1.end() - it - 1]);  // LINE I
    }

    print(d2.rbegin(), d2.rend()) << endl;  // LINE II

    return 0;
}