#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

template <class T>
struct Out {
    ostream &out;

    Out(ostream &o) : out(o) {}

    void operator()(const T &val) {
        out << val << ", ";  //
    }
};

struct Sequence {
    int start;

    Sequence(int start) : start(start) {}
    int operator()() {
        return 3 * (start++ % 2);  //
    }
};

int main() {
    vector<int> v1(4);
    vector<int> v2(4);

    generate(v1.begin(), v1.end(), Sequence(10));  // LINE I
    sort(v1.rbegin(), v1.rend());
    unique_copy(v1.begin(), v1.begin(), v2.begin());  // LINE II
    for_each(v2.begin(), v2.end(), Out<int>(cout));
    for_each(v1.begin(), v1.end(), Out<int>(cout));

    return 0;
}