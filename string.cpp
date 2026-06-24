#include <iostream>
#include <string>

std::string compressString(const std::string& str) {
    if (str.empty()) return str;

    std::string compressed = "";
    int count = 1;

    for (size_t i = 1; i < str.length(); ++i) {
        if (str[i] == str[i - 1]) {
            count++;
        } else {
            compressed += str[i - 1] + std::to_string(count);
            count = 1;
        }
    }
    compressed += str[str.length() - 1] + std::to_string(count);

    return (compressed.length() < str.length()) ? compressed : str;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::cout << "Compressed string: " << compressString(input) << std::endl;
    return 0;
}