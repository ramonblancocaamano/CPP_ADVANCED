#include <iostream>
#include <map>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 5};

    string words[] = {"three", "nine", "zero", "two",
                      "one",   "four", "five", "fiveandhalf"};
    multimap<int, string> m;

    for (int i = 0; i < 8; i++) {
        m.insert(pair<int, string>(mynumbers[i], words[i]));
    }

    if (m.count(5) == 1) {
        m.erase(2);
    }

    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++) {
        cout << i->first << ", ";
    }

    return 0;
}