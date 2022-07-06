#include <iostream>
using namespace std;

int findIntersection(int arr1[], int n, int arr2[], int m){

    for (int i = 0, j = 0; i < n, j < m;) // this is called two pointers approach since two points (i and j) are used
    {
        if (arr1[i] == arr2[j])
        {
            cout<<arr1[i]<<endl;
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            // since elements are in increasing order and if j > i, it means there is no sense to check for further elements of j because they will be obviosly greater than current i not same
            i++;

        }     
        else if (arr1[i] > arr2[j])
        {
            j++;
        }     
    }
    
}

int main()
{
    int arr1[] = {1, 2, 3, 3};
    int size1 = sizeof(arr1)/sizeof(int);
    int arr2[] = {2, 2, 3, 3};
    int size2 = sizeof(arr2)/sizeof(int);

    findIntersection(arr1, size1, arr2, size2);

    return 0;
}
