#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;

void printer(int i) { 
    cout << i << ", "; 
    }
int main() {
    int mynumbers[] = {3, 9, 0, 2, 1, 4, 5};
    deque<int> d1(mynumbers, mynumbers + 7);
    
    sort(d1.begin(), d1.end());
    d1.push_back(3);  // LINE I
    pair<deque<int>::iterator, deque<int>::iterator> result =
    equal_range(d1.begin(), d1.end(), 3);// LINE II
    for_each(result.first, result.second, printer);
    
    return 0;
}