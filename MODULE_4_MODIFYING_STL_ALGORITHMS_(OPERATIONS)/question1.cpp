#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void print(int v) {
    cout << v << ", ";  //
}

struct Sequence {
    int start;

    Sequence(int start) : start(start) {}
    int operator()() {
        return start++;  // LINE I
    }
};

int main() {
    vector<int> v1(7);

    generate_n(v1.begin(), 7, Sequence());  // LINE II
    for_each(v1.begin(), v1.end(), print);

    return 0;
}