#include <iostream>
#include <map>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    string words[] = {"three", "nine", "zero", "two", "one", "four", "five"};

    map<int, string> m;

    for (int i = 0; i < 3; i++) {
        m.push_back(pair<int, string>(mynumbers[i], words[i]));  // LINE I
    }

    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++) {
        cout << i->first << ", ";  // LINE II
    }

    return 0;
}