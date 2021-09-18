// #include<bits/stdc++.h>

// using namespace std;

// string reverse(string str)
// {
    
//   for(int i = str.length() - 1; i >= 0; i--)
//     {
//         cout << str[i];
//     }
// }

// int main()
// {
//     int t ;
//     cin >> t ;

//     while(t--)
//     {
//         string s;
//         cin >> s;

//         cout << reverse(s) << endl;
//     }


// }

// A Simple Iterative C++ program to reverse
// a string
#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str)
{
	int n = str.length();

	// Swap character starting from two
	// corners
	for (int i = 0; i < n / 2; i++)
		swap(str[i], str[n - i - 1]);
}

// Driver program
int main()
{
	string str;
    cin >>str;

	reverseStr(str);
    
	cout << str;
	return 0;
}
