#include <iostream>
#include <vector>

int main() {
    int Array1[] = {1, 2, 3, 5, 6, 7};
    int Array2[] = {3, 4, 6, 7};
    std::vector<int> A3;

    for (int i : Array1) {
        for (int j : Array2) {
            if (i == j) {
                A3.push_back(i);
            }
        }
    }

    std::cout << "[";
    for (size_t i = 0; i < A3.size(); i++) {
        std::cout << A3[i];
        if (i < A3.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
