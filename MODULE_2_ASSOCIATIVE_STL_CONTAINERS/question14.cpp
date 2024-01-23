#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 8};

    vector<int> v(mynumbers, mynumbers + 7);
    map<int, string> m;

    for (map<int, string>::iterator i = m.begin(); i != m.end(); i++) {
        cout << *i << ", ";  // LINE I
    }

    return 0;
}
