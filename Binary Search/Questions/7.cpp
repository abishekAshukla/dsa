// Book Allocation Problem

#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int totalPagesAllotedToCurrentStudent = 0;

    for (int i = 0; i < n; i++)
    {
        if (totalPagesAllotedToCurrentStudent + arr[i] <= mid)
        {
            totalPagesAllotedToCurrentStudent += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false; // after allotting to all students, still some books are left to allott by keeping maxPages as mid
            }
            totalPagesAllotedToCurrentStudent = arr[i];
        }
    }
    return true; // completion of for loop, indicates all books have been allotted successfully by keeping maxPages as mid
}

int allocateBooks(int arr[], int n, int m)
{
    int ans = -1;
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int end = sum;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    cout << "Hello world" << endl;
    return 0;
}
