#include <iostream>
#include <set>
#include <vector>

using namespace std;

template <class T>
void print(T start, T end) {
    while (start != end) {
        std::cout << *start << ", ";
        start++;
    }
}

int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 7};

    vector<int> v(mynumbers, mynumbers + 7);
    multiset<int> s1(mynumbers, mynumbers + 7);

    for (int i = 9; i > 0; i) {
        double x = s1.pop();  // LINE I
        v.push_back(i + x);   // LINE II
    }

    print(v.begin(), v.end());
    cout << endl;

    return 0;
}