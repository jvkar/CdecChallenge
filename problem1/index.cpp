#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arrayA = {1, 3, 5};
    std::vector<int> arrayB = {2, 4, 6, 7};
    std::vector<int> arrayC;
    int lengthA = arrayA.size();
    
    arrayC.insert(arrayC.end(), arrayA.begin(), arrayA.end());
    arrayC.insert(arrayC.end(), arrayB.begin(), arrayB.end());
    std::sort(arrayC.begin(), arrayC.end());
    
    arrayA.clear();
    arrayB.clear();
    
    arrayA.assign(arrayC.begin(), arrayC.begin() + lengthA);
    arrayB.assign(arrayC.begin() + lengthA, arrayC.end());
    
    for (int num : arrayA) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    for (int num : arrayB) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
