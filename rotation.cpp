#include <iostream>
#include <string>

bool isRotation(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }
    
    // Concatenate str1 with itself
    std::string temp = str1 + str1;
    
    // Check if str2 is a substring of the concatenated string
    return temp.find(str2) != std::string::npos;
}

int main() {
    std::string s1, s2;
    std::cout << "Enter first string: ";
    std::cin >> s1;
    std::cout << "Enter second string: ";
    std::cin >> s2;

    if (isRotation(s1, s2)) {
        std::cout << "\"" << s2 << "\" is a rotation of \"" << s1 << "\"" << std::endl;
    } else {
        std::cout << "\"" << s2 << "\" is NOT a rotation of \"" << s1 << "\"" << std::endl;
    }
    return 0;
}