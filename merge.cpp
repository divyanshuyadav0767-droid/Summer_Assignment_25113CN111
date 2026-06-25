#include <iostream>
#include <vector>
// Function to merge two sorted arrays (vectors) into a single sorted vector
std::vector<int> mergeSortedArrays(const std::vector<int> &arr1, const std::vector<int> &arr2)
{
    std::vector<int> merged;
    merged.reserve(arr1.size() + arr2.size());
    size_t i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            merged.push_back(arr1[i]);
            i++;
        }
        else
        {
            merged.push_back(arr2[j]);
            j++;
        }
    }
    // Append remaining elements of arr1, if any
    while (i < arr1.size())
    {
        merged.push_back(arr1[i]);
        i++;
    }
    // Append remaining elements of arr2, if any
    while (j < arr2.size())
    {
        merged.push_back(arr2[j]);
        j++;
    }
    return merged;
}
int main()
{
    std::vector<int> arr1 = {1, 3, 5, 7, 9};
    std::vector<int> arr2 = {2, 4, 6, 8, 10, 12};
    std::cout << "Array 1: ";
    for (int num : arr1)
        std::cout << num << " ";
    std::cout << "\nArray 2: ";
    for (int num : arr2)
        std::cout << num << " ";
    std::cout << "\n";
    std::vector<int> merged = mergeSortedArrays(arr1, arr2);
    std::cout << "Merged Sorted Array: ";
    for (int num : merged)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
