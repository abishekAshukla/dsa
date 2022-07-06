#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    // Write a program to find minimum and maximum value out of an integer array
    
    int array[] = {3, 5, 4, 18, 34, 2, -1, 9, 16};
    int minimum = array[0], maximum = array[0];

    for (int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    cout << minimum << endl;
    cout << maximum << endl;
    cout<<"Print the maximim value "<<max(56, 90)<<endl; // max() gives bigger value out of the parameters provided to it


    return 0;
}
