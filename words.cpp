#include <iostream>
#include <vector>
#include <string>
// This program sorts a list of words by their length using a simple Selection Sort.
// Shorter words will appear first.
int main()
{
    std::vector<std::string> words = {
        "strawberry", "apple", "banana", "kiwi", "pear", "fig", "pineapple"};
    int n = words.size();
    // Selection Sort based on word length
    for (int i = 0; i < n - 1; i++)
    {
        // Find the index of the shortest word in the unsorted part
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (words[j].length() < words[minIndex].length())
            {
                minIndex = j;
            }
        }
        // Swap the found shortest word with the first word of the unsorted part
        std::string temp = words[i];
        words[i] = words[minIndex];
        words[minIndex] = temp;
    }
    // Print the sorted words
    std::cout << "Words sorted by length:\n";
    for (int i = 0; i < words.size(); i++)
    {
        std::cout << " - " << words[i] << " (length: " << words[i].length() << ")\n";
    }
    return 0;
}
