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
        charCount[c]++;
    }

    // Find the first character with frequency > 1
    for (char c : str)
    {
        if (charCount[c] > 1)
        {
            cout << "First repeating character: " << c << endl;
            return 0;
        }
    }

    // If no repeating character found
    cout << "No repeating character found!" << endl;

    return 0;
}
