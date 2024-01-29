#include <algorithm>
#include <deque>
#include <iostream>

using namespace std;

class A {
    int a;

   public:
    A(int a) : a(a) {}

    int getA() const { return a; }
    int setA(int a) { this->a = a; }
};

int main() {
    int count;
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5, 6, 6, 9, 8, 2};

    deque<int> d(mynumbers, mynumbers + 12);

    count = count(d.begin(), d.end(), 6);  // LINE I

    cout << count << endl;

    return 0;
}