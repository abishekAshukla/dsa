#include <iostream>
using namespace std;
#include <vector>

int minMergePaliindrome(vector<int> pali)
{
    int start = 0;
    int end = pali.size() - 1;
    bool isPali = true;
    int mergeLeftSum = 0;
    int mergeRightSum = 0;
    int numberOfMerges = 0;

    while (start <= end)
    {
        if (isPali)
        {
            if (pali[start] == pali[end])
            {
                start++;
                end--;
                isPali = true;
            }
            else
            {
                mergeLeftSum += pali[start];
                mergeRightSum += pali[end];
                numberOfMerges += 2;
                isPali = false;
                start++;
                end--;
            }
        }
        else
        {
            mergeLeftSum += pali[start];
            mergeRightSum += pali[end];
            numberOfMerges += 2;
            if (mergeLeftSum == mergeRightSum)
            {
                isPali = true;
                mergeLeftSum = 0;
                mergeRightSum = 0;
                start++;
                end--;
            }
            else
            {
                start++;
                end--;
            }
        }
    }

    if (numberOfMerges == 0)
    {
        return 0;
    }
    else
    {
        return numberOfMerges - 2;
    }
}

void minMerge(vector<int> vec)
{
    int start = 0;
    int end = vec.size() - 1;
    int mergers = 0;
    int leftSum = 0;
    int rightSum = 0;
    bool isPali = true;

    while (start <= end)
    {
        if (vec[start] == vec[end])
        {
            start++;
            end--;
        }
        else
        {
            leftSum += vec[start];
            rightSum += vec[end];
        }
    }
}

int main()
{
    int arr[] = {1, 3, 2, 4, 7, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    vector<int> pali = {1, 3, 2};

    return 0;
}