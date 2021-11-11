/* Question Link:- https://www.hackerrank.com/challenges/30-binary-numbers/problem */
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int binaryNumber(int n)
{
    int count = 0, maxTimes = 0, remainder;
    while (n > 0)
    {
        remainder = n % 2;
        if (remainder == 1)
        {
            count++;
            if (count > maxTimes)
                maxTimes = count;
        }
        else
            count = 0;
        n = n / 2;
    }
    return maxTimes;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));
    cout << binaryNumber(n) << endl;
    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
