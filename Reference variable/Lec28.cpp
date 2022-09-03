#include <iostream>
using namespace std;


// returning a refernece variable in function is a bad practice since that reference variable will die when it goes out of its funciton in which it is declared.
// It is alos true for funciotns returning pointers

int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

int* func2(int n){
    int* pointer = &n;
    return pointer;
}

// above both are bad practices

int main()
{

    return 0;
}