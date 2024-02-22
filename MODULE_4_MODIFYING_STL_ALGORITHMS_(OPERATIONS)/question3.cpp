#include <algorithm>
#include <iostream>
#include <set>
#include <vector>

using namespace std;

void printer(int i) {
    cout << i << ", ";  //
}

int multiply(int a) {
    return a * 2;  // LINE I
}

struct Odd {
    bool operator()(int v) { return v % 2 == 0; }
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    vector<int> v1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);
    transform(s1.begin(), s1.end(), v1.begin(), multiply);  // LINE II
    for_each(s1.begin(), s1.end(), printer);
    return 0;
}