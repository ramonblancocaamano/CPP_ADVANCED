#include <list>
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
    list<int> l1(tab, tab + 10);
    list<int> l2;
    list<int>::iterator it;

    for (it = l1.begin(); it != l1.end(); ++it) {
        l2.push_back(l1[l1.end() - it - 1]);  // LINE I
    }

    print(l2.rbegin(), l2.rend()) << endl;  // LINE II

    return 0;
}