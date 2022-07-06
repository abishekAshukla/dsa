// Pattern questions
#include <iostream>
using namespace std;

int main()
{
    // pattern 1
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {

    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << j;
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // pattern 2
    // int n;
    // cin >> n;

    // int count = 1;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout << count<<" ";
    //         count++;
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // pattern 3
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << "*";
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // pattern 4
    // int n;
    // cin >> n;

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout << i;
    //         j++;
    //     }

    //     cout << endl;
    //     i++;
    // }

    // pattern 5
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int count = row;
    //     int i = 0;
    //     while (col <= row)
    //     {
    //         cout << row + i; // method 1
    //         // cout<<count; // method 2
    //         count++;
    //         i++;
    //         col++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 6
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int count = row;
    //     while (col <= row)
    //     {
    //         cout << row - col + 1 << " ";
    //         count--;
    //         col++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 7
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + row - 1; // using typecasting
    //         cout << ch;
    //         col++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 8
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + col - 1;
    //         cout << ch;
    //         col++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 9
    // int n;
    // cin >> n;

    // int count = 0;
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     while (col <= n)
    //     {
    //         char ch = 'A' + count;
    //         cout << ch;
    //         col++;
    //         count++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 10
    // int n;
    // cin >> n;

    // method 1:
    // int row = 1;
    // int count = n;
    // while (row <= n)
    // {
    //     int col = 1;
    //     int count2 = count;
    //     while (col <= row)
    //     {
    //         char ch = 'A' + count2 - 1;
    //         cout << ch;
    //         col++;
    //         count2++;
    //     }

    //     cout << endl;
    //     row++;
    //     count--;
    // }

    // method 2 (easier) :
    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1;
    //     char start = 'A' + n - row;
    //     while (col <= row)
    //     {
    //         char ch = 'A'  - 1;
    //         cout << start;
    //         start++;
    //         col++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 11
    // n-row = number of spaces
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     // printing space
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     // printing star
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "*";
    //         col++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 12

    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = n - row + 1;
    //     while (col)
    //     {
    //         cout << "*";
    //         col--;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 13
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int spaces = row - 1;
    //     while (spaces) // printing " " spaces times
    //     {
    //         cout << " ";
    //         spaces--;
    //     }

    //     int star = n - row + 1;
    //     while (star) // printing "*" star times
    //     {
    //         cout << "*";
    //         star--;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 14
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int spaces = row - 1;
    //     while (spaces) // printing " " spaces times
    //     {
    //         cout << " ";
    //         spaces--;
    //     }

    //     int count = row;
    //     while (count <= n)
    //     {
    //         cout << count;
    //         count++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    // pattern 15
    int n;
    cin >> n;

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        int spaces = n - row; // triangle1
        while (spaces)
        {
            cout << " ";
            spaces--;
        }

        int col = 1;  // triangle2
        while (col <= row)
        {
            cout << col;
            col++;
        }

        int col2 = row - 1; // triangle3
        while (col2)
        {
            cout << col2;

            col2--;
        }

        cout << endl;
        row++;
    }

    // pattern 16
    // int n;
    // cin >> n;

    // int row = 1;
    // while (row <= n)
    // {
    //     int col = 1; // triangle1
    //     while (col <= n - row + 1)
    //     {
    //         cout << col;
    //         col++;
    //     }

    //     int col2 = 1; // triangle2
    //     while (col2 <= row)
    //     {
    //         if (col2 == 1)
    //         {
    //             cout << "";
    //         }
    //         else
    //         {
    //             cout << "**";
    //         }
    //         col2++;
    //     }

    //     int col3 = 1; // triangle 3
    //     int count = n - row + 1;
    //     while (col3 <= n - row + 1)
    //     {
    //         cout << count;
    //         count--;
    //         col3++;
    //     }

    //     cout << endl;
    //     row++;
    // }

    return 0;
}
