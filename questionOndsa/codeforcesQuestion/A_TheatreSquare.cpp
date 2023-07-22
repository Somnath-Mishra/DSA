#include <iostream>
#include <cmath>

int main() {
    int n, m, a;
    std::cin >> n >> m >> a;

    // Calculate the number of flagstones needed in each dimension
    int x = std::ceil(static_cast<double>(n) / a);
    int y = std::ceil(static_cast<double>(m) / a);

    // Calculate the total number of flagstones needed
    long long totalFlagstones = static_cast<long long>(x) * static_cast<long long>(y);

    std::cout << totalFlagstones << std::endl;

    return 0;
}
