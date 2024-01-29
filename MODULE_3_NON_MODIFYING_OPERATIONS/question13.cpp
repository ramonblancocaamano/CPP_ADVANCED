#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

void myprint(pair<int, int> i) { cout << i.first << ", "; }

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    map<int, int> m;

    for (int i = 0; i < 7; i++) {
        m[i] = mynumbers[i];  // LINE I
    }

    for_each(m.begin(), m.end(), myprint);  // LINE I

    return 0;
}