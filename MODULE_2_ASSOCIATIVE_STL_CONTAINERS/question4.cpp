#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1};
    string words[] = {"three", "nine", "zero", "two", "one"};
    multimap<int, string> m;

    for (int i = 0; i < 4; i++) {
        m.insert(pair<int, string>(mynumbers[i], words[i]));
        m.insert(pair<int, string>(mynumbers[i], words[i]));
    }

    m[0] = "ten";  // LINE I

    for (multimap<int, string>::iterator i = m.begin(); i != m.end(); i++) {
        cout << i->second << ", ";
    }

    return 0;
}