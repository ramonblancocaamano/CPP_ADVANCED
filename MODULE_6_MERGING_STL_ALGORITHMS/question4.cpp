#include <algorithm>
#include <iostream>
#include <set>

using namespace std;

int main() {
    char s[] = {"lazybrownfox"};
    char pattern1[] = {"ybr"};
    char pattern2[] = {"nfo"};

    sort(s, s + 8);  // LINE I
    sort(pattern1, pattern1 + 3);  // LINE II
    sort(pattern2, pattern2 + 3);

    cout << includes(s, s + 7, pattern1, pattern1 + 3) << ", "
         << includes(s, s + 6, pattern2, pattern2 + 3);

    return 0;
}