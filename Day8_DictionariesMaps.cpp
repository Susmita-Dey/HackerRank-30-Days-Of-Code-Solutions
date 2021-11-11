/* Question Link:- https://www.hackerrank.com/challenges/30-dictionaries-and-maps/problem */
#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n; //number of entries
    cin >> n;

    string names;
    map<string, int> phoneBook;

    for (int i = 0; i < n; i++)
    {
        cin >> names;
        if (!phoneBook[names])
        {
            cin >> phoneBook[names];
        }
    }

    while (cin >> names)
    {
        if (phoneBook[names])
        {
            cout << names << "=" << phoneBook[names] << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
    }

    return 0;
}