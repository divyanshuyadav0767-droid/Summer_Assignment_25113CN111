#include <iostream>
#include <string>
#include <sstream>

std::string findLongestWord(const std::string& sentence) {
    std::stringstream ss(sentence);
    std::string word;
    std::string longestWord = "";

    while (ss >> word) {
        // Strip basic punctuation (e.g. '.', ',', '!') from the word
        std::string cleanWord = "";
        for (char c : word) {
            if (!std::ispunct(c)) {
                cleanWord += c;
            }
        }

        if (cleanWord.length() > longestWord.length()) {
            longestWord = cleanWord;
        }
    }
    return longestWord;
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::cout << "The longest word is: \"" << findLongestWord(sentence) << "\"" << std::endl;
    return 0;
}