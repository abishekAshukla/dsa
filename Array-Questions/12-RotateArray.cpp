// https://leetcode.com/problems/rotate-array/submissions/

#include <iostream>
#include <vector>
using namespace std;

// void rotateArray(int arr[], int size, int k)
// {
//     int arr2[6];
//     for (int i = 0; i < size; i++)
//     {
//         if ((i + k) < size)
//         {
//             arr2[i + k] = arr[i];
//         }
//         else
//         {
//             arr2[(i + k) - size] = arr[i];
//         }
//     }
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = arr2[i];
//     }
// }

void rotateArray(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        if ((i + k) < nums.size())
        {
            temp[i + k] = nums[i];
        }
        else
        {
            temp[(i + k) - nums.size()] = nums[i];
        }
    }
    nums = temp;
}

int main()
{
    // int arr[] = {3, 9, 11, 12, 16, 17};
    // int size = sizeof(arr) / sizeof(int);

    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // rotateArray(arr, size, 3);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    vector<int> v1;
    v1.push_back(3);
    v1.push_back(9);
    v1.push_back(11);
    v1.push_back(12);
    // v1.push_back(16);
    // v1.push_back(17);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    rotateArray(v1, 3);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    return 0;
}
