#include <iostream>
#include <vector>
#include <string>
// This program sorts a list of names alphabetically using a simple Selection Sort.
// Selection Sort works by repeatedly finding the minimum element and swapping it to the front.
int main()
{
    std::vector<std::string> names = {"Zachary", "Alice", "Charlie", "Bob", "Diana", "Eve"};
    int n = names.size();
    // Selection Sort algorithm
    for (int i = 0; i < n - 1; i++)
    {
        // Find the index of the alphabetically smallest name in the unsorted part
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (names[j] < names[minIndex])
            {
                minIndex = j;
            }
        }
        // Swap the found minimum name with the first name of the unsorted part
        std::string temp = names[i];
        names[i] = names[minIndex];
        names[minIndex] = temp;
    }
    // Print the sorted names
    std::cout << "Names sorted alphabetically:\n";
    for (int i = 0; i < names.size(); i++)
    {
        std::cout << " - " << names[i] << "\n";
    }
    return 0;
}
