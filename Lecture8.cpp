#include <iostream>
using namespace std;

int funcArr(int array[]){
    cout<<"funcArray is called "<<array[2]<<endl;
}

int main()
{
    int arr[100];
    for (int i = 0; i <= 99; i++)
    {
        arr[i] = 5;
    }
    cout<<arr[0]<<endl;
    cout<<arr[23]<<endl;
    cout<<arr[99]<<endl;

    funcArr(arr); // Remember: Whole array is not passing here but address of the first element that is base address of an array is passing thats why it will change the real values of your array unlike variables

    // printing length of array
    cout<<"Length of arr is "<<sizeof(arr)/sizeof(int)<<endl;



    
    return 0;
}
