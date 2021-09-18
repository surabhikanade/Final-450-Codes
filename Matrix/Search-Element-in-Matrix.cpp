#include<iostream>
#include <bits/stdc++.h> 

using namespace std; 

int searchnumber(int a[4][4], int num, int x) 
{ 
  if (num == 0) 
    return -1; 
  int smallest = a[0][0], largest = a[num - 1][num - 1]; 
  if (x < smallest || x > largest) 
    return -1; 
  
  int i = 0, j = num - 1; 

  while (i < num && j >= 0) 
  { 
    if (a[i][j] == x) 
    { 
      cout << " Found at "<< i << ", " << j; 
      return 1; 
    } 
    if (a[i][j] > x) 
      j--; 
    else 
      i++; 
  } 
    cout << " not found"; 
  return 0; 
} 

int main() 
{ 

  int a[4][4] = { { 1, 2, 3, 4 }, 
          { 10, 12, 13, 14 }, 
          { 20, 22, 23,24  }, 
          { 30, 32, 33, 34 } }; 

  searchnumber(a, 23, 33); 

  return 0; 
} 