/* Question Link:- https://www.hackerrank.com/challenges/30-exceptions-string-to-integer/problem */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S;
    getline(cin, S);

    try
    {
        cout << stoi(S) << endl;
    }
    catch (const std::exception &e)
    {
        cout << "Bad String" << '\n';
    }

    return 0;
}
