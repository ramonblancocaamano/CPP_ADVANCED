#include <algorithm>
#include <iostream>

using namespace std;

void printer(double i) {
    cout << i << ", ";  //
}

bool Compare(double a, double b) {
    return int(a) < int(b);  //
}

int main() {
    double mynumbers[] = {3.33, 9.19, 0.22, 2.12, 1.14, 4.45, 5.55};
    vector<double> v1(mynumbers, mynumbers + 7);

    stable_sort(d1.begin(), d1.end(), Compare);  // LINE I
    remove(v1.begin(), v1.end(), 2.12);          // LINE II
    for_each(v1.begin(), v1.end(), printer);

    return 0;
}