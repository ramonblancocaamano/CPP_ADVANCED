#include <iostream>
#include <vector>

int main() {
    std::vector<int> v1;  // LINE I
    v1.push_back(10);
    std::cout << v1.front() << ":" << v1.back() << std::endl;
    return 0;
}