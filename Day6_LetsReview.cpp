/* Question Link:- https://www.hackerrank.com/challenges/30-review-loop/problem */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        for (int j = 0; j < str.length(); j++)
        {
            if (j % 2 == 0)
            {
                cout << str[j];
            }
        }
        cout << " ";
        for (int j = 0; j < str.length(); j++)
        {
            if (j % 2 != 0)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }

    return 0;
}
