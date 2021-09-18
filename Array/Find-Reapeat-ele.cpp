#include<bits/stdc++.h>
#include<iostream>
   
int main()  
{  
   int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>> arr[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i]<<" ";
    // }
      
    //Calculate length of array arr  
    int length = sizeof(arr)/sizeof(arr[0]);  
      
    cout<<"Repeated element in array";


    for(int i = 0; i < length; i++) 
    {  
        for(int j = i + 1; j < length; j++)
         {  
            if(arr[i] == arr[j])  
               
                cout<<arr[j];
        }  
    }  
    return 0;  
} 

