#include <iostream>
#include <vector>
using namespace std;

// https://leetcode.com/problems/unique-number-of-occurrences/submissions/896602755/

void printVector(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool findDuplicates(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        // sort(counter.begin(), counter.end());
        if (arr[i] == arr[i - 1])
        {
            return false;
        }
    }
    return true;
}

bool uniqueOccurrences(vector<int> &arr)
{
    // sort(arr.begin(), arr.end());
    vector<int> counter;
    int count = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            count++;
        }
        else
        {
            counter.push_back(count);
            count = 1;
        }
    }
    counter.push_back(count);

    for (int i = 1; i < counter.size(); i++)
    {
        // sort(counter.begin(), counter.end());
        if (counter[i] == counter[i - 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // vector<int> vect{1, 2, 2, 1, 1, 3};
    vector<int> vect{1, 1, 1, 2, 2, 3};
    cout<<uniqueOccurrences(vect);

    return 0;
}
