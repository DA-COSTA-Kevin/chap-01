#include <iostream>
#include <vector>

int main() {
    bool              a;
    std::string       b;
    std::vector<char> c;
    auto              d = 4;

    c.emplace_back('A');

    for (char val : c)
    { std::cout << val << std::endl; }

    std::cout << d << std::endl;

    return 0;
}