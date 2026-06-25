#include <iostream>
#include <vector>
#include <string>
// This program finds common characters across multiple strings (assuming lowercase a-z).
// It uses simple arrays to keep track of character counts.
int main()
{
    std::vector<std::string> words = {"bella", "label", "roller"};
    // An array to store the minimum frequency of each character (a to z) across all words
    // minFreq[0] is for 'a', minFreq[1] is for 'b', ..., minFreq[25] is for 'z'
    int minFreq[26];
    // Initialize the minFreq array using the first word
    // First, set all counts to 0
    for (int i = 0; i < 26; i++)
    {
        minFreq[i] = 0;
    }

    // Count characters in the first word
    std::string firstWord = words[0];
    for (int i = 0; i < firstWord.length(); i++)
    {
        char ch = firstWord[i];
        int index = ch - 'a'; // Convert character to index 0-25
        minFreq[index]++;
    }
    // Now check the rest of the words
    for (int i = 1; i < words.size(); i++)
    {
        // Count characters for the current word
        int currentFreq[26] = {0}; // Initialize all to 0
        std::string currentWord = words[i];
        for (int j = 0; j < currentWord.length(); j++)
        {
            char ch = currentWord[j];
            int index = ch - 'a';
            currentFreq[index]++;
        }
        // Keep only the minimum count for each character
        for (int k = 0; k < 26; k++)
        {
            if (currentFreq[k] < minFreq[k])
            {
                minFreq[k] = currentFreq[k];
            }
        }
    }
    // Print the common characters
    std::cout << "Common characters: ";
    for (int i = 0; i < 26; i++)
    {
        // If the character appeared in all words, its count will be > 0
        for (int j = 0; j < minFreq[i]; j++)
        {
            char ch = i + 'a'; // Convert index back to character
            std::cout << ch << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}
