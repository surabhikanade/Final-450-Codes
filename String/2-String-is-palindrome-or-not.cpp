#include <iostream>
#include <string.h>

using namespace std;

int main()
{
char a[100], b[100];

cout << "Enter the string :";
cin >> a;

/* Reversing the string */
int i, n = strlen(a);

for(i = 0; i < n; i++)
{
b[n-1-i] = a[i];
}

if (strcmp(a, b) == 0) /* Comparing input string with the reverse string */

cout << "The string is a palindrome"<< endl;
else
cout << "The string is not a palindrome"<< endl;

return 0;
}