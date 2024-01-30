#include <algorithm>
#include <iostream>
#include <map>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    map<int, int> m;
    for (int i = 0; i < 7; i++) {
        m[i] = mynumbers[i];
    }

    pair<const int, int> p(4, 1);

    map<int, int>::iterator it = find(m.begin(), m.end(), p);  // LINE I

    if (it != m.end()) {
        cout << it->first << endl;
    } else {
        cout << "Not found!n";
    }

    return 0;
}