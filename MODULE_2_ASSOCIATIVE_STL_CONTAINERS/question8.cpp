#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    vector<int> v(mynumbers, mynumbers + 7);
    multimap<int, string> m;

    for (vector<int>::iterator i = v.begin(); i < v.end(); i++) {
        stringstream s;
        s << *i << *i;
        m.insert(pair<int, string>(*i, s.str()));  // LINE I
    }

    pair<multimap<int, string>::iterator, multimap<int, string>::iterator>
        range;  // LINE II

    range = m.equal_range(4);

    for (multimap<int, string>::iterator i = range.first; i != range.second;
         i++) {
        cout << i->first << ", ";
    }

    return 0;
}