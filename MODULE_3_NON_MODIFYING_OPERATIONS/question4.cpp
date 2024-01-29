#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <set>

using namespace std;

struct myprinter {
    bool operator()(int i) {
        cout << i << ", ";  
    }
};

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v1(mynumbers, mynumbers + 7);
    deque<int> d1(mynumbers, mynumbers + 7);
    set<int> s1(mynumbers, mynumbers + 7);

    v1.pop_back(5); // LINE I

    for_each(s1.begin(), s1.end(), myprint()); // LINE II
    for_each(d1.begin(), d1.end(), *(new myprint())); // LINE III
    for_each(v1.begin(), v1.end(), myprint()); // LINE IV

    return 0;
}