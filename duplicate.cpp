#include <iostream>
#include <string>

std::string removeDuplicates(const std::string& str)
 {
    std::string result = "";
    for (char c : str) {
        // If 'c' is not found in 'result', add it
        if (result.find(c) == std::string::npos) {
            result += c;
        }
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "After removing duplicates: " << removeDuplicates(input) << std::endl;
    return 0;
}