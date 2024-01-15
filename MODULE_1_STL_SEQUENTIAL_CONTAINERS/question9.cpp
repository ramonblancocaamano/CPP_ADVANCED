#include <vector>
#include <iostream>
#include <stdexcept>


using namespace std;

int main() {
    int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v1(tab, tab + 10);
    vector<int> v2(v1.size(), 0);

    try {
        for (unsigned i = 0; i <= v1.size(); ++i) {
            int tmp = v1[i];               // LINE I
            v1[i] = v1.at(v1.size() - i);  // LINE II
            v1.at(i) = tmp;                // LINE III
            cout << v1[i] << " ";
        }
    } catch (...) {
        cout << "Exception!" << endl;
    }

    return 0;
}