// Print a given matrix in spiral form
// Difficulty Level : Medium
// Last Updated : 10 Aug, 2021
// Given a 2D array, print it in spiral form. See the following examples.

// Examples: 

// Input:  1    2   3   4
//         5    6   7   8
//         9   10  11  12
//         13  14  15  16
// Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
// Explanation: The output is matrix in spiral format. 

// Input:  1   2   3   4  5   6
//         7   8   9  10  11  12
//         13  14  15 16  17  18
// Output: 1 2 3 4 5 6 12 18 17 16 15 14 13 7 8 9 10 11
// Explanation :The output is matrix in spiral format.

// print matrix in spiral order

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row = 3, col = 3;
    int i = 0, j = 0;
    int temp_r = 0, temp_c = 0;

    while (temp_r < row && temp_c < col)
    {
        for (i = 0; i < col; i++)
        {
            printf("%d", arr[temp_r][i]);
        }
        temp_r++;
        for (i = temp_r; i < row; i++)
        {
            printf("%d", arr[i][col - 1]);
        }

        col--;

        if (temp_r < row)
        {
            for (i = col - 1; i >= temp_c; i--)
            {
                printf("%d", arr[row - 1][i]);
            }
            row--;
        }
        if (temp_c < col)
        {
            for (i = row - 1; i >= temp_r; i--)
            {
                printf("%d", arr[i][temp_c]);
            }
            temp_c++;
        }
    }
    return 0;
}