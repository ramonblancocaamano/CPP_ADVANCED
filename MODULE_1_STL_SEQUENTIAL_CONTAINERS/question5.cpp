#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1(4, 3);
    v1.push_back(4);
    for (vector<int>::iterator i = v1.rbegin(); i != v1.rend(); ++i) {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}