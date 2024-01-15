#include <iostream>
#include <vector>

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
    vector<int> v1(tab, tab + 10);
    vector<int> v2;

    v2.reserve(10);

    while (!v1.empty()) {
        v2.insert(v2.begin(), v1.pop_back());
    }

    print(v2.rbegin(), v2.rend()) << ": " << v2.size() << endl;
    return 0;
}