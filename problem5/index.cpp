#include <iostream>
#include <vector>

int climbStairs(int n) {
    if (n == 1) return 1;
    std::vector<int> array(n + 1);
    array[1] = 1;
    array[2] = 2;
    for (int i = 3; i <= n; i++)
        array[i] = array[i - 1] + array[i - 2];
    return array[n];
}

int main() {
    std::cout << climbStairs(3) << std::endl;
    return 0;
}
