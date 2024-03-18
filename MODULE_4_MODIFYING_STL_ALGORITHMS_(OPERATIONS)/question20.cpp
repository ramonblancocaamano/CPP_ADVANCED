#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void print(int v) {
    cout << v << ", ";  //
}

struct Sequence {
    int start;

    Sequence(int start) : start(start) {}
    int operator()() {
        return start++;  //
    }
};

bool predicate(int v) {
    return v % 2 == 0;  //
}

int main() {
    vector<int> v1(7);

    generate_n(v1.begin(), 7, Sequence(1));
    replace_if(v1.begin(), v1.end(), predicate);  // LINE II
    for_each(v1.begin(), v1.end(), print);

    return 0;
}