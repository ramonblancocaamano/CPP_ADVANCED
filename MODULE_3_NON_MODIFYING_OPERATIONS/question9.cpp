#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

struct Pair {
    bool operator()(int a) {
        return (a % 2) != 0;  // LINE I
    };
};

int main() {
    int count;
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2};

    set<int> s(mynumbers, mynumbers + 12);

    count = count_if(s.begin(), s.end(), Pair());  // LINE II
    cout << count << endl;

    return 0;
}