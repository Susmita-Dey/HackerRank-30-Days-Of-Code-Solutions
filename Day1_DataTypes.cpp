/* Question Link:- https://www.hackerrank.com/challenges/30-data-types/problem */

#include "bits\stdc++.h"
using namespace std;

int main()
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b;
    string str;
    // Read and save an integer, double, and String to your variables.
    cin >> a;
    cin >> b;
    getline(cin >> ws, str);
    // Print the sum of both integer variables on a new line.
    cout << i + a << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + b << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + str << endl;
    return 0;
}

/* Note:- 
To consume the whitespace or newline between the end of a token 
and the beginning of the next line:

// eat whitespace
getline(cin >> ws, s2);

where s2 is a string. 
*/
