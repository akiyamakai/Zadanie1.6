#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    const int SIZE = 10; 
    int arr[SIZE] = { 1, 2, 3, 2, 4, 5, 1, 6, 4, 4 }; 

    std::unordered_map<int, int> frequencyMap;
    std::vector<int> duplicates; 

   
    for (int i = 0; i < SIZE; ++i) {
        frequencyMap[arr[i]]++;
    }

    
    for (const auto& pair : frequencyMap) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }

   
    if (duplicates.empty()) {
        std::cout << "There are no duplicate elements in the array." << std::endl;
    }
    else {
        std::cout << "Duplicate elements in an array: ";
        for (int duplicate : duplicates) {
            std::cout << duplicate << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
