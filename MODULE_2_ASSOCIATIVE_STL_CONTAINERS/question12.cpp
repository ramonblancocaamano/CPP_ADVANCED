#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};

    string words[] = {"three", "nine", "zero", "two", "one", "four", "five"};
    multimap<int, string> m;

    for (int i = 0; i < 7; i++) {
        m.insert(pair<int, string>(mynumbers[i], words[i]));
    }

    /* LINE I*/
    if (m.find(0)->second == "zero") {
        cout << "found expected";
    }

    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++) {
        cout << i->second << ", ";
    }

    cout << m.size();

    return 0;
}