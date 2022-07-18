#include <iostream>
#include <unordered_set>
#include <iterator>
using namespace std;

// Covert array into set and compare the sizes of both

int main()
{
    int arr[] = {1, 3, 5, 7, 3, 9};
    int n = sizeof(arr) / sizeof(*arr);

    unordered_set<int> distinct(begin(arr), end(arr));
    bool hasDuplicates = n != distinct.size();

    if (hasDuplicates)
    {
        std::cout << "Array contains duplicates";
    }
    else
    {
        std::cout << "Array contains no duplicates";
    }

    return 0;
}
