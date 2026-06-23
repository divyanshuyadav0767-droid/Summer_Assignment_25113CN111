#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    // Create a map to store character frequencies
    unordered_map<char, int> charCount;

    // Count frequency of each character
    for (char c : str)
    {
        if (c != ' ')
        { // Ignore spaces
            charCount[c]++;
        }
    }

    // Find the character with maximum frequency
    char maxChar = '\0';
    int maxCount = 0;

    for (auto pair : charCount)
    {
        if (pair.second > maxCount)
        {
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }

    // Display result
    if (maxChar != '\0')
    {
        cout << "\nMaximum occurring character: '" << maxChar << "'" << endl;
        cout << "Frequency: " << maxCount << " times" << endl;
    }
    else
    {
        cout << "No characters found!" << endl;
    }

    // Optional: Display all character frequencies
    cout << "\n--- All Character Frequencies ---" << endl;
    for (auto pair : charCount)
    {
        cout << "'" << pair.first << "': " << pair.second << " times" << endl;
    }

    return 0;
}
