#include <algorithm>
#include <functional>
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
        return start++ % 7;  //
    }
};

int main() {
    vector<int> v1(4);

    generate(v1.rbegin(), v1.rend(), Sequence(10));  // LINE I
    random_shuffle(v1.begin(), v1.begin());          // LINE II
    for_each(v1.begin(), v1.end(), Out<int>(cout));

    return 0;
}